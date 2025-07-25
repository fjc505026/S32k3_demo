
/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : Emios Flexio FlexPwm eTpu
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
*   @file       FlexPwm_Ip_VS_0_PBcfg.c
*
*   @addtogroup flexpwm_ip FlexPwm Pwm IPL
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
#include "FlexPwm_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FLEXPWM_IP_VS_0_PB_CFG_VENDOR_ID_C                       43
#define FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define FLEXPWM_IP_VS_0_PB_CFG_SW_MAJOR_VERSION_C                5
#define FLEXPWM_IP_VS_0_PB_CFG_SW_MINOR_VERSION_C                0
#define FLEXPWM_IP_VS_0_PB_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and FlexPwm_Ip_Cfg.h file are of the same vendor */
#if (FLEXPWM_IP_VS_0_PB_CFG_VENDOR_ID_C != FLEXPWM_IP_CFG_VENDOR_ID)
    #error "Vendor IDs of FlexPwm_Ip_VS_0_PBcfg.c and FlexPwm_Ip_Cfg.h are different."
#endif

/* Check if source file and FlexPwm_Ip_Cfg.h file are of the same AUTOSAR version */
#if ((FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != FLEXPWM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != FLEXPWM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FLEXPWM_IP_VS_0_PB_CFG_AR_RELEASE_REVISION_VERSION_C != FLEXPWM_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of FlexPwm_Ip_VS_0_PBcfg.c and FlexPwm_Ip_Cfg.h are different."
#endif

/* Check if source file and FlexPwm_Ip_Cfg.h file are of the same Software version */
#if ((FLEXPWM_IP_VS_0_PB_CFG_SW_MAJOR_VERSION_C != FLEXPWM_IP_CFG_SW_MAJOR_VERSION)  || \
     (FLEXPWM_IP_VS_0_PB_CFG_SW_MINOR_VERSION_C != FLEXPWM_IP_CFG_SW_MINOR_VERSION)  || \
     (FLEXPWM_IP_VS_0_PB_CFG_SW_PATCH_VERSION_C != FLEXPWM_IP_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of FlexPwm_Ip_VS_0_PBcfg.c and FlexPwm_Ip_Cfg.h are different."
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#ifndef FLEXPWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/*================================================================================================*/

/* FlexPwm instance 0 fault channels configuration */
static const FlexPwm_Ip_FaultChCfgTypes FlexPwm_Ip_VS_0_FaultCfg_I0 =
{
    /* FaultLevel */             0U,
    /* AutoFaultClearing */      0U,
    /* FaultSafetyMode */        0U,
    /* FullCycle */              0U,
    /* FaultInterruptEn */       0U,
    /* FaultNotification */      {NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}
};

/* FlexPwm instance 0 subModule 0 channel PWMA configuration */
const FlexPwm_Ip_ChannelCfgTypes FlexPwm_Ip_VS_0_ChannelCfg_I0_S0_PWMA =
{
    /* ChannelId */               FLEXPWM_IP_PWMA,
    /* Polarity */                FLEXPWM_IP_POL_HIGH,
    /* DutyCycle */               800U,
    /* PhaseShiftTicks */         0U,
    /* OutputTrig */              FLEXPWM_IP_NO_TRIGGER,
    /* FaultState */              FLEXPWM_IP_OUTPUT_STATE_LOGIC_0,
    /* DisOutputFault */          0U,
    /* InterruptType */           FLEXPWM_IP_DISABLE_INT,
    /* ChannelCb */               {
        /* CbFunction */              NULL_PTR,
        /* CbParameter */             NULL_PTR
                                  }
};

/* FlexPwm instance 0 subModule 0 channels configuration array */
static const FlexPwm_Ip_ChannelCfgTypes * const FlexPwm_Ip_VS_0_ChannelCfg_I0_S0_Array[1U] =
{
    &FlexPwm_Ip_VS_0_ChannelCfg_I0_S0_PWMA
};

/* FlexPwm instance 0 subModule 0 SubModule configuration */
static const FlexPwm_Ip_SubModuleCfgTypes FlexPwm_Ip_VS_0_SubModCfg_I0_S0 =
{
    /* SubModuleId */              0U,
    /* ClkSource */                FLEXPWM_IP_CLKSOURCE_PERIPHERAL_CLK,
    /* InitControl */              FLEXPWM_IP_INIT_LOCAL_SYNC,
    /* Prescaler */                FLEXPWM_IP_DIV1,
    /* PrescalerAlt */             FLEXPWM_IP_DIV1,
    /* ReloadSrc */                FLEXPWM_IP_LOCAL_RELOAD,
    /* Reload */                   FLEXPWM_IP_RELOAD_FULL,
    /* LoadFrq */                  FLEXPWM_IP_LDFQ_EACH1,
    /* ForceSrc */                 FLEXPWM_IP_LOCAL_FORCE,
    /* ChPair */                   FLEXPWM_IP_COMPLEMENTARY,
    /* SigPwm */                   FLEXPWM_IP_EDGE_ALIGNED,
    /* InitVal */                  0U,
    /* CompSrc */                  FLEXPWM_IP_COMP_SOURCE23,
    /* DeadTimeCount0 */           0U,
    /* DeadTimeCount1 */           0U,
    /* DebugModeEnable */          1U,
    /* ChannelCfgArray */          FlexPwm_Ip_VS_0_ChannelCfg_I0_S0_Array,
    /* NumChannelCfg */            1U,
    /* Period */                   1600U
};

/* FlexPwm instance 0 subModule 2 channel PWMA configuration */
const FlexPwm_Ip_ChannelCfgTypes FlexPwm_Ip_VS_0_ChannelCfg_I0_S2_PWMA =
{
    /* ChannelId */               FLEXPWM_IP_PWMA,
    /* Polarity */                FLEXPWM_IP_POL_HIGH,
    /* DutyCycle */               800U,
    /* PhaseShiftTicks */         800U,
    /* OutputTrig */              FLEXPWM_IP_NO_TRIGGER,
    /* FaultState */              FLEXPWM_IP_OUTPUT_STATE_LOGIC_0,
    /* DisOutputFault */          0U,
    /* InterruptType */           FLEXPWM_IP_DISABLE_INT,
    /* ChannelCb */               {
        /* CbFunction */              NULL_PTR,
        /* CbParameter */             NULL_PTR
                                  }
};

/* FlexPwm instance 0 subModule 2 channels configuration array */
static const FlexPwm_Ip_ChannelCfgTypes * const FlexPwm_Ip_VS_0_ChannelCfg_I0_S2_Array[1U] =
{
    &FlexPwm_Ip_VS_0_ChannelCfg_I0_S2_PWMA
};

/* FlexPwm instance 0 subModule 2 SubModule configuration */
static const FlexPwm_Ip_SubModuleCfgTypes FlexPwm_Ip_VS_0_SubModCfg_I0_S2 =
{
    /* SubModuleId */              2U,
    /* ClkSource */                FLEXPWM_IP_CLKSOURCE_PERIPHERAL_CLK,
    /* InitControl */              FLEXPWM_IP_INIT_MASTER_SYNC,
    /* Prescaler */                FLEXPWM_IP_DIV1,
    /* PrescalerAlt */             FLEXPWM_IP_DIV1,
    /* ReloadSrc */                FLEXPWM_IP_LOCAL_RELOAD,
    /* Reload */                   FLEXPWM_IP_RELOAD_FULL,
    /* LoadFrq */                  FLEXPWM_IP_LDFQ_EACH1,
    /* ForceSrc */                 FLEXPWM_IP_LOCAL_FORCE,
    /* ChPair */                   FLEXPWM_IP_COMPLEMENTARY,
    /* SigPwm */                   FLEXPWM_IP_PHASE_SHIFTED,
    /* InitVal */                  0U,
    /* CompSrc */                  FLEXPWM_IP_COMP_SOURCE23,
    /* DeadTimeCount0 */           0U,
    /* DeadTimeCount1 */           0U,
    /* DebugModeEnable */          1U,
    /* ChannelCfgArray */          FlexPwm_Ip_VS_0_ChannelCfg_I0_S2_Array,
    /* NumChannelCfg */            1U,
    /* Period */                   1600U
};

/* FlexPwm instance 0 SubModule configuration array */
static const FlexPwm_Ip_SubModuleCfgTypes * const FlexPwm_Ip_VS_0_SubModCfg_I0_Array[2U] =
{
    &FlexPwm_Ip_VS_0_SubModCfg_I0_S0,
    &FlexPwm_Ip_VS_0_SubModCfg_I0_S2
};

/* FlexPwm instance 0 Configuration*/    
const FlexPwm_Ip_InstanceCfgTypes FlexPwm_Ip_VS_0_InstanceCfg_I0 =
{
    /* OutputEnable */               1360U,
    /* MaskOutput */                 0U,
    /* MasterControlRun */           5U,
    /* FaultFunctionalityEnable */   (boolean)FALSE,
    /* FaultGlitchStretchEnable */   FALSE,
    /* FaultFilterCounter */         0U,
    /* FaultFilterPeriod */          0U,
    /* NoCombinationalPath */        0U,
    /* FaultChCfg */                 &FlexPwm_Ip_VS_0_FaultCfg_I0,
    /* SubModuleCfgArray */          FlexPwm_Ip_VS_0_SubModCfg_I0_Array,
    /* NumSubModuleCfg */            2U
};

#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* FLEXPWM_IP_PRECOMPILE_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */

