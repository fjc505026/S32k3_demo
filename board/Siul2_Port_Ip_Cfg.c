/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7 
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 5.0.0
*   Build Version        : S32K3_S32M27x_AUTOSAR_R21-11_RTD_5_0_0_D2410_ASR_REL_4_7_REV_0000_20241002
*
*   Copyright 2020 - 2024 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file      Siul2_Port_Ip_Cfg.h
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Siul2_Port_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_VENDOR_ID_CFG_C                       43
#define SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C        7
#define SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_C                5
#define SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_C                0
#define SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_C                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same vendor */
#if (SIUL2_PORT_IP_VENDOR_ID_CFG_C != SIUL2_PORT_IP_VENDOR_ID_CFG_H)
    #error "Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h have different vendor ids"
#endif
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C    != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C    != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are different"
#endif
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same Software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_C != SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_C != SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_C != SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                             LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                             LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                            LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL VARIABLES
==================================================================================================*/

/* clang-format off */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
PortContainer_0_VS_0:
- options: {callFromInitBoot: 'true', coreID: M7_0_0, fullInit: 'true'}
- pin_list:
  - {pin_num: F16, peripheral: FlexPWM_0, signal: 'pwm_0_a, 2', pin_signal: PTD2, direction: OUTPUT, safeMode: outputOff, pullSelect: pullDown, pullEnable: disabled,
    outputInversionSelect: doNotInvert, inputBufferEnable: disabled, padKeepingEnable: disabled, outputBufferEnable: enabled, InitValue: state_0}
  - {pin_num: F17, peripheral: FlexPWM_0, signal: 'pwm_0_b, 2', pin_signal: PTD3, direction: OUTPUT, safeMode: outputOff, pullSelect: pullDown, pullEnable: disabled,
    outputInversionSelect: doNotInvert, inputBufferEnable: disabled, padKeepingEnable: disabled, outputBufferEnable: enabled, InitValue: state_0}
  - {pin_num: D16, peripheral: FlexPWM_0, signal: 'pwm_0_a, 0', pin_signal: PTD24, direction: OUTPUT, safeMode: outputOff, pullSelect: pullDown, pullEnable: disabled,
    outputInversionSelect: doNotInvert, inputBufferEnable: disabled, padKeepingEnable: disabled, outputBufferEnable: enabled, InitValue: state_0}
  - {pin_num: D17, peripheral: FlexPWM_0, signal: 'pwm_0_b, 0', pin_signal: PTA2, direction: OUTPUT, safeMode: outputOff, pullSelect: pullDown, pullEnable: disabled,
    outputInversionSelect: doNotInvert, inputBufferEnable: disabled, padKeepingEnable: disabled, outputBufferEnable: enabled, InitValue: state_0}
  - {pin_num: C17, peripheral: ADC0, signal: adc0_s14, pin_signal: PTB11, safeMode: outputOff, pullSelect: pullDown, pullEnable: disabled, outputInversionSelect: doNotInvert,
    inputBufferEnable: enabled, padKeepingEnable: disabled, outputBufferEnable: disabled, InitValue: state_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*! @brief Array of pin configuration structures */
const Siul2_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_PortContainer_0_VS_0[NUM_OF_CONFIGURED_PINS_PortContainer_0_VS_0] =
{
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 98u,
        .mux                         = PORT_MUX_ALT10,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .driveStrength               = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .slewRateCtrlSel             = PORT_SLEW_RATE_NOT_AVAILABLE,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 99u,
        .mux                         = PORT_MUX_ALT10,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .driveStrength               = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .slewRateCtrlSel             = PORT_SLEW_RATE_NOT_AVAILABLE,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 120u,
        .mux                         = PORT_MUX_ALT11,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .driveStrength               = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .slewRateCtrlSel             = PORT_SLEW_RATE_NOT_AVAILABLE,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 2u,
        .mux                         = PORT_MUX_ALT10,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .driveStrength               = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .slewRateCtrlSel             = PORT_SLEW_RATE_NOT_AVAILABLE,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 43u,
        .mux                         = PORT_MUX_AS_GPIO,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .driveStrength               = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .slewRateCtrlSel             = PORT_SLEW_RATE_NOT_AVAILABLE,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .inputMux                    = {
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT
                                       },
        .initValue                   = 2u
    },
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*==================================================================================================
                                      LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
