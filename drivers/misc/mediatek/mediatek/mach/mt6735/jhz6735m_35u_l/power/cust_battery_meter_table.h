#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_scud_t0[] =
{
	{0  , 4326},         
	{2  , 4286},         
	{3  , 4261},         
	{5  , 4238},         
	{7  , 4219},         
	{8  , 4200},         
	{10 , 4180},         
	{12 , 4162},         
	{13 , 4144},         
	{15 , 4125},         
	{16 , 4106},         
	{18 , 4088},         
	{20 , 4075},         
	{21 , 4059},         
	{23 , 4042},         
	{25 , 4015},         
	{26 , 3979},         
	{28 , 3953},         
	{30 , 3933},         
	{31 , 3919},         
	{33 , 3909},         
	{35 , 3900},         
	{36 , 3890},         
	{38 , 3880},         
	{39 , 3869},         
	{41 , 3860},         
	{43 , 3850},         
	{44 , 3841},         
	{46 , 3831},         
	{48 , 3822},         
	{49 , 3814},         
	{51 , 3807},         
	{53 , 3801},         
	{54 , 3795},         
	{56 , 3789},         
	{58 , 3785},         
	{59 , 3781},         
	{61 , 3778},         
	{62 , 3775},         
	{64 , 3772},         
	{66 , 3770},         
	{67 , 3767},         
	{69 , 3765},         
	{71 , 3760},         
	{72 , 3756},         
	{74 , 3752},         
	{76 , 3747},         
	{77 , 3741},         
	{79 , 3733},         
	{81 , 3725},         
	{82 , 3717},         
	{84 , 3709},         
	{85 , 3703},         
	{87 , 3698},         
	{89 , 3693},         
	{90 , 3687},         
	{92 , 3677},         
	{94 , 3648},         
	{95 , 3584},         
	{97 , 3510},         
	{99 , 3448},          
  {100, 3391}    	       
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_scud_t1[] =
{
	{0  ,4325},         
	{2  ,4297},         
	{3  ,4275},         
	{5  ,4254},         
	{7  ,4234},         
	{8  ,4214},         
	{10 ,4196},         
	{12 ,4177},         
	{13 ,4161},         
	{15 ,4144},         
	{17 ,4125},         
	{18 ,4108},         
	{20 ,4091},         
	{22 ,4078},         
	{23 ,4066},         
	{25 ,4052},         
	{27 ,4025},         
	{29 ,3989},         
	{30 ,3964},         
	{32 ,3945},         
	{34 ,3931},         
	{35 ,3921},         
	{37 ,3911},         
	{39 ,3900},         
	{40 ,3887},         
	{42 ,3875},         
	{44 ,3862},         
	{45 ,3852},         
	{47 ,3841},         
	{49 ,3832},         
	{50 ,3823},         
	{52 ,3815},         
	{54 ,3808},         
	{55 ,3801},         
	{57 ,3795},         
	{59 ,3789},         
	{60 ,3785},         
	{62 ,3780},         
	{64 ,3777},         
	{65 ,3775},         
	{67 ,3771},         
	{69 ,3770},         
	{70 ,3768},         
	{72 ,3765},         
	{74 ,3764},         
	{75 ,3761},         
	{77 ,3759},         
	{79 ,3753},         
	{80 ,3745},         
	{82 ,3737},         
	{84 ,3726},         
	{86 ,3712},         
	{87 ,3701},         
	{89 ,3694},         
	{91 ,3689},         
	{92 ,3686},         
	{94 ,3683},         
	{96 ,3673},         
  {97 ,3622},    
	{99 ,3506},         
	{101,3334},          
  {101,3334}            
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_scud_t2[] =
{
	{0   , 4322},         
	{2   , 4297},         
	{3   , 4276},         
	{5   , 4257},         
	{7   , 4236},         
	{8   , 4216},         
	{10  , 4199},         
	{12  , 4178},         
	{14  , 4161},         
	{15  , 4143},         
	{17  , 4126},         
	{19  , 4107},         
	{20  , 4090},         
	{22  , 4074},         
	{24  , 4063},         
	{25  , 4052},         
	{27  , 4026},         
	{29  , 3997},         
	{31  , 3979},         
	{32  , 3966},         
	{34  , 3962},         
	{36  , 3954},         
	{37  , 3941},         
	{39  , 3928},         
	{41  , 3914},         
	{42  , 3896},         
	{44  , 3877},         
	{46  , 3860},         
	{48  , 3847},         
	{49  , 3837},         
	{51  , 3828},         
	{53  , 3820},         
	{54  , 3813},         
	{56  , 3806},         
	{58  , 3800},         
	{59  , 3794},         
	{61  , 3789},         
	{63  , 3784},         
	{65  , 3781},         
	{66  , 3777},         
	{68  , 3772},         
	{70  , 3769},         
	{71  , 3767},         
	{73  , 3765},         
	{75  , 3762},         
	{76  , 3759},         
	{78  , 3754},         
	{80  , 3747},         
	{82  , 3739},         
	{83  , 3730},         
	{85  , 3717},         
	{87  , 3700},         
	{88  , 3687},         
	{90  , 3684},         
	{92  , 3683},         
	{93  , 3683},         
	{95  , 3679},         
	{97  , 3646},         
	{99  , 3550},         
	{100 , 3368},         
	{100 , 3368},          
  {100 , 3368}    	
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_scud_t3[] =
{
	{0   , 4327},         
	{2   , 4297},         
	{3   , 4278},         
	{5   , 4259},         
	{7   , 4239},         
	{8   , 4220},         
	{10  , 4201},         
	{12  , 4182},         
	{14  , 4164},         
	{15  , 4147},         
	{17  , 4127},         
	{19  , 4109},         
	{20  , 4091},         
	{22  , 4075},         
	{24  , 4058},         
	{25  , 4042},         
	{27  , 4027},         
	{29  , 4010},         
	{31  , 3996},         
	{32  , 3982},         
	{34  , 3969},         
	{36  , 3956},         
	{37  , 3943},         
	{39  , 3930},         
	{41  , 3918},         
	{42  , 3905},         
	{44  , 3888},         
	{46  , 3869},         
	{47  , 3853},         
	{49  , 3841},         
	{51  , 3831},         
	{53  , 3822},         
	{54  , 3815},         
	{56  , 3807},         
	{58  , 3801},         
	{59  , 3795},         
	{61  , 3789},         
	{63  , 3784},         
	{64  , 3780},         
	{66  , 3775},         
	{68  , 3770},         
	{70  , 3766},         
	{71  , 3760},         
	{73  , 3752},         
	{75  , 3744},         
	{76  , 3741},         
	{78  , 3735},         
	{80  , 3729},         
	{81  , 3721},         
	{83  , 3713},         
	{85  , 3701},         
	{86  , 3686},         
	{88  , 3670},         
	{90  , 3668},         
	{92  , 3668},         
	{93  , 3667},         
	{95  , 3664},         
	{97  , 3637},         
	{98  , 3551},         
	{100 , 3396},         
	{100 , 3396},          
  {100 , 3396}           
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_scud_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_scud_t0[] =
{
	{1825 ,4326},         
	{1825 ,4286},         
	{1775 ,4261},         
	{1725 ,4238},         
	{1680 ,4219},         
	{1638 ,4200},         
	{1598 ,4180},         
	{1568 ,4162},         
	{1535 ,4144},         
	{1503 ,4125},         
	{1478 ,4106},         
	{1455 ,4088},         
	{1445 ,4075},         
	{1430 ,4059},         
	{1418 ,4042},         
	{1388 ,4015},         
	{1338 ,3979},         
	{1308 ,3953},         
	{1300 ,3933},         
	{1295 ,3919},         
	{1295 ,3909},         
	{1300 ,3900},         
	{1298 ,3890},         
	{1293 ,3880},         
	{1288 ,3869},         
	{1285 ,3860},         
	{1280 ,3850},         
	{1283 ,3841},         
	{1280 ,3831},         
	{1285 ,3822},         
	{1288 ,3814},         
	{1293 ,3807},         
	{1300 ,3801},         
	{1305 ,3795},         
	{1308 ,3789},         
	{1315 ,3785},         
	{1330 ,3781},         
	{1348 ,3778},         
	{1365 ,3775},         
	{1388 ,3772},         
	{1420 ,3770},         
	{1448 ,3767},         
	{1485 ,3765},         
	{1515 ,3760},         
	{1553 ,3756},         
	{1593 ,3752},         
	{1625 ,3747},         
	{1670 ,3741},         
	{1713 ,3733},         
	{1748 ,3725},         
	{1795 ,3717},         
	{1838 ,3709},         
	{1890 ,3703},         
	{1945 ,3698},         
	{2010 ,3693},         
	{2093 ,3687},         
	{2200 ,3677},         
	{2313 ,3648},         
	{2468 ,3584},         
	{2283 ,3510},         
	{2128 ,3448},          
  {1985 ,3391}              	       
};      

// T1 0C
R_PROFILE_STRUC r_profile_scud_t1[] =
{
	{1078, 4325},         
	{1078, 4297},         
	{1078, 4275},         
	{1075, 4254},         
	{1065, 4234},         
	{1050, 4214},         
	{1040, 4196},         
	{1028, 4177},         
	{1018, 4161},         
	{1010, 4144},         
	{998 , 4125},         
	{993 , 4108},         
	{983 , 4091},         
	{988 , 4078},         
	{990 , 4066},         
	{992 , 4052},         
	{963 , 4025},         
	{925 , 3989},         
	{905 , 3964},         
	{895 , 3945},         
	{885 , 3931},         
	{888 , 3921},         
	{888 , 3911},         
	{878 , 3900},         
	{865 , 3887},         
	{845 , 3875},         
	{840 , 3862},         
	{838 , 3852},         
	{830 , 3841},         
	{835 , 3832},         
	{835 , 3823},         
	{838 , 3815},         
	{843 , 3808},         
	{850 , 3801},         
	{848 , 3795},         
	{855 , 3789},         
	{863 , 3785},         
	{870 , 3780},         
	{883 , 3777},         
	{895 , 3775},         
	{905 , 3771},         
	{928 , 3770},         
	{953 , 3768},         
	{975 , 3765},         
	{1000, 3764},         
	{1030, 3761},         
	{1063, 3759},         
	{1093, 3753},         
	{1123, 3745},         
	{1158, 3737},         
	{1190, 3726},         
	{1230, 3712},         
	{1278, 3701},         
	{1330, 3694},         
	{1390, 3689},         
	{1465, 3686},         
	{1560, 3683},         
	{1665, 3673},         
	{1745, 3622},         
	{1858, 3506},         
	{1428, 3334},          
  {1428, 3334}         
};     

// T2 25C
R_PROFILE_STRUC r_profile_scud_t2[] =
{
	{313   , 4322},         
	{313   , 4297},         
	{310   , 4276},         
	{313   , 4257},         
	{310   , 4236},         
	{313   , 4216},         
	{315   , 4199},         
	{310   , 4178},         
	{313   , 4161},         
	{310   , 4143},         
	{318   , 4126},         
	{318   , 4107},         
	{318   , 4090},         
	{318   , 4074},         
	{330   , 4063},         
	{348   , 4052},         
	{330   , 4026},         
	{328   , 3997},         
	{330   , 3979},         
	{325   , 3966},         
	{340   , 3962},         
	{348   , 3954},         
	{343   , 3941},         
	{340   , 3928},         
	{340   , 3914},         
	{328   , 3896},         
	{308   , 3877},         
	{295   , 3860},         
	{283   , 3847},         
	{285   , 3837},         
	{285   , 3828},         
	{285   , 3820},         
	{290   , 3813},         
	{288   , 3806},         
	{293   , 3800},         
	{290   , 3794},         
	{293   , 3789},         
	{293   , 3784},         
	{295   , 3781},         
	{295   , 3777},         
	{293   , 3772},         
	{295   , 3769},         
	{298   , 3767},         
	{303   , 3765},         
	{305   , 3762},         
	{308   , 3759},         
	{310   , 3754},         
	{310   , 3747},         
	{310   , 3739},         
	{323   , 3730},         
	{335   , 3717},         
	{338   , 3700},         
	{343   , 3687},         
	{355   , 3684},         
	{375   , 3683},         
	{413   , 3683},         
	{450   , 3679},         
	{483   , 3646},         
	{540   , 3550},         
	{720   , 3368},         
	{720   , 3368},          
  {720   , 3368}               
}; 

// T3 50C
R_PROFILE_STRUC r_profile_scud_t3[] =
{
	{143 , 4327},         
	{143 , 4297},         
	{143 , 4278},         
	{143 , 4259},         
	{140 , 4239},         
	{143 , 4220},         
	{145 , 4201},         
	{148 , 4182},         
	{148 , 4164},         
	{150 , 4147},         
	{150 , 4127},         
	{153 , 4109},         
	{148 , 4091},         
	{152 , 4075},         
	{155 , 4058},         
	{158 , 4042},         
	{160 , 4027},         
	{160 , 4010},         
	{163 , 3996},         
	{165 , 3982},         
	{170 , 3969},         
	{175 , 3956},         
	{178 , 3943},         
	{183 , 3930},         
	{190 , 3918},         
	{190 , 3905},         
	{180 , 3888},         
	{160 , 3869},         
	{148 , 3853},         
	{145 , 3841},         
	{140 , 3831},         
	{145 , 3822},         
	{143 , 3815},         
	{145 , 3807},         
	{148 , 3801},         
	{148 , 3795},         
	{148 , 3789},         
	{153 , 3784},         
	{158 , 3780},         
	{160 , 3775},         
	{155 , 3770},         
	{160 , 3766},         
	{155 , 3760},         
	{150 , 3752},         
	{143 , 3744},         
	{150 , 3741},         
	{148 , 3735},         
	{148 , 3729},         
	{145 , 3721},         
	{153 , 3713},         
	{153 , 3701},         
	{150 , 3686},         
	{143 , 3670},         
	{145 , 3668},         
	{155 , 3668},         
	{165 , 3667},         
	{178 , 3664},         
	{173 , 3637},         
	{193 , 3551},         
	{248 , 3396},         
	{248 , 3396},          
  {248 , 3396}     	       
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_scud_temperature[] =
{
  {0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  
};    
 // BYD battery parameters
 // T0 -10C  75
BATTERY_PROFILE_STRUC battery_profile_byd_t0[] =
{
	{0  , 4284},         
	{3  , 4255},         
	{5  , 4230},         
	{8  , 4203},         
	{11 , 4166},         
	{14 , 4127},         
	{16 , 4101},         
	{19 , 4086},         
	{22 , 4069},         
	{24 , 4048},         
	{27 , 4027},         
	{30 , 4008},         
	{32 , 3991},         
	{35 , 3978},         
	{38 , 3966},         
	{41 , 3955},         
	{43 , 3944},         
	{46 , 3934},         
	{49 , 3921},         
	{51 , 3909},         
	{54 , 3896},         
	{57 , 3882},         
	{60 , 3869},         
	{62 , 3857},         
	{65 , 3846},         
	{68 , 3836},         
	{70 , 3826},         
	{73 , 3817},         
	{76 , 3811},         
	{78 , 3805},         
	{81 , 3800},         
	{84 , 3798},         
	{87 , 3795},         
	{89 , 3793},         
	{92 , 3792},         
	{95 , 3790},         
	{97 , 3789},         
	{100, 3787},         
	{103, 3784},         
	{106, 3783},         
	{108, 3781},         
	{111, 3778},         
	{114, 3777},         
	{116, 3773},         
	{119, 3770},         
	{122, 3766},         
	{124, 3762},         
	{127, 3756},         
	{130, 3752},         
	{133, 3745},         
	{135, 3738},         
	{138, 3729},         
	{141, 3721},         
	{143, 3711},         
	{145, 3703},         
	{146, 3700},         
	{147, 3698},         
	{148, 3695},         
	{148, 3694},         
	{149, 3692},         
	{149, 3691},          
  {150, 3691},    	       
  {150, 3689},     
  {151, 3688},      
  {151, 3687},      
  {152, 3687},      
  {152, 3686},      
  {153, 3686},      
  {153, 3685},      
  {153, 3685},      
  {154, 3684},      
  {154, 3683},      
  {154, 3683},      
  {154, 3683},      
  {155, 3682}      
 };                
// T1 0C   79      
BATTERY_PROFILE_STRUC battery_profile_byd_t1[] =
{                
	{0  ,4315},         
	{2  ,4271},         
	{4  ,4227},         
	{5  ,4202},         
	{7  ,4182},         
	{9  ,4166},         
	{11 ,4150},         
	{13 ,4135},         
	{15 ,4119},         
	{16 ,4104},         
	{18 ,4089},         
	{20 ,4078},         
	{22 ,4064},         
	{24 ,4050},         
	{25 ,4034},         
	{27 ,4017},         
	{29 ,4001},         
	{31 ,3987},         
	{33 ,3975},         
	{35 ,3964},         
	{36 ,3954},         
	{38 ,3942},         
	{40 ,3930},         
	{42 ,3917},         
	{44 ,3902},         
	{45 ,3887},         
	{47 ,3874},         
	{49 ,3862},         
	{51 ,3852},         
	{53 ,3842},         
	{55 ,3833},         
	{56 ,3825},         
	{58 ,3819},         
	{60 ,3812},         
	{62 ,3805},         
	{64 ,3801},         
	{65 ,3796},         
	{67 ,3791},         
	{69 ,3787},         
	{71 ,3783},         
	{73 ,3782},         
	{75 ,3780},         
	{76 ,3779},         
	{78 ,3777},         
	{80 ,3776},         
	{82 ,3774},         
	{84 ,3771},         
	{86 ,3768},         
	{87 ,3766},         
	{89 ,3762},         
	{91 ,3758},         
	{93 ,3752},         
	{95 ,3745},         
	{96 ,3737},         
	{98 ,3729},         
	{100,3719},         
	{102,3706},         
	{104,3696},         
  {106,3688},    
	{107,3683},         
	{109,3679},          
  {111,3676},            
  {113,3671},    
  {115,3663},    
  {115,3637},    
  {116,3618},    
  {117,3603},    
  {117,3587},    
  {117,3573},    
  {118,3561},    
  {118,3550},    
  {118,3539},    
  {118,3529},    
  {118,3520},    
  {119,3511}     
};            
              
// T2 25C     75
BATTERY_PROFILE_STRUC battery_profile_byd_t2[] =
{
	{0   , 4324},         
	{1   , 4301},         
	{3   , 4283},         
	{4   , 4265},         
	{6   , 4249},         
	{7   , 4232},         
	{8   , 4216},         
	{10  , 4201},         
	{11  , 4186},         
	{13  , 4169},         
	{14  , 4155},         
	{15  , 4140},         
	{17  , 4124},         
	{18  , 4110},         
	{19  , 4097},         
	{21  , 4083},         
	{22  , 4071},         
	{24  , 4057},         
	{25  , 4045},         
	{26  , 4030},         
	{28  , 4016},         
	{29  , 4002},         
	{31  , 3990},         
	{32  , 3979},         
	{33  , 3969},         
	{35  , 3961},         
	{36  , 3951},         
	{38  , 3940},         
	{39  , 3930},         
	{40  , 3920},         
	{42  , 3909},         
	{43  , 3896},         
	{44  , 3879},         
	{46  , 3865},         
	{47  , 3853},         
	{49  , 3843},         
	{50  , 3835},         
	{51  , 3827},         
	{53  , 3820},         
	{54  , 3814},         
	{56  , 3808},         
	{57  , 3804},         
	{58  , 3799},         
	{60  , 3794},         
	{61  , 3790},         
	{63  , 3786},         
	{64  , 3782},         
	{65  , 3778},         
	{67  , 3775},         
	{68  , 3771},         
	{70  , 3770},         
	{71  , 3767},         
	{72  , 3766},         
	{74  , 3765},         
	{75  , 3762},         
	{76  , 3759},         
	{78  , 3755},         
	{79  , 3749},         
	{81  , 3742},         
	{82  , 3735},         
	{83  , 3729},          
  {85  , 3718},     
  {86  , 3706},      
  {88  , 3692},      
  {89  , 3680},      
  {90  , 3676},      
  {92  , 3673},      
  {93  , 3670},      
  {95  , 3667},      
  {96  , 3659},      
  {97  , 3629},      
  {99  , 3561},      
  {100 , 3460},      
  {100 , 3335},      
  {100 , 3285}          	
};     

// T3 50C 79
BATTERY_PROFILE_STRUC battery_profile_byd_t3[] =
{
	{0   , 4336},          
	{1   , 4318},         
	{3   , 4300},         
	{4   , 4284},         
	{6   , 4268},         
	{7   , 4252},         
	{8   , 4235},         
	{10  , 4220},         
	{11  , 4204},         
	{13  , 4189},         
	{14  , 4173},         
	{15  , 4158},         
	{17  , 4143},         
	{18  , 4128},         
	{19  , 4113},         
	{21  , 4098},         
	{22  , 4085},         
	{24  , 4071},         
	{25  , 4057},         
	{26  , 4044},         
	{28  , 4031},         
	{29  , 4018},         
	{31  , 4005},         
	{32  , 3993},         
	{33  , 3982},         
	{35  , 3971},         
	{36  , 3960},         
	{38  , 3949},         
	{39  , 3939},         
	{40  , 3929},         
	{42  , 3919},         
	{43  , 3908},         
	{44  , 3894},         
	{46  , 3877},         
	{47  , 3862},         
	{49  , 3851},         
	{50  , 3843},         
	{51  , 3835},         
	{53  , 3827},         
	{54  , 3820},         
	{56  , 3814},         
	{57  , 3808},         
	{58  , 3804},         
	{60  , 3798},         
	{61  , 3793},         
	{63  , 3789},         
	{64  , 3784},         
	{65  , 3781},         
	{67  , 3777},         
	{68  , 3773},         
	{69  , 3769},         
	{71  , 3765},         
	{72  , 3759},         
	{74  , 3750},         
	{75  , 3744},         
	{76  , 3740},         
	{78  , 3735},         
	{79  , 3729},         
	{81  , 3723},         
	{82  , 3718},         
	{83  , 3711},          
  {85  , 3702}, 
	{86  , 3691}, 
	{88  , 3679}, 
	{89  , 3666}, 
	{90  , 3664}, 
	{92  , 3662}, 
	{93  , 3660}, 
	{94  , 3658}, 
	{96  , 3651}, 
	{97  , 3624}, 
	{99  , 3561}, 
	{100 , 3466}, 
	{101 , 3301}, 
	{101 , 3129}           
};        
            
// battery pr} ile for actual temperature. The size should be the same as T1, T2 and T3  79
BATTERY_PROFILE_STRUC battery_profile_byd_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }            
	};          
            
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C  75
R_PROFILE_STRUC r_profile_byd_t0[] =
{           
	{870  ,4284},         
	{875  ,4255},         
	{883  ,4230},         
	{923  ,4203},         
	{978  ,4166},         
	{975  ,4127},         
	{980  ,4101},         
	{1003 ,4086},         
	{1010 ,4069},         
	{1008 ,4048},         
	{998  ,4027},         
	{988  ,4008},         
	{983  ,3991},         
	{990  ,3978},         
	{998  ,3966},         
	{1005 ,3955},         
	{1013 ,3944},         
	{1025 ,3934},         
	{1023 ,3921},         
	{1025 ,3909},         
	{1020 ,3896},         
	{1018 ,3882},         
	{1015 ,3869},         
	{1010 ,3857},         
	{1010 ,3846},         
	{1010 ,3836},         
	{1008 ,3826},         
	{1015 ,3817},         
	{1020 ,3811},         
	{1030 ,3805},         
	{1040 ,3800},         
	{1065 ,3798},         
	{1088 ,3795},         
	{1115 ,3793},         
	{1143 ,3792},         
	{1175 ,3790},         
	{1210 ,3789},         
	{1248 ,3787},         
	{1285 ,3784},         
	{1328 ,3783},         
	{1370 ,3781},         
	{1408 ,3778},         
	{1448 ,3777},         
	{1475 ,3773},         
	{1503 ,3770},         
	{1528 ,3766},         
	{1555 ,3762},         
	{1578 ,3756},         
	{1608 ,3752},         
	{1635 ,3745},         
	{1663 ,3738},         
	{1695 ,3729},         
	{1723 ,3721},         
	{1753 ,3711},         
	{1760 ,3703},         
	{1753 ,3700},         
	{1748 ,3698},         
	{1740 ,3695},         
	{1738 ,3694},         
	{1733 ,3692},         
	{1730 ,3691},          
  {1730 ,3691},             	       
  {1725 ,3689},
  {1728 ,3688},
  {1723 ,3687},
  {1723 ,3687},
  {1725 ,3686},
  {1725 ,3686},
  {1723 ,3685},
  {1720 ,3685},
  {1713 ,3684},
  {1720 ,3683},
  {1718 ,3683},
  {1710 ,3683},
  {1715 ,3682} 
};      

// T1 0C 79
R_PROFILE_STRUC r_profile_byd_t1[] =
{
	{410 , 4315},         
	{465 , 4271},         
	{445 , 4227},         
	{438 , 4202},         
	{438 , 4182},         
	{445 , 4166},         
	{448 , 4150},         
	{450 , 4135},         
	{450 , 4119},         
	{458 , 4104},         
	{468 , 4089},         
	{495 , 4078},         
	{505 , 4064},         
	{508 , 4050},         
	{503 , 4034},         
	{495 , 4017},         
	{488 , 4001},         
	{483 , 3987},         
	{483 , 3975},         
	{488 , 3964},         
	{493 , 3954},         
	{493 , 3942},         
	{493 , 3930},         
	{488 , 3917},         
	{480 , 3902},         
	{473 , 3887},         
	{465 , 3874},         
	{460 , 3862},         
	{460 , 3852},         
	{458 , 3842},         
	{463 , 3833},         
	{463 , 3825},         
	{470 , 3819},         
	{473 , 3812},         
	{475 , 3805},         
	{485 , 3801},         
	{490 , 3796},         
	{495 , 3791},         
	{508 , 3787},         
	{518 , 3783},         
	{538 , 3782},         
	{558 , 3780},         
	{580 , 3779},         
	{605 , 3777},         
	{638 , 3776},         
	{670 , 3774},         
	{703 , 3771},         
	{740 , 3768},         
	{780 , 3766},         
	{818 , 3762},         
	{863 , 3758},         
	{903 , 3752},         
	{945 , 3745},         
	{993 , 3737},         
	{1043, 3729},         
	{1100, 3719},         
	{1140, 3706},         
	{1193, 3696},         
	{1248, 3688},         
	{1308, 3683},         
	{1370, 3679},          
  {1448, 3676},  
  {1538, 3671},
  {1658, 3663},
  {1595, 3637},
  {1548, 3618},
  {1513, 3603},
  {1475, 3587},
  {1438, 3573},
  {1415, 3561},
  {1380, 3550},
  {1355, 3539},
  {1325, 3529},
  {1313, 3520},
  {1295, 3511} 
};       
         
// T2 25C 75
R_PROFILE_STRUC r_profile_byd_t2[] =
{
	{208    , 4324},         
	{198    , 4301},         
	{198    , 4283},         
	{193    , 4265},         
	{198    , 4249},         
	{193    , 4232},         
	{193    , 4216},         
	{195    , 4201},         
	{198    , 4186},         
	{193    , 4169},         
	{195    , 4155},         
	{198    , 4140},         
	{195    , 4124},         
	{195    , 4110},         
	{198    , 4097},         
	{200    , 4083},         
	{205    , 4071},         
	{210    , 4057},         
	{218    , 4045},         
	{220    , 4030},         
	{218    , 4016},         
	{213    , 4002},         
	{213    , 3990},         
	{213    , 3979},         
	{220    , 3969},         
	{228    , 3961},         
	{230    , 3951},         
	{230    , 3940},         
	{230    , 3930},         
	{235    , 3920},         
	{233    , 3909},         
	{223    , 3896},         
	{203    , 3879},         
	{188    , 3865},         
	{178    , 3853},         
	{170    , 3843},         
	{170    , 3835},         
	{168    , 3827},         
	{163    , 3820},         
	{163    , 3814},         
	{163    , 3808},         
	{165    , 3804},         
	{165    , 3799},         
	{163    , 3794},         
	{165    , 3790},         
	{165    , 3786},         
	{163    , 3782},         
	{163    , 3778},         
	{163    , 3775},         
	{160    , 3771},         
	{165    , 3770},         
	{165    , 3767},         
	{170    , 3766},         
	{178    , 3765},         
	{183    , 3762},         
	{190    , 3759},         
	{205    , 3755},         
	{213    , 3749},         
	{225    , 3742},         
	{238    , 3735},         
	{260    , 3729},          
  {275    , 3718}, 
  {293    , 3706},
  {300    , 3692},
  {300    , 3680},
  {325    , 3676},
  {360    , 3673},
  {405    , 3670},
  {473    , 3667},
  {585    , 3659},
  {750    , 3629},
  {953    , 3561},
  {1155   , 3460},
  {843    , 3335},
  {723    , 3285}               
}; 

// T3 50C 79
R_PROFILE_STRUC r_profile_byd_t3[] =
{
	{133 , 4336},         
	{133 , 4318},         
	{128 , 4300},         
	{133 , 4284},         
	{133 , 4268},         
	{133 , 4252},         
	{130 , 4235},         
	{133 , 4220},         
	{130 , 4204},         
	{130 , 4189},         
	{133 , 4173},         
	{133 , 4158},         
	{133 , 4143},         
	{133 , 4128},         
	{133 , 4113},         
	{130 , 4098},         
	{133 , 4085},         
	{132 , 4071},         
	{135 , 4057},         
	{132 , 4044},         
	{135 , 4031},         
	{135 , 4018},         
	{133 , 4005},         
	{135 , 3993},         
	{138 , 3982},         
	{140 , 3971},         
	{140 , 3960},         
	{140 , 3949},         
	{148 , 3939},         
	{155 , 3929},         
	{158 , 3919},         
	{160 , 3908},         
	{153 , 3894},         
	{140 , 3877},         
	{125 , 3862},         
	{115 , 3851},         
	{113 , 3843},         
	{113 , 3835},         
	{108 , 3827},         
	{108 , 3820},         
	{108 , 3814},         
	{108 , 3808},         
	{113 , 3804},         
	{110 , 3798},         
	{110 , 3793},         
	{113 , 3789},         
	{110 , 3784},         
	{115 , 3781},         
	{115 , 3777},         
	{113 , 3773},         
	{115 , 3769},         
	{113 , 3765},         
	{118 , 3759},         
	{110 , 3750},         
	{105 , 3744},         
	{108 , 3740},         
	{108 , 3735},         
	{108 , 3729},         
	{108 , 3723},         
	{110 , 3718},         
	{118 , 3711},          
  {128 , 3702}, 
 	{128 , 3691},
 	{130 , 3679},
 	{105 , 3666},
 	{108 , 3664},
 	{110 , 3662},
 	{118 , 3660},
 	{133 , 3658},
 	{190 , 3651},
 	{290 , 3624},
 	{383 , 3561},
 	{590 , 3466},
 	{755 , 3301},
 	{350 , 3129}  	       
};            
             
// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_byd_temperature[] =
{            
  {0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  	
}; 
// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);
  
int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);
  
#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  