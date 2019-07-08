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
#include "MRF89XA.h"

/*
    Main application
 */

char SentI2CCmd = 0;

void Delay_Xms(long delay) {
    for(long i = 0; i < delay; i++) {
        __delay_ms(1);
    }
}

void Delay_Xus(long delay) {
    for(long i = 0; i < delay; i++) {
        __delay_us(1);
    }
}
// Extension int0
void INT0_Custom_ISR(void) {
    // Request module index over I2C
    unsigned char index = I2C_SendCommand(EXT_TARGET_RF_RX,CMD2_GET_MODULE_INDEX);
    
    if(index == EXT_INDEX_RF_RX) {
        ext_rf_runcmd();
    }
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

// Receive ISR
void IRQ0_ISR(void) {
    // Read fifo
    // Packet length is 2 -> 
    // Read address
    unsigned char Address = MRF89XA_ReadFifo();
    // Read data 1
    unsigned char Data1 = MRF89XA_ReadFifo();
    
    // Clear fifo
    volatile unsigned char Dummy = 0;
    while(IRQ0_GetValue() == 1) {
        Dummy = MRF89XA_ReadFifo();
    }
    
    if(Data1 == 0xAA) {
        LED_B_SetLow();
        Delay_Xms(500);
        LED_B_SetHigh();
        Delay_Xms(500);
    }
    
    asm("nop"); 
}

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Keep on reset
    RESET_USB_SetLow();
    RESET_RF_SetHigh();
    
    // Init
    ext_rf_initialize();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:
    
    // Enable Led blink in background for startup info
    SetLedBlink(RGB_R,20,40,0,1);
    SetLedBlink(RGB_G,20,40,20,1);
    SetLedBlink(RGB_B,20,40,40,1);
    SetLedBlink(R,20,40,0,1);
    SetLedBlink(G,20,40,20,1);
    SetLedBlink(B,20,40,40,1);
    
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();
    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    // Power on
    RESET_USB_SetHigh();
    RESET_RF_SetLow();
    // Wait 50ms for them to startup
    
    Delay_Xms(600);
    
    // Enable constant led blink to indicate MCU is running
    SetLedBlink(G,5,95,0,-1);
    
    // Initialize as TX mode, address 0x40
    MRF89XA_Initialize(0x40, MRF89XA_MODE_TX, MRF89XA_MODULATION_OOK);
    
    Delay_Xms(5);
    
    //IOCCF4_SetInterruptHandler(IRQ0_ISR);
    TMR2_SetInterruptHandler(TMR2_Custom_ISR);
    INT0_SetInterruptHandler(INT0_Custom_ISR);
    
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
