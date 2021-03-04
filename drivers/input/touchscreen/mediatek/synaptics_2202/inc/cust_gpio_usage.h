
#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_SIM2_SCLK         GPIO0
#define GPIO_SIM2_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM2_SCLK_M_CONN_MCU_TMS   GPIO_MODE_07

#define GPIO_SIM2_SIO         GPIO1
#define GPIO_SIM2_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SIO_M_SIM2_SIO   GPIO_MODE_01
#define GPIO_SIM2_SIO_M_CONN_MCU_TRST_B   GPIO_MODE_07

#define GPIO_SIM1_SCLK         GPIO2
#define GPIO_SIM1_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM1_SCLK_M_CONN_MCU_TDI   GPIO_MODE_07

#define GPIO_SIM1_SIO         GPIO3
#define GPIO_SIM1_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SIO_M_SIM1_SIO   GPIO_MODE_01
#define GPIO_SIM1_SIO_M_CONN_MCU_TCK   GPIO_MODE_07

#define GPIO_BATT_ID_PULLUP         GPIO14
#define GPIO_BATT_ID_PULLUP_M_GPIO   GPIO_MODE_00
#define GPIO_BATT_ID_PULLUP_M_PWM   GPIO_MODE_02

#define GPIO_BAT_ID         GPIO15
#define GPIO_BAT_ID_M_GPIO   GPIO_MODE_00
#define GPIO_BAT_ID_M_PWM   GPIO_MODE_02

#define GPIO_FLASH_EN         GPIO16
#define GPIO_FLASH_EN_M_GPIO   GPIO_MODE_00
#define GPIO_FLASH_EN_M_PWM   GPIO_MODE_02

#define GPIO_VT_CAM_RESET_N         GPIO17
#define GPIO_VT_CAM_RESET_N_M_GPIO   GPIO_MODE_00

#define GPIO_CAMERA_CMRST_PIN         GPIO17
#define GPIO_CAMERA_CMRST_PIN_M_GPIO   GPIO_MODE_00

#define GPIO_VT_CAM_PWDN         GPIO18
#define GPIO_VT_CAM_PWDN_M_GPIO   GPIO_MODE_00

#define GPIO_CAMERA_CMPDN_PIN         GPIO18
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO   GPIO_MODE_00

#define GPIO_TOUCH_MAKER_ID         GPIO20
#define GPIO_TOUCH_MAKER_ID_M_GPIO   GPIO_MODE_00

#define GPIO_LCD_MAKER_ID         GPIO21
#define GPIO_LCD_MAKER_ID_M_GPIO   GPIO_MODE_00
#define GPIO_LCD_MAKER_ID_M_KCOL   GPIO_MODE_03

#define GPIO_1SEG_EN         GPIO22
#define GPIO_1SEG_EN_M_GPIO   GPIO_MODE_00
#define GPIO_1SEG_EN_M_PWM   GPIO_MODE_02

#define GPIO_1SEG_RESET_N         GPIO23
#define GPIO_1SEG_RESET_N_M_GPIO   GPIO_MODE_00
#define GPIO_1SEG_RESET_N_M_CLK   GPIO_MODE_02

#define GPIO_SDCARD_DET         GPIO24
#define GPIO_SDCARD_DET_M_GPIO   GPIO_MODE_00
#define GPIO_SDCARD_DET_M_MC1_INS   GPIO_MODE_02

#define GPIO_HALL_INT         GPIO25
#define GPIO_HALL_INT_M_GPIO   GPIO_MODE_00
#define GPIO_HALL_INT_M_EINT   GPIO_MODE_02

#define GPIO_PROXIMITY_INT         GPIO26
#define GPIO_PROXIMITY_INT_M_GPIO   GPIO_MODE_00
#define GPIO_PROXIMITY_INT_M_EINT   GPIO_MODE_02

#define GPIO_ALS_EINT_PIN         GPIO26
#define GPIO_ALS_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_EINT   GPIO_MODE_02

#define GPIO_COMPASS_INT         GPIO27
#define GPIO_COMPASS_INT_M_GPIO   GPIO_MODE_00
#define GPIO_COMPASS_INT_M_EINT   GPIO_MODE_02

#define GPIO_1SEG_INT         GPIO28
#define GPIO_1SEG_INT_M_GPIO   GPIO_MODE_00
#define GPIO_1SEG_INT_M_EINT   GPIO_MODE_02

#define GPIO_AUDIO_SEL         GPIO29
#define GPIO_AUDIO_SEL_M_GPIO   GPIO_MODE_00
#define GPIO_AUDIO_SEL_M_EINT   GPIO_MODE_02

#define GPIO_MINIABB_INT         GPIO30
#define GPIO_MINIABB_INT_M_GPIO   GPIO_MODE_00
#define GPIO_MINIABB_INT_M_EINT   GPIO_MODE_02
#define GPIO_MINIABB_INT_M_PWM   GPIO_MODE_03

#define GPIO_ACCEL_INT2         GPIO31
#define GPIO_ACCEL_INT2_M_GPIO   GPIO_MODE_00
#define GPIO_ACCEL_INT2_M_EINT   GPIO_MODE_02
#define GPIO_ACCEL_INT2_M_KROW   GPIO_MODE_03

#define GPIO_GYRO_EINT_PIN         GPIO31
#define GPIO_GYRO_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GYRO_EINT_PIN_M_EINT   GPIO_MODE_02
#define GPIO_GYRO_EINT_PIN_M_KROW   GPIO_MODE_03

#define GPIO_LCD_VSYNC         GPIO55
#define GPIO_LCD_VSYNC_M_GPIO   GPIO_MODE_00

#define GPIO_TOUCH_RESET_N         GPIO56
#define GPIO_TOUCH_RESET_N_M_GPIO   GPIO_MODE_00
#define GPIO_TOUCH_RESET_N_M_EINT   GPIO_MODE_04

#define GPIO_CTP_RST_PIN         GPIO56
#define GPIO_CTP_RST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_EINT   GPIO_MODE_04

#define GPIO_SIM_I2C_SCL         GPIO57
#define GPIO_SIM_I2C_SCL_M_GPIO   GPIO_MODE_00
#define GPIO_SIM_I2C_SCL_M_EINT   GPIO_MODE_04

#define GPIO_SIM_I2C_SDA         GPIO58
#define GPIO_SIM_I2C_SDA_M_GPIO   GPIO_MODE_00
#define GPIO_SIM_I2C_SDA_M_EINT   GPIO_MODE_04

#define GPIO_LCD_RESET_N         GPIO59
#define GPIO_LCD_RESET_N_M_GPIO   GPIO_MODE_00

#define GPIO_LCD_PWM         GPIO60
#define GPIO_LCD_PWM_M_GPIO   GPIO_MODE_00
#define GPIO_LCD_PWM_M_EINT   GPIO_MODE_04
#define GPIO_LCD_PWM_LPCE     0

#define GPIO_FLASH_LTD         GPIO61
#define GPIO_FLASH_LTD_M_GPIO   GPIO_MODE_00
#define GPIO_FLASH_LTD_M_CLK   GPIO_MODE_01

#define GPIO_NFC_MODE         GPIO63
#define GPIO_NFC_MODE_M_GPIO   GPIO_MODE_00
#define GPIO_NFC_MODE_M_EINT   GPIO_MODE_03

#define GPIO_NFC_IRQ         GPIO64
#define GPIO_NFC_IRQ_M_GPIO   GPIO_MODE_00
#define GPIO_NFC_IRQ_M_EINT   GPIO_MODE_03

#define GPIO_NFC_VEN         GPIO66
#define GPIO_NFC_VEN_M_GPIO   GPIO_MODE_00
#define GPIO_NFC_VEN_M_EINT   GPIO_MODE_03

#define GPIO_CAMERA_CMRST1_PIN         GPIO87
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_EINT   GPIO_MODE_01
#define GPIO_CAMERA_CMRST1_PIN_M_KCOL   GPIO_MODE_03

#define GPIO_MAIN_CAM0_RESET_N         GPIO87
#define GPIO_MAIN_CAM0_RESET_N_M_GPIO   GPIO_MODE_00
#define GPIO_MAIN_CAM0_RESET_N_M_EINT   GPIO_MODE_01
#define GPIO_MAIN_CAM0_RESET_N_M_KCOL   GPIO_MODE_03

#define GPIO_CAMERA_CMPDN1_PIN         GPIO88
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_EINT   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN1_PIN_M_KCOL   GPIO_MODE_03

#define GPIO_MAIN_CAM0_PWDN         GPIO88
#define GPIO_MAIN_CAM0_PWDN_M_GPIO   GPIO_MODE_00
#define GPIO_MAIN_CAM0_PWDN_M_EINT   GPIO_MODE_01
#define GPIO_MAIN_CAM0_PWDN_M_KCOL   GPIO_MODE_03

#define GPIO_SENSOR0_I2C_SCL         GPIO101
#define GPIO_SENSOR0_I2C_SCL_M_GPIO   GPIO_MODE_00
#define GPIO_SENSOR0_I2C_SCL_M_EINT   GPIO_MODE_02
#define GPIO_SENSOR0_I2C_SCL_M_SCL   GPIO_MODE_03

#define GPIO_SENSOR0_I2C_SDA         GPIO102
#define GPIO_SENSOR0_I2C_SDA_M_GPIO   GPIO_MODE_00
#define GPIO_SENSOR0_I2C_SDA_M_PWM   GPIO_MODE_02
#define GPIO_SENSOR0_I2C_SDA_M_SDA   GPIO_MODE_03

#define GPIO_CAM0_I2C_SCL         GPIO105
#define GPIO_CAM0_I2C_SCL_M_GPIO   GPIO_MODE_00
#define GPIO_CAM0_I2C_SCL_M_SCL   GPIO_MODE_01

#define GPIO_CAM0_I2C_SDA         GPIO106
#define GPIO_CAM0_I2C_SDA_M_GPIO   GPIO_MODE_00
#define GPIO_CAM0_I2C_SDA_M_SDA   GPIO_MODE_01

#define GPIO_KPD_KCOL0_PIN         GPIO107
#define GPIO_KPD_KCOL0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_KCOL   GPIO_MODE_01

#define GPIO_KPD_KCOL1_PIN         GPIO108
#define GPIO_KPD_KCOL1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KCOL1_PIN_M_EINT   GPIO_MODE_02
#define GPIO_KPD_KCOL1_PIN_M_KCOL   GPIO_MODE_01
#define GPIO_KPD_KCOL1_PIN_M_PWM   GPIO_MODE_03

#define GPIO_KPD_KROW0_PIN         GPIO110
#define GPIO_KPD_KROW0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KROW0_PIN_M_KROW   GPIO_MODE_01

#define GPIO_KPD_KROW1_PIN         GPIO111
#define GPIO_KPD_KROW1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KROW1_PIN_M_KROW   GPIO_MODE_01
#define GPIO_KPD_KROW1_PIN_M_PWM   GPIO_MODE_03

#define GPIO_I2C1_SCA_PIN         GPIO113
#define GPIO_I2C1_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_TOUCH_I2C_SCL         GPIO113
#define GPIO_TOUCH_I2C_SCL_M_GPIO   GPIO_MODE_00
#define GPIO_TOUCH_I2C_SCL_M_SCL   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         GPIO114
#define GPIO_I2C1_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_TOUCH_I2C_SDA         GPIO114
#define GPIO_TOUCH_I2C_SDA_M_GPIO   GPIO_MODE_00
#define GPIO_TOUCH_I2C_SDA_M_SDA   GPIO_MODE_01

#define GPIO_CTP_EINT_PIN         GPIO129
#define GPIO_CTP_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK   GPIO_MODE_05
#define GPIO_CTP_EINT_PIN_M_EINT   GPIO_MODE_02
#define GPIO_CTP_EINT_PIN_M_PWM   GPIO_MODE_01
#define GPIO_CTP_EINT_PIN_CLK     CLK_OUT1
#define GPIO_CTP_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_TOUCH_ATTN_N_INT         GPIO129
#define GPIO_TOUCH_ATTN_N_INT_M_GPIO   GPIO_MODE_00
#define GPIO_TOUCH_ATTN_N_INT_M_CLK   GPIO_MODE_05
#define GPIO_TOUCH_ATTN_N_INT_M_EINT   GPIO_MODE_02
#define GPIO_TOUCH_ATTN_N_INT_M_PWM   GPIO_MODE_01
#define GPIO_TOUCH_ATTN_N_INT_CLK     CLK_OUT1
#define GPIO_TOUCH_ATTN_N_INT_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GPS_LNA_PIN         GPIO136
#define GPIO_GPS_LNA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_EINT   GPIO_MODE_04
#define GPIO_GPS_LNA_PIN_M_BPI_BUS   GPIO_MODE_01
#define GPIO_GPS_LNA_PIN_M_ANT_SEL   GPIO_MODE_02
#define GPIO_GPS_LNA_PIN_M_SFCS2_MX   GPIO_MODE_03
#define GPIO_GPS_LNA_PIN_M_I2S_OUT_DAT   GPIO_MODE_05
#define GPIO_GPS_LNA_PIN_M_DBG_OUT   GPIO_MODE_06
#define GPIO_GPS_LNA_PIN_M_CONN_GPIO   GPIO_MODE_07

#define GPIO_COMMON_I2C_SCL         GPIO137
#define GPIO_COMMON_I2C_SCL_M_GPIO   GPIO_MODE_00
#define GPIO_COMMON_I2C_SCL_M_SCL   GPIO_MODE_03

#define GPIO_COMMON_I2C_SDA         GPIO138
#define GPIO_COMMON_I2C_SDA_M_GPIO   GPIO_MODE_00
#define GPIO_COMMON_I2C_SDA_M_CLK   GPIO_MODE_02
#define GPIO_COMMON_I2C_SDA_M_SDA   GPIO_MODE_03

#define GPIO_ACCDET_EINT_PIN         GPIO142
#define GPIO_ACCDET_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_EINT   GPIO_MODE_03
#define GPIO_ACCDET_EINT_PIN_M_KROW   GPIO_MODE_05

#define GPIO_EAR_SENSE_JACK         GPIO142
#define GPIO_EAR_SENSE_JACK_M_GPIO   GPIO_MODE_00
#define GPIO_EAR_SENSE_JACK_M_EINT   GPIO_MODE_03
#define GPIO_EAR_SENSE_JACK_M_KROW   GPIO_MODE_05

#define GPIO_LCD_BL_EN         GPIO144
#define GPIO_LCD_BL_EN_M_GPIO   GPIO_MODE_00
#define GPIO_LCD_BL_EN_M_EINT   GPIO_MODE_03
#define GPIO_LCD_BL_EN_M_KROW   GPIO_MODE_05
#define GPIO_LCD_BL_EN_M_PWM   GPIO_MODE_02

#define GPIO_ACCEL_INT         GPIO145
#define GPIO_ACCEL_INT_M_GPIO   GPIO_MODE_00
#define GPIO_ACCEL_INT_M_EINT   GPIO_MODE_03
#define GPIO_ACCEL_INT_M_KROW   GPIO_MODE_05
#define GPIO_ACCEL_INT_M_PWM   GPIO_MODE_02


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */


