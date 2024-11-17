/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#ifndef _MTK_BATTERY_PROPERTY_H
#define _MTK_BATTERY_PROPERTY_H

/* customize */
#define DIFFERENCE_FULLOCV_ITH	200	/* mA */
#define MTK_CHR_EXIST 1
#define SHUTDOWN_1_TIME	60
#define KEEP_100_PERCENT 2
#define R_FG_VALUE	10				/* mOhm */
#define EMBEDDED_SEL 0
#define PMIC_SHUTDOWN_CURRENT 20	/* 0.01 mA */
#define FG_METER_RESISTANCE	75
#define CAR_TUNE_VALUE	100 /*1.00 */
#define NO_BAT_TEMP_COMPENSATE 0
/* NO_BAT_TEMP_COMPENSATE 1 = don't need bat_temper compensate, */
/* but fg_meter_resistance still use for SWOCV */

#define SHUTDOWN_GAUGE0 1
#define SHUTDOWN_GAUGE1_XMINS 1
#define SHUTDOWN_GAUGE0_VOLTAGE 34000

#define POWERON_SYSTEM_IBOOT 500	/* mA */

#define D0_SEL 0	/* not implement */
#define AGING_SEL 0	/* not implement */

/* ADC resistor  */
#define R_BAT_SENSE	4
#define R_I_SENSE	4
#define R_CHARGER_1	330
#define R_CHARGER_2	39


#define QMAX_SEL 1
#define IBOOT_SEL 0
#define SHUTDOWN_SYSTEM_IBOOT 15000	/* 0.1mA */
#define PMIC_MIN_VOL 34000

/*ui_soc related */
#define DIFFERENCE_FULL_CV 1000 /*0.01%*/
#define PSEUDO1_EN 1
#define PSEUDO100_EN 1
#define PSEUDO100_EN_DIS 1

#define DIFF_SOC_SETTING 50	/* 0.01% */
#define DIFF_BAT_TEMP_SETTING 1
#define DIFF_BAT_TEMP_SETTING_C 10
#define DISCHARGE_TRACKING_TIME 10
#define CHARGE_TRACKING_TIME 60
#define DIFFERENCE_FULLOCV_VTH	1000	/* 0.1mV */
#define CHARGE_PSEUDO_FULL_LEVEL 9000
#define FULL_TRACKING_BAT_INT2_MULTIPLY 1

/* pre tracking */
#define FG_PRE_TRACKING_EN 0
#define VBAT2_DET_TIME 5
#define VBAT2_DET_COUNTER 6
#define VBAT2_DET_VOLTAGE1	34500
#define VBAT2_DET_VOLTAGE2	32000
#define VBAT2_DET_VOLTAGE3	35000

/* PCB setting */
#define CALIBRATE_CAR_TUNE_VALUE_BY_META_TOOL
#define CALI_CAR_TUNE_AVG_NUM	60

/* Aging Compensation 1*/
#define AGING_FACTOR_MIN 75
#define AGING_FACTOR_DIFF 10
#define DIFFERENCE_VOLTAGE_UPDATE 50
#define AGING_ONE_EN 1
#define AGING1_UPDATE_SOC 30
#define AGING1_LOAD_SOC 70
#define AGING_TEMP_DIFF 10
#define AGING_100_EN 1

/* Aging Compensation 2*/
#define AGING_TWO_EN 1

/* Aging Compensation 3*/
#define AGING_THIRD_EN 1

/* threshold */
#define HWOCV_SWOCV_DIFF	300
#define HWOCV_SWOCV_DIFF_LT	1500
#define HWOCV_SWOCV_DIFF_LT_TEMP	5
#define HWOCV_OLDOCV_DIFF	300
#define HWOCV_OLDOCV_DIFF_CHR	800
#define SWOCV_OLDOCV_DIFF	300
#define SWOCV_OLDOCV_DIFF_CHR	800
#define VBAT_OLDOCV_DIFF	1000
#define SWOCV_OLDOCV_DIFF_EMB	1000	/* 100mV */

#define VIR_OLDOCV_DIFF_EMB	10000	/* 1000mV */
#define VIR_OLDOCV_DIFF_EMB_LT	10000	/* 1000mV */
#define VIR_OLDOCV_DIFF_EMB_TMP	5

#define TNEW_TOLD_PON_DIFF	5
#define TNEW_TOLD_PON_DIFF2	15
#define PMIC_SHUTDOWN_TIME	30
#define BAT_PLUG_OUT_TIME	32
#define EXT_HWOCV_SWOCV		300
#define EXT_HWOCV_SWOCV_LT		1500
#define EXT_HWOCV_SWOCV_LT_TEMP		5

/* fgc & fgv threshold */
#define DIFFERENCE_FGC_FGV_TH1 300
#define DIFFERENCE_FGC_FGV_TH2 500
#define DIFFERENCE_FGC_FGV_TH3 300
#define DIFFERENCE_FGC_FGV_TH_SOC1 7000
#define DIFFERENCE_FGC_FGV_TH_SOC2 3000
#define NAFG_TIME_SETTING 10
#define NAFG_RATIO 80
#define NAFG_RATIO_EN 0
#define NAFG_RATIO_TMP_THR 1
#define NAFG_RESISTANCE 1500

#define PMIC_SHUTDOWN_SW_EN 1
#define FORCE_VC_MODE 0	/* 0: mix, 1:Coulomb, 2:voltage */

#define LOADING_1_EN 0
#define LOADING_2_EN 2
#define DIFF_IAVG_TH 3000

/* ZCV INTR */
#define ZCV_SUSPEND_TIME 6
#define SLEEP_CURRENT_AVG 100 /*0.1mA*/
#define ZCV_CAR_GAP_PERCENTAGE 5

/* Additional battery table */
#define ADDITIONAL_BATTERY_TABLE_EN 1

#define DC_RATIO_SEL	5
#define DC_R_CNT	1000	/* if set 0, dcr_start will not be 1*/

#define BAT_PAR_I 4000	/* not implement */

#define PSEUDO1_SEL	2

#define FG_TRACKING_CURRENT	10000	/* not implement */
#define FG_TRACKING_CURRENT_IBOOT_EN	1	/* not implement */
#define UI_FAST_TRACKING_EN 0
#define UI_FAST_TRACKING_GAP 300
#define KEEP_100_PERCENT_MINSOC 9000

#define UNIT_FGCURRENT     (381470)		/* mt6355 381.470 uA */
#define UNIT_FGCAR         (108507)		/* CHARGE_LSB 190735 * 2^11 / 3600 */
#define R_VAL_TEMP_2         (2)		/* MT6335 use 3, old chip use 4 */
#define R_VAL_TEMP_3         (3)		/* MT6335 use 3, old chip use 4 */
#define UNIT_TIME          (50)
#define UNIT_FGCAR_ZCV     (190735)		/* CHARGE_LSB 190.735 uAs ,unit 2^0 LSB */
#define UNIT_FG_IAVG		(190735)	/* IAVG LSB: 190.735 uA */
#define CAR_TO_REG_FACTOR  (0x49BA)		/* 3600 * 1000 * 1000 / CHARGE_LSB */

#define SHUTDOWN_CONDITION_LOW_BAT_VOLT
#define BATTERY_TMP_TO_DISABLE_GM30 -50
#define BATTERY_TMP_TO_DISABLE_NAFG -35
#define DEFAULT_BATTERY_TMP_WHEN_DISABLE_NAFG 25
#define BATTERY_TMP_TO_ENABLE_NAFG -20
/* #define GM30_DISABLE_NAFG */


#define MULTI_TEMP_GAUGE0 0	/* different temp using different gauge 0% */

#define OVER_DISCHARGE_LEVEL -1500

#define UISOC_UPDATE_TYPE 2
/*
*	uisoc_update_type:
*	0: only ui_soc interrupt update ui_soc
*	1: coulomb/nafg will update ui_soc if delta car > ht/lt_gap /2
*	2: coulomb/nafg will update ui_soc
*/

/* using current to limit uisoc in 100% case*/
/* UI_FULL_LIMIT_ITH0 3000 means 300ma */
#define UI_FULL_LIMIT_EN 0

#define UI_FULL_LIMIT_SOC0 9700
#define UI_FULL_LIMIT_ITH0 3000

#define UI_FULL_LIMIT_SOC1 9800
#define UI_FULL_LIMIT_ITH1 2800

#define UI_FULL_LIMIT_SOC2 9900
#define UI_FULL_LIMIT_ITH2 2500

#define UI_FULL_LIMIT_SOC3 9940
#define UI_FULL_LIMIT_ITH3 2200

#define UI_FULL_LIMIT_SOC4 10000
#define UI_FULL_LIMIT_ITH4 2000
#define UI_FULL_LIMIT_TIME 99999

/* using voltage to limit uisoc in 1% case */
/* UI_LOW_LIMIT_VTH0=36000 means 3.6v */
#define UI_LOW_LIMIT_EN 0

#define UI_LOW_LIMIT_SOC0 500
#define UI_LOW_LIMIT_VTH0 36000

#define UI_LOW_LIMIT_SOC1 400
#define UI_LOW_LIMIT_VTH1 35500

#define UI_LOW_LIMIT_SOC2 300
#define UI_LOW_LIMIT_VTH2 35000

#define UI_LOW_LIMIT_SOC3 200
#define UI_LOW_LIMIT_VTH3 34500

#define UI_LOW_LIMIT_SOC4 100
#define UI_LOW_LIMIT_VTH4 34000
#define UI_LOW_LIMIT_TIME 99999

/* extern function */
extern int get_rac(void);
extern int get_imix(void);
extern void get_ptim(unsigned int*, signed int*);
extern int do_ptim(bool);


#endif
