#ifndef __MODEM_CD_H__
#define __MODEM_CD_H__

#include <linux/wakelock.h>
#include <linux/dmapool.h>
#include <linux/timer.h>
#include <linux/hrtimer.h>

#include <mach/ccci_config.h>
#include <mach/mt_ccci_common.h>

#define CHECKSUM_SIZE 0 //12
#define CLDMA_TXQ_NUM 8
#define CLDMA_RXQ_NUM 8
//#define ENABLE_CLDMA_TIMER
#define CLDMA_TIMER_LOOP 10 //ms
/* [521562] merge ALPS02212031(For_JHZ6735M_65C_L_ALPS.L1.MP3.V1_P82) patch by liming.zhu at 20150818 bigen*/
#define ENABLE_HS1_POLLING_TIMER
/* [521562] merge ALPS02212031(For_JHZ6735M_65C_L_ALPS.L1.MP3.V1_P82) patch by liming.zhu at 20150818 end*/
struct md_cd_queue {
	unsigned char index;
	struct ccci_modem *modem;
	struct ccci_port *napi_port;

	struct list_head *tr_ring; // a "pure" ring of request, NO "head"
	struct ccci_request *tr_done;
	/*
	 * Tx has 2 writers: 1 for packet fill and 1 for packet free, so an extra pointer and a lock 
	 * is used. Tx also has 1 reader: CLDMA OUT.
	 * Rx has 1 reader: packet read&free, and 1 writer: CLDMA IN.
	 */
	struct ccci_request *tx_xmit;
	int free_slot; // counter, only for Tx
	spinlock_t ring_lock; // lock for the counter, only for Tx
	wait_queue_head_t req_wq; // only for Tx
	int budget; // ring buffer size
	struct work_struct cldma_work;
	struct workqueue_struct *worker;
#ifdef CLDMA_TIMER_LOOP
	struct hrtimer cldma_poll_timer;
#endif
	u16 debug_id;
	DIRECTION dir;
	unsigned int busy_count;
};

struct md_cd_ctrl {
	struct ccci_modem * modem;
	// hardcode, max queue number should be synced with struct ccci_port@ccci_core.h
	struct md_cd_queue txq[CLDMA_TXQ_NUM];
	struct md_cd_queue rxq[CLDMA_RXQ_NUM];
	unsigned short txq_active;
	unsigned short rxq_active;
	atomic_t reset_on_going;
	atomic_t wdt_enabled;
	char   trm_wakelock_name[32];
	struct wake_lock trm_wake_lock;
	char   peer_wakelock_name[32];
	struct wake_lock peer_wake_lock;
	struct work_struct ccif_work;
	struct delayed_work ccif_delayed_work;
	/* [521562] merge ALPS02212031(For_JHZ6735M_65C_L_ALPS.L1.MP3.V1_P82) patch by liming.zhu at 20150818 bigen*/
#ifdef ENABLE_HS1_POLLING_TIMER
	struct timer_list hs1_polling_timer;
#endif/* [521562] merge ALPS02212031(For_JHZ6735M_65C_L_ALPS.L1.MP3.V1_P82) patch by liming.zhu at 20150818 end*/
	struct timer_list bus_timeout_timer;
#ifdef ENABLE_CLDMA_TIMER
	struct timer_list cldma_tx_timeout_timer[CLDMA_TXQ_NUM];
    u64 cldma_tx_timeout_timer_start[CLDMA_TXQ_NUM];
    u64 cldma_tx_timeout_timer_end[CLDMA_TXQ_NUM];
#endif
	spinlock_t cldma_timeout_lock; // this lock is using to protect CLDMA, not only for timeout checking
	struct work_struct cldma_irq_work;
	struct workqueue_struct *cldma_irq_worker;
	int channel_id; // CCIF channel
	struct work_struct wdt_work;
#if TRAFFIC_MONITOR_INTERVAL
	unsigned tx_traffic_monitor[CLDMA_TXQ_NUM];
	unsigned rx_traffic_monitor[CLDMA_RXQ_NUM];
	unsigned tx_pre_traffic_monitor[CLDMA_TXQ_NUM];
        u64   tx_done_timer_last_start_time[CLDMA_TXQ_NUM];
        unsigned int tx_done_timer_last_count[CLDMA_TXQ_NUM];

	struct timer_list traffic_monitor;
	unsigned long traffic_stamp;
#endif

	struct dma_pool *tgpd_dmapool;
	struct dma_pool *rgpd_dmapool;
	void __iomem *cldma_ap_ao_base;
	void __iomem *cldma_md_ao_base;
	void __iomem *cldma_ap_pdn_base;
	void __iomem *cldma_md_pdn_base;    
	void __iomem *md_rgu_base;
	void __iomem *md_boot_slave_Vector;
	void __iomem *md_boot_slave_Key;
	void __iomem *md_boot_slave_En;
	void __iomem *md_global_con0;
	void __iomem *ap_ccif_base;
	void __iomem *md_ccif_base;
#ifdef MD_PEER_WAKEUP
	void __iomem *md_peer_wakeup;
#endif
	void __iomem *md_bus_status;
	void __iomem *md_pc_monitor;
	void __iomem *md_topsm_status;
	void __iomem *md_ost_status;
	void __iomem *md_pll;

	unsigned int cldma_irq_id;
	unsigned int ap_ccif_irq_id;
	unsigned int md_wdt_irq_id;
	unsigned int ap2md_bus_timeout_irq_id;

	unsigned long cldma_irq_flags;
	unsigned long ap_ccif_irq_flags;
	unsigned long md_wdt_irq_flags;
	unsigned long ap2md_bus_timeout_irq_flags;

	struct md_hw_info *hw_info;

	unsigned long logic_ch_pkt_cnt[CCCI_MAX_CH_NUM];
	unsigned long logic_ch_pkt_pre_cnt[CCCI_MAX_CH_NUM];
};

#define QUEUE_LEN(a) (sizeof(a)/sizeof(struct md_cd_queue))

struct cldma_tgpd {
	u8	gpd_flags;
	u8	gpd_checksum;
	u16	debug_id;
	u32	next_gpd_ptr;
	u32	data_buff_bd_ptr;
	u16	data_buff_len;
	u8	desc_ext_len;
	u8	non_used;
} __attribute__ ((packed));

struct cldma_rgpd {
	u8	gpd_flags;
	u8	gpd_checksum;
	u16	data_allow_len;
	u32	next_gpd_ptr;
	u32	data_buff_bd_ptr;
	u16	data_buff_len;
	u16	debug_id;
} __attribute__ ((packed));

typedef enum {
	UNDER_BUDGET,
	REACH_BUDGET,
	PORT_REFUSE,
	NO_SKB,
	NO_REQ
} RX_COLLECT_RESULT;

static void inline md_cd_queue_struct_init(struct md_cd_queue *queue, struct ccci_modem *md,
	DIRECTION dir, unsigned char index, int bg)
{
	queue->dir = OUT;
	queue->index = index;
	queue->modem = md;
	queue->napi_port = NULL;
	
	queue->tr_ring = NULL;
	queue->tr_done = NULL;
	queue->tx_xmit = NULL;
	init_waitqueue_head(&queue->req_wq);
	queue->budget = bg;
	spin_lock_init(&queue->ring_lock);
	queue->debug_id = 0;
	queue->busy_count = 0;
}

#endif //__MODEM_CD_H__