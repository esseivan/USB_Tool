/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC18LF46K40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB             :  MPLAB X 5.10

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "pin_manager.h"




void (*IOCAF0_InterruptHandler)(void);
void (*IOCAF1_InterruptHandler)(void);
void (*IOCAF3_InterruptHandler)(void);
void (*IOCAF4_InterruptHandler)(void);
void (*IOCBF5_InterruptHandler)(void);
void (*IOCCF3_InterruptHandler)(void);
void (*IOCCF4_InterruptHandler)(void);
void (*IOCCF5_InterruptHandler)(void);
void (*IOCCF6_InterruptHandler)(void);
void (*IOCCF7_InterruptHandler)(void);


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATE = 0x07;
    LATD = 0xF8;
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x02;

    /**
    TRISx registers
    */
    TRISE = 0x00;
    TRISA = 0xFB;
    TRISB = 0xED;
    TRISC = 0xF8;
    TRISD = 0x02;

    /**
    ANSELx registers
    */
    ANSELD = 0x00;
    ANSELC = 0x00;
    ANSELB = 0x00;
    ANSELE = 0x00;
    ANSELA = 0x00;

    /**
    WPUx registers
    */
    WPUD = 0x00;
    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */
    ODCONE = 0x07;
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x01;
    ODCOND = 0xF8;

    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x07;


    /**
    IOCx registers 
    */
    //interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF0 = 0;
    //interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF1 = 0;
    //interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF3 = 0;
    //interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF4 = 0;
    //interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN0 = 1;
    //interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN1 = 1;
    //interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN3 = 1;
    //interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN4 = 1;
    //interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP0 = 1;
    //interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP1 = 1;
    //interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP3 = 1;
    //interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP4 = 1;
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF5 = 0;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN5 = 1;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP5 = 1;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF3 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF4 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF5 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF6 = 0;
    //interrupt on change for group IOCCF - flag
    IOCCFbits.IOCCF7 = 0;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN3 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN4 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN5 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN6 = 1;
    //interrupt on change for group IOCCN - negative
    IOCCNbits.IOCCN7 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP3 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP4 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP5 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP6 = 1;
    //interrupt on change for group IOCCP - positive
    IOCCPbits.IOCCP7 = 1;



    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);
    IOCCF4_SetInterruptHandler(IOCCF4_DefaultInterruptHandler);
    IOCCF5_SetInterruptHandler(IOCCF5_DefaultInterruptHandler);
    IOCCF6_SetInterruptHandler(IOCCF6_DefaultInterruptHandler);
    IOCCF7_SetInterruptHandler(IOCCF7_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    PIE0bits.IOCIE = 1; 
    
	
    RD2PPS = 0x12;   //RD2->MSSP2:SDO2;    
    RX1PPS = 0x08;   //RB0->EUSART1:RX1;    
    SSP2DATPPS = 0x19;   //RD1->MSSP2:SDI2;    
    RB1PPS = 0x09;   //RB1->EUSART1:TX1;    
    INT0PPS = 0x05;   //RA5->EXT_INT:INT0;    
    RB4PPS = 0x14;   //RB4->CLKREF:CLKR;    
    RD0PPS = 0x11;   //RD0->MSSP2:SCK2;    
    INT2PPS = 0x07;   //RA7->EXT_INT:INT2;    
    INT1PPS = 0x06;   //RA6->EXT_INT:INT1;     
    SSP2CLKPPS = 0x18;   //RD0->MSSP2:SCK2;    
}
  
void PIN_MANAGER_IOC(void)
{   
	// interrupt on change for pin IOCAF0
    if(IOCAFbits.IOCAF0 == 1)
    {
        IOCAF0_ISR();  
    }	
	// interrupt on change for pin IOCAF1
    if(IOCAFbits.IOCAF1 == 1)
    {
        IOCAF1_ISR();  
    }	
	// interrupt on change for pin IOCAF3
    if(IOCAFbits.IOCAF3 == 1)
    {
        IOCAF3_ISR();  
    }	
	// interrupt on change for pin IOCAF4
    if(IOCAFbits.IOCAF4 == 1)
    {
        IOCAF4_ISR();  
    }	
	// interrupt on change for pin IOCBF5
    if(IOCBFbits.IOCBF5 == 1)
    {
        IOCBF5_ISR();  
    }	
	// interrupt on change for pin IOCCF3
    if(IOCCFbits.IOCCF3 == 1)
    {
        IOCCF3_ISR();  
    }	
	// interrupt on change for pin IOCCF4
    if(IOCCFbits.IOCCF4 == 1)
    {
        IOCCF4_ISR();  
    }	
	// interrupt on change for pin IOCCF5
    if(IOCCFbits.IOCCF5 == 1)
    {
        IOCCF5_ISR();  
    }	
	// interrupt on change for pin IOCCF6
    if(IOCCFbits.IOCCF6 == 1)
    {
        IOCCF6_ISR();  
    }	
	// interrupt on change for pin IOCCF7
    if(IOCCFbits.IOCCF7 == 1)
    {
        IOCCF7_ISR();  
    }	
}

/**
   IOCAF0 Interrupt Service Routine
*/
void IOCAF0_ISR(void) {

    // Add custom IOCAF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF0_InterruptHandler)
    {
        IOCAF0_InterruptHandler();
    }
    IOCAFbits.IOCAF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF0 at application runtime
*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF0
*/
void IOCAF0_DefaultInterruptHandler(void){
    // add your IOCAF0 interrupt custom code
    // or set custom function using IOCAF0_SetInterruptHandler()
}

/**
   IOCAF1 Interrupt Service Routine
*/
void IOCAF1_ISR(void) {

    // Add custom IOCAF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF1_InterruptHandler)
    {
        IOCAF1_InterruptHandler();
    }
    IOCAFbits.IOCAF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF1 at application runtime
*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF1
*/
void IOCAF1_DefaultInterruptHandler(void){
    // add your IOCAF1 interrupt custom code
    // or set custom function using IOCAF1_SetInterruptHandler()
}

/**
   IOCAF3 Interrupt Service Routine
*/
void IOCAF3_ISR(void) {

    // Add custom IOCAF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF3_InterruptHandler)
    {
        IOCAF3_InterruptHandler();
    }
    IOCAFbits.IOCAF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF3 at application runtime
*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF3
*/
void IOCAF3_DefaultInterruptHandler(void){
    // add your IOCAF3 interrupt custom code
    // or set custom function using IOCAF3_SetInterruptHandler()
}

/**
   IOCAF4 Interrupt Service Routine
*/
void IOCAF4_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF4_InterruptHandler)
    {
        IOCAF4_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF4_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void IOCAF4_DefaultInterruptHandler(void){
    // add your IOCAF4 interrupt custom code
    // or set custom function using IOCAF4_SetInterruptHandler()
}

/**
   IOCBF5 Interrupt Service Routine
*/
void IOCBF5_ISR(void) {

    // Add custom IOCBF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCBF5_InterruptHandler)
    {
        IOCBF5_InterruptHandler();
    }
    IOCBFbits.IOCBF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCBF5 at application runtime
*/
void IOCBF5_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCBF5_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCBF5
*/
void IOCBF5_DefaultInterruptHandler(void){
    // add your IOCBF5 interrupt custom code
    // or set custom function using IOCBF5_SetInterruptHandler()
}

/**
   IOCCF3 Interrupt Service Routine
*/
void IOCCF3_ISR(void) {

    // Add custom IOCCF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF3_InterruptHandler)
    {
        IOCCF3_InterruptHandler();
    }
    IOCCFbits.IOCCF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF3 at application runtime
*/
void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF3
*/
void IOCCF3_DefaultInterruptHandler(void){
    // add your IOCCF3 interrupt custom code
    // or set custom function using IOCCF3_SetInterruptHandler()
}

/**
   IOCCF4 Interrupt Service Routine
*/
void IOCCF4_ISR(void) {

    // Add custom IOCCF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF4_InterruptHandler)
    {
        IOCCF4_InterruptHandler();
    }
    IOCCFbits.IOCCF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF4 at application runtime
*/
void IOCCF4_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF4_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF4
*/
void IOCCF4_DefaultInterruptHandler(void){
    // add your IOCCF4 interrupt custom code
    // or set custom function using IOCCF4_SetInterruptHandler()
}

/**
   IOCCF5 Interrupt Service Routine
*/
void IOCCF5_ISR(void) {

    // Add custom IOCCF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF5_InterruptHandler)
    {
        IOCCF5_InterruptHandler();
    }
    IOCCFbits.IOCCF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF5 at application runtime
*/
void IOCCF5_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF5_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF5
*/
void IOCCF5_DefaultInterruptHandler(void){
    // add your IOCCF5 interrupt custom code
    // or set custom function using IOCCF5_SetInterruptHandler()
}

/**
   IOCCF6 Interrupt Service Routine
*/
void IOCCF6_ISR(void) {

    // Add custom IOCCF6 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF6_InterruptHandler)
    {
        IOCCF6_InterruptHandler();
    }
    IOCCFbits.IOCCF6 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF6 at application runtime
*/
void IOCCF6_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF6_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF6
*/
void IOCCF6_DefaultInterruptHandler(void){
    // add your IOCCF6 interrupt custom code
    // or set custom function using IOCCF6_SetInterruptHandler()
}

/**
   IOCCF7 Interrupt Service Routine
*/
void IOCCF7_ISR(void) {

    // Add custom IOCCF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCCF7_InterruptHandler)
    {
        IOCCF7_InterruptHandler();
    }
    IOCCFbits.IOCCF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF7 at application runtime
*/
void IOCCF7_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF7_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF7
*/
void IOCCF7_DefaultInterruptHandler(void){
    // add your IOCCF7 interrupt custom code
    // or set custom function using IOCCF7_SetInterruptHandler()
}

/**
 End of File
*/