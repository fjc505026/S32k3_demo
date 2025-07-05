/*
*   Copyright 2022 - 2024 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms. By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Clock_Ip.h"
#include "FlexPwm_Ip.h"
#include "Siul2_Port_Ip.h"
#include "Clock_Ip_Private.h"
#include "Adc_Sar_Ip.h"
#include "Adc_Sar_Ip_Irq.h"
#include "IntCtrl_Ip.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define FULL_DUTY_CYCLE_CNT    ((uint16)1600U) // 100Khz == 160Mhz/1600


#define DELAY_TIMER       (uint32)5000000U // 500MS
#define INSTANCE_0        (uint8)0U
#define SubModule_0       (uint8)0U
#define SubModule_2       (uint8)2U
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

void TestDelay(uint32 delay);
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
void TestDelay(uint32 delay)
{
    static volatile uint32 DelayTimer = 0U;
    while(DelayTimer<delay)
    {
        DelayTimer++;
    }
    DelayTimer = 0U;
}

volatile boolean notif_triggered = FALSE;

volatile uint16 data;
volatile float voltage;

void AdcEndOfChainNotif(void)
{
    notif_triggered = TRUE;
    data = Adc_Sar_Ip_GetConvData(ADCHWUNIT_0_VS_0_INSTANCE, 48U);

    voltage =  data* 5000 / 4095;
}


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief        Main function of the example
* @details      Initialize the used drivers and uses the Pwm driver to control the led brightness
*               and blink a LED
*/
int main (void)
{
    StatusType status;

    /* Initialize clock */
    Clock_Ip_Init(&Clock_Ip_aClockConfig[0U]);

    /* Initialize all pins using the Port driver */
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS_PortContainer_0_VS_0, g_pin_mux_InitConfigArr_PortContainer_0_VS_0);

    /* Initialize FlexPwm_Ip driver */
    FlexPwm_Ip_Init(FLEXPWM_IP_SUB_VS_0_I0_SUB0_CFG, &FlexPwm_Ip_VS_0_InstanceCfg_I0);

    /* Setup new duty cycle to the pin*/
    FlexPwm_Ip_ClearLoadValue(INSTANCE_0, 1U << SubModule_0);
    FlexPwm_Ip_UpdateDutyCycle(INSTANCE_0, SubModule_0, FLEXPWM_IP_PWMA, (uint16) ( 0.4f*FULL_DUTY_CYCLE_CNT ));
    FlexPwm_Ip_LoadValue(INSTANCE_0, 1U << SubModule_0, TRUE);


    /* Setup new duty cycle to the pin*/
    FlexPwm_Ip_ClearLoadValue(INSTANCE_0, 1U << SubModule_2);
    FlexPwm_Ip_UpdateDutyCycle(INSTANCE_0, SubModule_2, FLEXPWM_IP_PWMA, (uint16) ( 0.4f*FULL_DUTY_CYCLE_CNT ));
    FlexPwm_Ip_LoadValue(INSTANCE_0, 1U << SubModule_2, TRUE);
    

    // ADC init
    status = (StatusType) Adc_Sar_Ip_Init(ADCHWUNIT_0_VS_0_INSTANCE, &AdcHwUnit_0_VS_0);
    while (status != E_OK);

    IntCtrl_Ip_InstallHandler(ADC0_IRQn, Adc_Sar_0_Isr, NULL_PTR);
    IntCtrl_Ip_EnableIrq(ADC0_IRQn);

    /* Call Calibration function multiple times, to mitigate instability of board source */
    for( uint8 Index = 0; Index <= 5; Index++)
    {
        status = (StatusType) Adc_Sar_Ip_DoCalibration(ADCHWUNIT_0_VS_0_INSTANCE);
        if(status == E_OK)
        {
            break;
        }
    }



    Adc_Sar_Ip_EnableNotifications(ADCHWUNIT_0_VS_0_INSTANCE, ADC_SAR_IP_NOTIF_FLAG_NORMAL_ENDCHAIN);

    /* Start a SW triggered normal conversion on ADC_SAR */
    Adc_Sar_Ip_StartConversion(ADCHWUNIT_0_VS_0_INSTANCE, ADC_SAR_IP_CONV_CHAIN_NORMAL);

    /* Wait for the notification to be triggered and read the data */
    while (notif_triggered != TRUE);
    notif_triggered = FALSE;

    static volatile uint8 tempcnt =0U;
    while( TRUE)
    {
        FlexPwm_Ip_ClearLoadValue(INSTANCE_0, 1U << SubModule_0);
        FlexPwm_Ip_UpdateDutyCycle(INSTANCE_0, SubModule_0, FLEXPWM_IP_PWMA, (uint16) ( 0.1f * tempcnt*FULL_DUTY_CYCLE_CNT ));
        FlexPwm_Ip_LoadValue(INSTANCE_0, 1U << SubModule_0, TRUE);

 
        FlexPwm_Ip_ClearLoadValue(INSTANCE_0, 1U << SubModule_2);
        FlexPwm_Ip_UpdateDutyCycle(INSTANCE_0, SubModule_2, FLEXPWM_IP_PWMA, (uint16) ( 0.1f * tempcnt*FULL_DUTY_CYCLE_CNT ));
        FlexPwm_Ip_LoadValue(INSTANCE_0, 1U << SubModule_2, TRUE);
        TestDelay(DELAY_TIMER);
        Adc_Sar_Ip_StartConversion(ADCHWUNIT_0_VS_0_INSTANCE, ADC_SAR_IP_CONV_CHAIN_NORMAL);


        tempcnt++;

        if ( tempcnt == 11)
        {
           tempcnt = 0U;
        }
        
    }

    /* De-Initialize FlexPwm_Ip driver */
    FlexPwm_Ip_DeInit(INSTANCE_0);

    return 0U;
}

#ifdef __cplusplus
}
#endif

/** @} */
