#ifndef _SRC_CONFIGURATION_H_
#define _SRC_CONFIGURATION_H_

/*********************************** Timing ***********************************/
#define PERIOD_MS_IDLE_SLEEP (10) // Sleep time during idle
#define PERIOD_MS_PERIODIC (5000) // The periodic event

/************************************ ADCs ************************************/
#define ADC_AVREF_0 (2.4996)
#define ADC_AVREF_1 (2.5025)
#define ADC_AVREF_2 (2.4995)
#define ADC_AVREF_3 (2.4970)
#define ADC_AVREF_4 (2.4972)
#define ADC_AVREF_5 (2.4915)
#define ADC_AVREF_6 (2.4974)
#define ADC_AVREF_7 (2.4955)

#define ADC_AVREF_PV0 (2.5)
#define ADC_AVREF_PV1 (2.5)
#define ADC_AVREF_PV2 (2.5)
#define ADC_AVREF_PV3 (2.5)

/******************************** Array Counts ********************************/
#define COUNT_ADC_EPS (8)
#define COUNT_ADC_PV (4)
#define COUNT_PV (8)
#define COUNT_PR_3V3 (14)
#define COUNT_PR_BATT (7)
#define COUNT_BH (2)
#define COUNT_DEPLOY (2)
#define COUNT_THERM_MPPT (8)
#define COUNT_THERM_BOARD (14)
#define COUNT_INPUT_SW (4)

/********************************* Thresholds *********************************/
#define THRES_EJECT_TIMER (2.7) // 1 RC with 4.2V source, 2 RC with 3.0V source
#define THRES_CURRENT_BATT_MAX (4.0)
#define THRES_CURRENT_REG_MAX (3.0)
#define THRES_BATT_COLD (-5.0)
#define THRES_BATT_HOT (50.0)
#define THRES_REG_HOT (100.0)
#define THRES_OVERHEATED (10.0) // 10 Degrees above the hot cases, critical temp

/******************************** Solar Panel *********************************/
#define GAIN_PVIN_0A (0.05)
#define GAIN_PVIN_0B (0.05)
#define GAIN_PVIN_1A (0.05)
#define GAIN_PVIN_1B (0.05)
#define GAIN_PVIN_2A (0.05)
#define GAIN_PVIN_2B (0.05)
#define GAIN_PVIN_3A (0.05)
#define GAIN_PVIN_3B (0.05)

#define GAIN_PVOUT_0A (0.10)
#define GAIN_PVOUT_0B (0.10)
#define GAIN_PVOUT_1A (0.10)
#define GAIN_PVOUT_1B (0.10)
#define GAIN_PVOUT_2A (0.10)
#define GAIN_PVOUT_2B (0.10)
#define GAIN_PVOUT_3A (0.10)
#define GAIN_PVOUT_3B (0.10)

/******************************** Power Rails *********************************/
#define GAIN_PR_3V3_0 (1000.0 / 2160.0)
#define GAIN_PR_3V3_1 (1000.0 / 2160.0)
#define GAIN_PR_3V3_2 (1000.0 / 2180.0)
#define GAIN_PR_3V3_3 (1000.0 / 2180.0)
#define GAIN_PR_3V3_4 (1000.0 / 2180.0)
#define GAIN_PR_3V3_5 (1000.0 / 2170.0)
#define GAIN_PR_3V3_6 (1000.0 / 847.0)
#define GAIN_PR_3V3_7 (1000.0 / 2180.0)
#define GAIN_PR_3V3_8 (1000.0 / 712.0)
#define GAIN_PR_3V3_9 (1000.0 / 2180.0)
#define GAIN_PR_3V3_10 (1000.0 / 2190.0)
#define GAIN_PR_3V3_11 (1000.0 / 713.0)
#define GAIN_PR_3V3_12 (1000.0 / 2190.0)
#define GAIN_PR_3V3_PV (1000.0 / 2160.0)
#define GAIN_PR_3V3_EPS (1000.0 / 2180.0)

#define GAIN_PR_BATT_0 (1000.0 / 846.0)
#define GAIN_PR_BATT_1 (1000.0 / 2200.0)
#define GAIN_PR_BATT_2 (1000.0 / 2180.0)
#define GAIN_PR_BATT_3 (1000.0 / 2190.0)
#define GAIN_PR_BATT_4 (1000.0 / 2190.0)
#define GAIN_PR_BATT_5 (1000.0 / 712.0)
#define GAIN_PR_BATT_6 (1000.0 / 712.0)

#define GAIN_BH_0 (1000.0 / 709.0)
#define GAIN_BH_1 (1000.0 / 723.0)

#define GAIN_DEPLOY_0 (1000.0 / 467.0)
#define GAIN_DEPLOY_1 (1000.0 / 466.0)

// Largest (rank * current) is first to be shed
#define RANK_PR_3V3_0 (2)
#define RANK_PR_3V3_1 (255)
#define RANK_PR_3V3_2 (3)
#define RANK_PR_3V3_3 (255)
#define RANK_PR_3V3_4 (255)
#define RANK_PR_3V3_5 (100)
#define RANK_PR_3V3_6 (1)
#define RANK_PR_3V3_7 (101)
#define RANK_PR_3V3_8 (103)
#define RANK_PR_3V3_9 (102)
#define RANK_PR_3V3_10 (104)
#define RANK_PR_3V3_11 (105)
#define RANK_PR_3V3_12 (106)
#define RANK_PR_3V3_PV (0)

#define RANK_PR_BATT_0 (100)
#define RANK_PR_BATT_1 (255)
#define RANK_PR_BATT_2 (255)
#define RANK_PR_BATT_3 (255)
#define RANK_PR_BATT_4 (255)
#define RANK_PR_BATT_5 (2)
#define RANK_PR_BATT_6 (1)

/******************************** Power Chain *********************************/
#define GAIN_BATT_IN_A (0.01 / 0.012)
#define GAIN_BATT_IN_B (0.01 / 0.012)
#define GAIN_BATT_OUT_A (0.02 / 0.012)
#define GAIN_BATT_OUT_B (0.02 / 0.012)
#define GAIN_3V3_IN_A (0.02 / 0.012)
#define GAIN_3V3_IN_B (0.02 / 0.012)
#define GAIN_3V3_OUT_A (0.02 / 0.012)
#define GAIN_3V3_OUT_B (0.02 / 0.012)

/******************************** Thermistors *********************************/
#define THERM_BATT_A_300K (0.480)
#define THERM_BATT_A_340K (0.162)
#define THERM_BATT_B_300K (0.480)
#define THERM_BATT_B_340K (0.162)
#define THERM_PMIC_300K (0.480)
#define THERM_PMIC_340K (0.162)
#define THERM_REG_A_300K (0.480)
#define THERM_REG_A_340K (0.162)
#define THERM_REG_B_300K (0.480)
#define THERM_REG_B_340K (0.162)
#define THERM_SW_IN_0_300K (0.480)
#define THERM_SW_IN_0_340K (0.162)
#define THERM_SW_IN_1_300K (0.480)
#define THERM_SW_IN_1_340K (0.162)
#define THERM_SW_OUT_0_300K (0.480)
#define THERM_SW_OUT_0_340K (0.162)
#define THERM_SW_OUT_1_300K (0.480)
#define THERM_SW_OUT_1_340K (0.162)

#define THERM_PCB_0_300K (0.480)
#define THERM_PCB_0_340K (0.162)
#define THERM_PCB_1_300K (0.480)
#define THERM_PCB_1_340K (0.162)
#define THERM_PCB_2_300K (0.480)
#define THERM_PCB_2_340K (0.162)
#define THERM_PCB_3_300K (0.480)
#define THERM_PCB_3_340K (0.162)
#define THERM_PCB_4_300K (0.480)
#define THERM_PCB_4_340K (0.162)

#define THERM_PV0_MPPT_A_300K (0.480)
#define THERM_PV0_MPPT_A_340K (0.162)
#define THERM_PV0_MPPT_B_300K (0.480)
#define THERM_PV0_MPPT_B_340K (0.162)
#define THERM_PV0_BACK_300K (0.480)
#define THERM_PV0_BACK_340K (0.162)
#define THERM_PV0_FRONT_TOP_300K (0.480)
#define THERM_PV0_FRONT_TOP_340K (0.162)
#define THERM_PV0_FRONT_BOTTOM_300K (0.480)
#define THERM_PV0_FRONT_BOTTOM_340K (0.162)

#define THERM_PV1_MPPT_A_300K (0.480)
#define THERM_PV1_MPPT_A_340K (0.162)
#define THERM_PV1_MPPT_B_300K (0.480)
#define THERM_PV1_MPPT_B_340K (0.162)
#define THERM_PV1_BACK_300K (0.480)
#define THERM_PV1_BACK_340K (0.162)
#define THERM_PV1_FRONT_TOP_300K (0.480)
#define THERM_PV1_FRONT_TOP_340K (0.162)
#define THERM_PV1_FRONT_BOTTOM_300K (0.480)
#define THERM_PV1_FRONT_BOTTOM_340K (0.162)

#define THERM_PV2_MPPT_A_300K (0.480)
#define THERM_PV2_MPPT_A_340K (0.162)
#define THERM_PV2_MPPT_B_300K (0.480)
#define THERM_PV2_MPPT_B_340K (0.162)
#define THERM_PV2_BACK_300K (0.480)
#define THERM_PV2_BACK_340K (0.162)
#define THERM_PV2_FRONT_TOP_300K (0.480)
#define THERM_PV2_FRONT_TOP_340K (0.162)
#define THERM_PV2_FRONT_BOTTOM_300K (0.480)
#define THERM_PV2_FRONT_BOTTOM_340K (0.162)

#define THERM_PV3_MPPT_A_300K (0.480)
#define THERM_PV3_MPPT_A_340K (0.162)
#define THERM_PV3_MPPT_B_300K (0.480)
#define THERM_PV3_MPPT_B_340K (0.162)
#define THERM_PV3_BACK_300K (0.480)
#define THERM_PV3_BACK_340K (0.162)
#define THERM_PV3_FRONT_TOP_300K (0.480)
#define THERM_PV3_FRONT_TOP_340K (0.162)
#define THERM_PV3_FRONT_BOTTOM_300K (0.480)
#define THERM_PV3_FRONT_BOTTOM_340K (0.162)

#endif /* _SRC_CONFIGURATION_H_ */
