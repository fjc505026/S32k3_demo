/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 5.0.0
*   Build Version        : S32K3_RTD_5_0_0_D2408_ASR_REL_4_7_REV_0000_20241002
*
*   Copyright 2020 - 2024 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Clock_Ip_Cfg_Defines.h
*   @version    5.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/

#ifndef CLOCK_IP_CFG_DEFINES_H
#define CLOCK_IP_CFG_DEFINES_H


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "S32K39_MC_CGM.h"
#include "S32K39_FIRC.h"
#include "S32K39_SIRC.h"
#include "S32K39_FXOSC.h"
#include "S32K39_PLL.h"
#include "S32K39_MC_ME.h"
#include "S32K39_PRAMC.h"
#include "S32K39_FLASH.h"
#include "S32K39_CMU_FC.h"
#include "S32K39_SYSTICK.h"
#include "S32K39_EMIOS.h"
#include "S32K39_RTC.h"
#include "S32K39_CONFIGURATION_GPR.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_DEFINES_VENDOR_ID                       43
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        7
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define CLOCK_IP_CFG_DEFINES_SW_MAJOR_VERSION                5
#define CLOCK_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define CLOCK_IP_CFG_DEFINES_SW_PATCH_VERSION                0

/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Derivative used.
*/
#define CLOCK_IP_DERIVATIVE_006
/**
* @brief            Max number of internal oscillators
*/
#define CLOCK_IP_IRCOSCS_COUNT       (3U)

/**
* @brief            Max number of external oscillators
*/
#define CLOCK_IP_XOSCS_COUNT       (1U)

/**
* @brief            Max number of pll devices
*/
#define CLOCK_IP_PLLS_COUNT       (1U)

/**
* @brief            Max number of selectors
*/
#define CLOCK_IP_SELECTORS_COUNT       (16U)

/**
* @brief            Max number of dividers
*/
#define CLOCK_IP_DIVIDERS_COUNT       (25U)

/**
* @brief            Max number of divider triggers
*/
#define CLOCK_IP_DIVIDER_TRIGGERS_COUNT       (1U)

/**
* @brief            Max number of fractional dividers
*/
#define CLOCK_IP_FRACTIONAL_DIVIDERS_COUNT       (0U)

/**
* @brief            Max number of external clocks
*/
#define CLOCK_IP_EXT_CLKS_COUNT       (4U)

/**
* @brief            Max number of pcfs
*/
#define CLOCK_IP_PCFS_COUNT       (1U)

/**
* @brief            Max number of clock gates
*/
#define CLOCK_IP_GATES_COUNT       (156U)

/**
* @brief            Max number of clock monitoring units
*/
#define CLOCK_IP_CMUS_COUNT       (4U)

/**
* @brief            Max number of configured frequencies values
*/
#define CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT       (6U)

/**
* @brief             Max number of specific peripheral (eMIOS) units
*/
#define CLOCK_IP_SPECIFIC_PERIPH_COUNT       (0U)

/**
* @brief            Number of clock configurations 0
*/
#define CLOCK_IP_CONFIGURED_IRCOSCS_0_NO       (3U)
#define CLOCK_IP_CONFIGURED_XOSCS_0_NO       (1U)
#define CLOCK_IP_CONFIGURED_PLLS_0_NO       (1U)
#define CLOCK_IP_CONFIGURED_SELECTORS_0_NO       (16U)
#define CLOCK_IP_CONFIGURED_DIVIDERS_0_NO       (25U)
#define CLOCK_IP_CONFIGURED_DIVIDER_TRIGGERS_0_NO       (1U)
#define CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO       (4U)
#define CLOCK_IP_CONFIGURED_GATES_0_NO       (156U)
#define CLOCK_IP_CONFIGURED_CMUS_0_NO       (4U)

/**
* @brief            Supported power mode.
*/
#define CLOCK_IP_HAS_RUN_MODE                 0U

/**
* @brief Firc can be configured to run at 48MHz
*/
#define CLOCK_IP_SUPPORTS_48MHZ_FREQUENCY     1U

/**
* @brief Firc can be configured to run at 16MHz
*/
#define CLOCK_IP_SUPPORTS_24MHZ_FREQUENCY     2U

/**
* @brief Firc can be configured to run at 2MHz
*/
#define CLOCK_IP_SUPPORTS_3MHZ_FREQUENCY      3U

#define CLOCK_IP_FIRC_FREQUENCY                48000000U

#define CLOCK_IP_SIRC_FREQUENCY                32000U

#define CLOCK_IP_DEFAULT_SXOSC_FREQUENCY       32768U

#define CLOCK_IP_DEFAULT_FXOSC_FREQUENCY       16000000U

/**
* @brief            Clock ip supports clock frequency.
*/
#define CLOCK_IP_GET_FREQUENCY_API                (STD_ON)

/**
* @brief            Clock ip supports ram wait states.
*/
#define CLOCK_IP_HAS_RAM_WAIT_STATES
/**
* @brief            Clock ip supports ram wait states.
*/
#define CLOCK_IP_HAS_FLASH_WAIT_STATES
/**
* @brief            Clock ip supports to disable FIRC in STDBY mode
*/
#define CLOCK_IP_HAS_FIRC_STDBY_CLOCK_DISABLE

/**
* @brief            Clock ip supports to enable FIRC in STDBY mode
*/
#define CLOCK_IP_HAS_FIRC_STDBY_CLOCK_ENABLE

/**
* @brief            Clock ip supports to disable SIRC in STDBY mode
*/
#define CLOCK_IP_HAS_SIRC_STDBY_CLOCK_DISABLE

/**
* @brief            Clock ip supports to enable SIRC in STDBY mode
*/
#define CLOCK_IP_HAS_SIRC_STDBY_CLOCK_ENABLE
/**
* @brief            Supported clocks.
*/
#define CLOCK_IP_HAS_FIRC_CLK         1U
#define CLOCK_IP_HAS_FIRC_STANDBY_CLK         2U
#define CLOCK_IP_HAS_SIRC_CLK         3U
#define CLOCK_IP_HAS_SIRC_STANDBY_CLK         4U
#define CLOCK_IP_HAS_FXOSC_CLK         5U
#define CLOCK_IP_HAS_PLL_CLK         6U
#define CLOCK_IP_HAS_PLL_POSTDIV_CLK         7U
#define CLOCK_IP_HAS_PLL_PHI0_CLK         8U
#define CLOCK_IP_HAS_PLL_PHI1_CLK         9U
#define CLOCK_IP_HAS_EMAC_MII_RX_CLK         10U
#define CLOCK_IP_HAS_EMAC_MII_RMII_TX_CLK         11U
#define CLOCK_IP_HAS_LFAST_REF_EXT_CLK         12U
#define CLOCK_IP_HAS_SWG_PAD_CLK         13U
#define CLOCK_IP_HAS_SCS_CLK         14U
#define CLOCK_IP_HAS_CORE_CLK         15U
#define CLOCK_IP_HAS_AIPS_PLAT_CLK         16U
#define CLOCK_IP_HAS_AIPS_SLOW_CLK         17U
#define CLOCK_IP_HAS_HSE_CLK         18U
#define CLOCK_IP_HAS_DCM_CLK         19U
#define CLOCK_IP_HAS_LBIST_CLK         20U
#define CLOCK_IP_HAS_QSPI_MEM_CLK         21U
#define CLOCK_IP_HAS_CM7_CORE_CLK         22U
#define CLOCK_IP_HAS_CLKOUT_RUN_CLK         23U
#define CLOCK_IP_FEATURE_PRODUCERS_NO         24U
#define CLOCK_IP_HAS_ADC0_CLK         25U
#define CLOCK_IP_HAS_ADC1_CLK         26U
#define CLOCK_IP_HAS_ADC2_CLK         27U
#define CLOCK_IP_HAS_ADC3_CLK         28U
#define CLOCK_IP_HAS_ADC4_CLK         29U
#define CLOCK_IP_HAS_ADC5_CLK         30U
#define CLOCK_IP_HAS_ADC6_CLK         31U
#define CLOCK_IP_HAS_ADCBIST_CLK         32U
#define CLOCK_IP_HAS_BCTU0_CLK         33U
#define CLOCK_IP_HAS_BCTU1_CLK         34U
#define CLOCK_IP_HAS_CLKOUT_STANDBY_CLK         35U
#define CLOCK_IP_HAS_CMP0_CLK         36U
#define CLOCK_IP_HAS_CMP1_CLK         37U
#define CLOCK_IP_HAS_COOLFLUX_D_RAM0_CLK         38U
#define CLOCK_IP_HAS_COOLFLUX_D_RAM1_CLK         39U
#define CLOCK_IP_HAS_COOLFLUX_DSP16L_CLK         40U
#define CLOCK_IP_HAS_COOLFLUX_I_RAM0_CLK         41U
#define CLOCK_IP_HAS_COOLFLUX_I_RAM1_CLK         42U
#define CLOCK_IP_HAS_CRC0_CLK         43U
#define CLOCK_IP_HAS_DCM0_CLK         44U
#define CLOCK_IP_HAS_DMAMUX0_CLK         45U
#define CLOCK_IP_HAS_DMAMUX1_CLK         46U
#define CLOCK_IP_HAS_DMAMUX2_CLK         47U
#define CLOCK_IP_HAS_DMAMUX3_CLK         48U
#define CLOCK_IP_HAS_DSPI_MSC_CLK         49U
#define CLOCK_IP_HAS_EDMA0_CLK         50U
#define CLOCK_IP_HAS_EDMA0_TCD0_CLK         51U
#define CLOCK_IP_HAS_EDMA0_TCD1_CLK         52U
#define CLOCK_IP_HAS_EDMA0_TCD2_CLK         53U
#define CLOCK_IP_HAS_EDMA0_TCD3_CLK         54U
#define CLOCK_IP_HAS_EDMA0_TCD4_CLK         55U
#define CLOCK_IP_HAS_EDMA0_TCD5_CLK         56U
#define CLOCK_IP_HAS_EDMA0_TCD6_CLK         57U
#define CLOCK_IP_HAS_EDMA0_TCD7_CLK         58U
#define CLOCK_IP_HAS_EDMA0_TCD8_CLK         59U
#define CLOCK_IP_HAS_EDMA0_TCD9_CLK         60U
#define CLOCK_IP_HAS_EDMA0_TCD10_CLK         61U
#define CLOCK_IP_HAS_EDMA0_TCD11_CLK         62U
#define CLOCK_IP_HAS_EDMA0_TCD12_CLK         63U
#define CLOCK_IP_HAS_EDMA0_TCD13_CLK         64U
#define CLOCK_IP_HAS_EDMA0_TCD14_CLK         65U
#define CLOCK_IP_HAS_EDMA0_TCD15_CLK         66U
#define CLOCK_IP_HAS_EDMA0_TCD16_CLK         67U
#define CLOCK_IP_HAS_EDMA0_TCD17_CLK         68U
#define CLOCK_IP_HAS_EDMA0_TCD18_CLK         69U
#define CLOCK_IP_HAS_EDMA0_TCD19_CLK         70U
#define CLOCK_IP_HAS_EDMA0_TCD20_CLK         71U
#define CLOCK_IP_HAS_EDMA0_TCD21_CLK         72U
#define CLOCK_IP_HAS_EDMA0_TCD22_CLK         73U
#define CLOCK_IP_HAS_EDMA0_TCD23_CLK         74U
#define CLOCK_IP_HAS_EDMA0_TCD24_CLK         75U
#define CLOCK_IP_HAS_EDMA0_TCD25_CLK         76U
#define CLOCK_IP_HAS_EDMA0_TCD26_CLK         77U
#define CLOCK_IP_HAS_EDMA0_TCD27_CLK         78U
#define CLOCK_IP_HAS_EDMA0_TCD28_CLK         79U
#define CLOCK_IP_HAS_EDMA0_TCD29_CLK         80U
#define CLOCK_IP_HAS_EDMA0_TCD30_CLK         81U
#define CLOCK_IP_HAS_EDMA0_TCD31_CLK         82U
#define CLOCK_IP_HAS_EDMA1_CLK         83U
#define CLOCK_IP_HAS_EDMA1_TCD0_CLK         84U
#define CLOCK_IP_HAS_EDMA1_TCD1_CLK         85U
#define CLOCK_IP_HAS_EDMA1_TCD2_CLK         86U
#define CLOCK_IP_HAS_EDMA1_TCD3_CLK         87U
#define CLOCK_IP_HAS_EDMA1_TCD4_CLK         88U
#define CLOCK_IP_HAS_EDMA1_TCD5_CLK         89U
#define CLOCK_IP_HAS_EDMA1_TCD6_CLK         90U
#define CLOCK_IP_HAS_EDMA1_TCD7_CLK         91U
#define CLOCK_IP_HAS_EDMA1_TCD8_CLK         92U
#define CLOCK_IP_HAS_EDMA1_TCD9_CLK         93U
#define CLOCK_IP_HAS_EDMA1_TCD10_CLK         94U
#define CLOCK_IP_HAS_EDMA1_TCD11_CLK         95U
#define CLOCK_IP_HAS_EDMA1_TCD12_CLK         96U
#define CLOCK_IP_HAS_EDMA1_TCD13_CLK         97U
#define CLOCK_IP_HAS_EDMA1_TCD14_CLK         98U
#define CLOCK_IP_HAS_EDMA1_TCD15_CLK         99U
#define CLOCK_IP_HAS_EDMA1_TCD16_CLK         100U
#define CLOCK_IP_HAS_EDMA1_TCD17_CLK         101U
#define CLOCK_IP_HAS_EDMA1_TCD18_CLK         102U
#define CLOCK_IP_HAS_EDMA1_TCD19_CLK         103U
#define CLOCK_IP_HAS_EDMA1_TCD20_CLK         104U
#define CLOCK_IP_HAS_EDMA1_TCD21_CLK         105U
#define CLOCK_IP_HAS_EDMA1_TCD22_CLK         106U
#define CLOCK_IP_HAS_EDMA1_TCD23_CLK         107U
#define CLOCK_IP_HAS_EDMA1_TCD24_CLK         108U
#define CLOCK_IP_HAS_EDMA1_TCD25_CLK         109U
#define CLOCK_IP_HAS_EDMA1_TCD26_CLK         110U
#define CLOCK_IP_HAS_EDMA1_TCD27_CLK         111U
#define CLOCK_IP_HAS_EDMA1_TCD28_CLK         112U
#define CLOCK_IP_HAS_EDMA1_TCD29_CLK         113U
#define CLOCK_IP_HAS_EDMA1_TCD30_CLK         114U
#define CLOCK_IP_HAS_EDMA1_TCD31_CLK         115U
#define CLOCK_IP_HAS_EFLEX_PWM0_CLK         116U
#define CLOCK_IP_HAS_EFLEX_PWM1_CLK         117U
#define CLOCK_IP_HAS_EIM0_CLK         118U
#define CLOCK_IP_HAS_EIM1_CLK         119U
#define CLOCK_IP_HAS_EIM2_CLK         120U
#define CLOCK_IP_HAS_EMAC_RX_CLK         121U
#define CLOCK_IP_HAS_EMAC0_RX_CLK         122U
#define CLOCK_IP_HAS_EMAC_TS_CLK         123U
#define CLOCK_IP_HAS_EMAC0_TS_CLK         124U
#define CLOCK_IP_HAS_EMAC_TX_CLK         125U
#define CLOCK_IP_HAS_EMAC0_TX_CLK         126U
#define CLOCK_IP_HAS_EMIOS0_CLK         127U
#define CLOCK_IP_HAS_ERM0_CLK         128U
#define CLOCK_IP_HAS_ERM1_CLK         129U
#define CLOCK_IP_HAS_ETPU_AB_REGISTERS_CLK         130U
#define CLOCK_IP_HAS_ETPU_CODE_RAM1_CLK         131U
#define CLOCK_IP_HAS_ETPU_CODE_RAM2_CLK         132U
#define CLOCK_IP_HAS_ETPU_RAM_MIRROR_CLK         133U
#define CLOCK_IP_HAS_ETPU_RAM_SDM_CLK         134U
#define CLOCK_IP_HAS_FLEXCANA_CLK         135U
#define CLOCK_IP_HAS_FLEXCAN0_CLK         136U
#define CLOCK_IP_HAS_FLEXCAN1_CLK         137U
#define CLOCK_IP_HAS_FLEXCAN2_CLK         138U
#define CLOCK_IP_HAS_FLEXCANB_CLK         139U
#define CLOCK_IP_HAS_FLEXCAN3_CLK         140U
#define CLOCK_IP_HAS_FLEXCAN4_CLK         141U
#define CLOCK_IP_HAS_FLEXCAN5_CLK         142U
#define CLOCK_IP_HAS_FLEXIO0_CLK         143U
#define CLOCK_IP_HAS_IGF0_CLK         144U
#define CLOCK_IP_HAS_INTM_CLK         145U
#define CLOCK_IP_HAS_LCU0_CLK         146U
#define CLOCK_IP_HAS_LCU1_CLK         147U
#define CLOCK_IP_HAS_LFAST_REF_CLK         148U
#define CLOCK_IP_HAS_LPI2C0_CLK         149U
#define CLOCK_IP_HAS_LPI2C1_CLK         150U
#define CLOCK_IP_HAS_LPSPI0_CLK         151U
#define CLOCK_IP_HAS_LPSPI1_CLK         152U
#define CLOCK_IP_HAS_LPSPI2_CLK         153U
#define CLOCK_IP_HAS_LPSPI3_CLK         154U
#define CLOCK_IP_HAS_LPSPI4_CLK         155U
#define CLOCK_IP_HAS_LPSPI5_CLK         156U
#define CLOCK_IP_HAS_LPUART0_CLK         157U
#define CLOCK_IP_HAS_LPUART1_CLK         158U
#define CLOCK_IP_HAS_LPUART2_CLK         159U
#define CLOCK_IP_HAS_LPUART3_CLK         160U
#define CLOCK_IP_HAS_LPUART_MSC_CLK         161U
#define CLOCK_IP_HAS_MSCM_CLK         162U
#define CLOCK_IP_HAS_MU2A_CLK         163U
#define CLOCK_IP_HAS_MU2B_CLK         164U
#define CLOCK_IP_HAS_PIT0_CLK         165U
#define CLOCK_IP_HAS_PIT1_CLK         166U
#define CLOCK_IP_HAS_PIT2_CLK         167U
#define CLOCK_IP_HAS_QSPI_2XSFIF_CLK         168U
#define CLOCK_IP_HAS_QSPI0_CLK         169U
#define CLOCK_IP_HAS_QSPI0_RAM_CLK         170U
#define CLOCK_IP_HAS_QSPI0_TX_MEM_CLK         171U
#define CLOCK_IP_HAS_QSPI_SFCK_CLK         172U
#define CLOCK_IP_HAS_RTC_CLK         173U
#define CLOCK_IP_HAS_RTC0_CLK         174U
#define CLOCK_IP_HAS_SDA_AP_CLK         175U
#define CLOCK_IP_HAS_SDADC0_CLK         176U
#define CLOCK_IP_HAS_SDADC1_CLK         177U
#define CLOCK_IP_HAS_SDADC2_CLK         178U
#define CLOCK_IP_HAS_SDADC3_CLK         179U
#define CLOCK_IP_HAS_SEMA42_CLK         180U
#define CLOCK_IP_HAS_SIPI0_CLK         181U
#define CLOCK_IP_HAS_SIUL2_CLK         182U
#define CLOCK_IP_HAS_STCU0_CLK         183U
#define CLOCK_IP_HAS_STMA_CLK         184U
#define CLOCK_IP_HAS_STM0_CLK         185U
#define CLOCK_IP_HAS_STMB_CLK         186U
#define CLOCK_IP_HAS_STM1_CLK         187U
#define CLOCK_IP_HAS_STMC_CLK         188U
#define CLOCK_IP_HAS_STM2_CLK         189U
#define CLOCK_IP_HAS_SWG_CLK         190U
#define CLOCK_IP_HAS_SWG0_CLK         191U
#define CLOCK_IP_HAS_SWG1_CLK         192U
#define CLOCK_IP_HAS_SWT0_CLK         193U
#define CLOCK_IP_HAS_SWT1_CLK         194U
#define CLOCK_IP_HAS_SWT2_CLK         195U
#define CLOCK_IP_HAS_TEMPSENSE_CLK         196U
#define CLOCK_IP_HAS_TRACE_CLK         197U
#define CLOCK_IP_HAS_TRGMUX0_CLK         198U
#define CLOCK_IP_HAS_TRGMUX1_CLK         199U
#define CLOCK_IP_HAS_WKPU0_CLK         200U
#define CLOCK_IP_FEATURE_NAMES_NO         201U
#define CLOCK_IP_PLL_SUPPORTED_PLLCLKMUX (STD_OFF)


/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

#endif /* #ifndef CLOCK_IP_CFG_DEFINES_H */

/** @} */


