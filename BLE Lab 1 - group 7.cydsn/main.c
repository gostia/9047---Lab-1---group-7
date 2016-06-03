/*******************************************************************************
* File Name: main.c
*
* Version: 1.0
*
* Description:
*  This is the source code for the PSoC 4 BLE Lab 1 - Setting up a Connection.
*
* Hardware Dependency:
*  CY8CKIT-042 BLE Pioneer Kit
*
********************************************************************************
* Copyright 2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/
#include <project.h>

/***************************************
*        API Constants
***************************************/
#define NO_ALERT           (0u)
#define MILD_ALERT         (1u)
#define HIGH_ALERT         (2u)

#define NO_ALERT_COMPARE   (0u)
#define MILD_ALERT_COMPARE (250u)
#define HIGH_ALERT_COMPARE (500u)

/***************************************
*        Function Prototypes
***************************************/
void StackEventHandler(uint32 event, void* eventParam);
void IasEventHandler(uint32 event, void* eventParam);
void HandleAlertLEDs(uint8 status);


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
int main()
{
    CyGlobalIntEnable; 

    /* Start the PWM component */
   PWM_Start();
   
    
    for(;;)
    {
     Pin_LED_Write(~Pin_LED_Read());
     CyDelay(1000);   
        
    }
}




/* [] END OF FILE */
