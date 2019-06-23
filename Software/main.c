/*
 * File:   main.c
 * Author: Esseiva
 *
 * Created on 20. avril 2019, 12:02
 */

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void spi_isr(void);
void Delay_Xms(long delay);

void SetLed(bool R, bool G, bool B) {
    if(R)
        LED2_SetLow();
    else
        LED2_SetHigh();
    
    if(G)
        LED1_SetLow();
    else
        LED1_SetHigh();
    
    if(B)
        LED0_SetLow();
    else
        LED0_SetHigh();
}

void spi_isr(void) {
    SetLed(true, false, false);
    Delay_Xms(100);
    SetLed(false, false, false);
    Delay_Xms(100);
}

void Delay_Xms(long delay) {
    for(long i = 0; i < delay; i++) {
        __delay_ms(1);
    }
}


void ledBlink_RGB(long delay){
    SetLed(true, false, false);
    Delay_Xms(delay);
    SetLed(false, true, false);
    Delay_Xms(delay);
    SetLed(false, false, true);
    Delay_Xms(delay);
    SetLed(false, false, false);
}

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Init
    
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    ledBlink_RGB(200);
        
    while (1)
    {
        SetLed(false,true,false);
        Delay_Xms(100);
        SetLed(false,false,false);
        Delay_Xms(900);
    }
    
    while (1);
}
/**
 End of File
*/
