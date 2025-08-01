/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : ADC_SAR
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
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
==================================================================================================*/

#ifndef ADC_SAR_IP_CFG_H
#define ADC_SAR_IP_CFG_H

/**
*   @file
*
*   @addtogroup adc_sar_ip_config Adc Sar IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Adc_Sar_Ip_Types.h"
#include "Adc_Sar_Ip_VS_0_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_SAR_IP_VENDOR_ID_CFG                      43
#define ADC_SAR_IP_AR_RELEASE_MAJOR_VERSION_CFG       4
#define ADC_SAR_IP_AR_RELEASE_MINOR_VERSION_CFG       7
#define ADC_SAR_IP_AR_RELEASE_REVISION_VERSION_CFG    0
#define ADC_SAR_IP_SW_MAJOR_VERSION_CFG               5
#define ADC_SAR_IP_SW_MINOR_VERSION_CFG               0
#define ADC_SAR_IP_SW_PATCH_VERSION_CFG               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_Types.h file are of the same vendor */
#if (ADC_SAR_IP_VENDOR_ID_CFG != ADC_SAR_IP_VENDOR_ID_TYPES)
    #error "Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_Types.h have different vendor ids"
#endif

/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_Types.h file are of the same Autosar version */
#if ((ADC_SAR_IP_AR_RELEASE_MAJOR_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (ADC_SAR_IP_AR_RELEASE_MINOR_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (ADC_SAR_IP_AR_RELEASE_REVISION_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_Types.h are different"
#endif

/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_Types.h file are of the same Software version */
#if ((ADC_SAR_IP_SW_MAJOR_VERSION_CFG != ADC_SAR_IP_SW_MAJOR_VERSION_TYPES) || \
     (ADC_SAR_IP_SW_MINOR_VERSION_CFG != ADC_SAR_IP_SW_MINOR_VERSION_TYPES) || \
     (ADC_SAR_IP_SW_PATCH_VERSION_CFG != ADC_SAR_IP_SW_PATCH_VERSION_TYPES) \
    )
  #error "Software Version Numbers of Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_Types.h are different"
#endif

/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_VS_0_PBcfg.h file are of the same vendor */
#if (ADC_SAR_IP_VENDOR_ID_CFG != ADC_SAR_IP_VENDOR_ID_VS_0_PBCFG)
    #error "Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_VS_0_PBcfg.h have different vendor ids"
#endif

/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_VS_0_PBcfg.h file are of the same Autosar version */
#if ((ADC_SAR_IP_AR_RELEASE_MAJOR_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_MAJOR_VERSION_VS_0_PBCFG) || \
     (ADC_SAR_IP_AR_RELEASE_MINOR_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_MINOR_VERSION_VS_0_PBCFG) || \
     (ADC_SAR_IP_AR_RELEASE_REVISION_VERSION_CFG != ADC_SAR_IP_AR_RELEASE_REVISION_VERSION_VS_0_PBCFG) \
    )
    #error "AutoSar Version Numbers of Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_VS_0_PBcfg.h are different"
#endif

/* Check if Adc_Sar_Ip_Cfg.h file and Adc_Sar_Ip_VS_0_PBcfg.h file are of the same Software version */
#if ((ADC_SAR_IP_SW_MAJOR_VERSION_CFG != ADC_SAR_IP_SW_MAJOR_VERSION_VS_0_PBCFG) || \
     (ADC_SAR_IP_SW_MINOR_VERSION_CFG != ADC_SAR_IP_SW_MINOR_VERSION_VS_0_PBCFG) || \
     (ADC_SAR_IP_SW_PATCH_VERSION_CFG != ADC_SAR_IP_SW_PATCH_VERSION_VS_0_PBCFG) \
    )
  #error "Software Version Numbers of Adc_Sar_Ip_Cfg.h and Adc_Sar_Ip_VS_0_PBcfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_SAR_IP_CFG_H */

