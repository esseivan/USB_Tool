/*
 * File:   main.c
 * Author: Esseiva
 *
 * Created on 20. avril 2019, 12:02
 */

#include "mcc_generated_files/mcc.h"
#include "main.h"
#include "LedBlink.h"
#include "commands.h"
#include "ext_rf_receiver.h"


/*
    Main application
 */

char SentI2CCmd = 0;

void Delay_Xms(long delay) {
    for(long i = 0; i < delay; i++) {
        __delay_ms(1);
    }
}

void INT0_Custom_ISR(void) {
    // Request module index over I2C
    
    unsigned char index = I2C_SendCommand(EXT_TARGET_RF_RX,CMD2_GET_MODULE_INDEX);
    
    if(index == EXT_INDEX_RF_RX) {
        ext_rf_runcmd();
    }
    // Wait for answer
    ToggleLed(R);
}

void RunLoop(void) {
    // Check if uart data received
    if(EUSART1_is_rx_ready() != 0) {
        // Blink led
        SetLedBlink(B, 5, 95, 0, 1);
        while(EUSART1_is_rx_ready() != 0)
        {
            while(!EUSART1_is_tx_ready());
            
            EUSART1_Write(EUSART1_Read());
        }
    }
}

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Init
    ext_rf_initialize();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    TMR2_SetInterruptHandler(TMR2_Custom_ISR);
    INT0_SetInterruptHandler(INT0_Custom_ISR);
    
    // Enabled MCP2221
    RESET_USB_SetHigh();
    RESET_RF_SetLow();
    
    // Enable Led blink in background
    
    SetLedBlink(RGB_R,20,40,0,2);
    SetLedBlink(RGB_G,20,40,20,2);
    SetLedBlink(RGB_B,20,40,40,2);
    
    SetLedBlink(R,20,40,0,2);
    SetLedBlink(G,20,40,20,2);
    SetLedBlink(B,20,40,40,2);
    
    Delay_Xms(1200);
    // Disable leds blink
    SetLedBlink(G,5,95,0,-1);
    
    while (1)
    {
        RunLoop();
        Delay_Xms(100);
    }
    
    while (1);
}

/**
 End of File
*/
