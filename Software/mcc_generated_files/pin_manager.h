/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC18F46K40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set BRR aliases
#define BRR_TRIS                 TRISAbits.TRISA0
#define BRR_LAT                  LATAbits.LATA0
#define BRR_PORT                 PORTAbits.RA0
#define BRR_WPU                  WPUAbits.WPUA0
#define BRR_OD                   ODCONAbits.ODCA0
#define BRR_ANS                  ANSELAbits.ANSELA0
#define BRR_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define BRR_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define BRR_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define BRR_GetValue()           PORTAbits.RA0
#define BRR_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define BRR_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define BRR_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define BRR_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define BRR_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define BRR_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define BRR_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define BRR_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set BRA aliases
#define BRA_TRIS                 TRISAbits.TRISA1
#define BRA_LAT                  LATAbits.LATA1
#define BRA_PORT                 PORTAbits.RA1
#define BRA_WPU                  WPUAbits.WPUA1
#define BRA_OD                   ODCONAbits.ODCA1
#define BRA_ANS                  ANSELAbits.ANSELA1
#define BRA_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define BRA_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define BRA_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define BRA_GetValue()           PORTAbits.RA1
#define BRA_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define BRA_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define BRA_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define BRA_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define BRA_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define BRA_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define BRA_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define BRA_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set LOWPWR aliases
#define LOWPWR_TRIS                 TRISAbits.TRISA3
#define LOWPWR_LAT                  LATAbits.LATA3
#define LOWPWR_PORT                 PORTAbits.RA3
#define LOWPWR_WPU                  WPUAbits.WPUA3
#define LOWPWR_OD                   ODCONAbits.ODCA3
#define LOWPWR_ANS                  ANSELAbits.ANSELA3
#define LOWPWR_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LOWPWR_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LOWPWR_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LOWPWR_GetValue()           PORTAbits.RA3
#define LOWPWR_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LOWPWR_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LOWPWR_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LOWPWR_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LOWPWR_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LOWPWR_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LOWPWR_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define LOWPWR_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set SSPND aliases
#define SSPND_TRIS                 TRISAbits.TRISA4
#define SSPND_LAT                  LATAbits.LATA4
#define SSPND_PORT                 PORTAbits.RA4
#define SSPND_WPU                  WPUAbits.WPUA4
#define SSPND_OD                   ODCONAbits.ODCA4
#define SSPND_ANS                  ANSELAbits.ANSELA4
#define SSPND_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SSPND_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SSPND_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SSPND_GetValue()           PORTAbits.RA4
#define SSPND_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SSPND_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SSPND_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SSPND_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SSPND_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SSPND_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SSPND_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define SSPND_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set CSDAT aliases
#define CSDAT_TRIS                 TRISAbits.TRISA5
#define CSDAT_LAT                  LATAbits.LATA5
#define CSDAT_PORT                 PORTAbits.RA5
#define CSDAT_WPU                  WPUAbits.WPUA5
#define CSDAT_OD                   ODCONAbits.ODCA5
#define CSDAT_ANS                  ANSELAbits.ANSELA5
#define CSDAT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define CSDAT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define CSDAT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define CSDAT_GetValue()           PORTAbits.RA5
#define CSDAT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define CSDAT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define CSDAT_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define CSDAT_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define CSDAT_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define CSDAT_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define CSDAT_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define CSDAT_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RESET_RF aliases
#define RESET_RF_TRIS                 TRISAbits.TRISA7
#define RESET_RF_LAT                  LATAbits.LATA7
#define RESET_RF_PORT                 PORTAbits.RA7
#define RESET_RF_WPU                  WPUAbits.WPUA7
#define RESET_RF_OD                   ODCONAbits.ODCA7
#define RESET_RF_ANS                  ANSELAbits.ANSELA7
#define RESET_RF_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RESET_RF_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RESET_RF_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RESET_RF_GetValue()           PORTAbits.RA7
#define RESET_RF_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RESET_RF_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RESET_RF_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define RESET_RF_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define RESET_RF_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define RESET_RF_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define RESET_RF_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define RESET_RF_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set SDO2 aliases
#define SDO2_TRIS                 TRISBbits.TRISB0
#define SDO2_LAT                  LATBbits.LATB0
#define SDO2_PORT                 PORTBbits.RB0
#define SDO2_WPU                  WPUBbits.WPUB0
#define SDO2_OD                   ODCONBbits.ODCB0
#define SDO2_ANS                  ANSELBbits.ANSELB0
#define SDO2_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SDO2_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SDO2_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SDO2_GetValue()           PORTBbits.RB0
#define SDO2_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SDO2_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SDO2_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SDO2_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SDO2_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SDO2_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SDO2_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define SDO2_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set SCK2 aliases
#define SCK2_TRIS                 TRISBbits.TRISB1
#define SCK2_LAT                  LATBbits.LATB1
#define SCK2_PORT                 PORTBbits.RB1
#define SCK2_WPU                  WPUBbits.WPUB1
#define SCK2_OD                   ODCONBbits.ODCB1
#define SCK2_ANS                  ANSELBbits.ANSELB1
#define SCK2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SCK2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SCK2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SCK2_GetValue()           PORTBbits.RB1
#define SCK2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SCK2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SCK2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SCK2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SCK2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SCK2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SCK2_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define SCK2_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set SDI2 aliases
#define SDI2_TRIS                 TRISBbits.TRISB2
#define SDI2_LAT                  LATBbits.LATB2
#define SDI2_PORT                 PORTBbits.RB2
#define SDI2_WPU                  WPUBbits.WPUB2
#define SDI2_OD                   ODCONBbits.ODCB2
#define SDI2_ANS                  ANSELBbits.ANSELB2
#define SDI2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SDI2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SDI2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SDI2_GetValue()           PORTBbits.RB2
#define SDI2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SDI2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SDI2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SDI2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SDI2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SDI2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SDI2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define SDI2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISBbits.TRISB4
#define SCL_LAT                  LATBbits.LATB4
#define SCL_PORT                 PORTBbits.RB4
#define SCL_WPU                  WPUBbits.WPUB4
#define SCL_OD                   ODCONBbits.ODCB4
#define SCL_ANS                  ANSELBbits.ANSELB4
#define SCL_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SCL_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SCL_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SCL_GetValue()           PORTBbits.RB4
#define SCL_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SCL_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISBbits.TRISB5
#define SDA_LAT                  LATBbits.LATB5
#define SDA_PORT                 PORTBbits.RB5
#define SDA_WPU                  WPUBbits.WPUB5
#define SDA_OD                   ODCONBbits.ODCB5
#define SDA_ANS                  ANSELBbits.ANSELB5
#define SDA_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SDA_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SDA_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SDA_GetValue()           PORTBbits.RB5
#define SDA_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SDA_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set ICSPCLK aliases
#define ICSPCLK_TRIS                 TRISBbits.TRISB6
#define ICSPCLK_LAT                  LATBbits.LATB6
#define ICSPCLK_PORT                 PORTBbits.RB6
#define ICSPCLK_WPU                  WPUBbits.WPUB6
#define ICSPCLK_OD                   ODCONBbits.ODCB6
#define ICSPCLK_ANS                  ANSELBbits.ANSELB6
#define ICSPCLK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ICSPCLK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ICSPCLK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ICSPCLK_GetValue()           PORTBbits.RB6
#define ICSPCLK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ICSPCLK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ICSPCLK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ICSPCLK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ICSPCLK_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define ICSPCLK_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define ICSPCLK_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define ICSPCLK_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set ICSPDAT aliases
#define ICSPDAT_TRIS                 TRISBbits.TRISB7
#define ICSPDAT_LAT                  LATBbits.LATB7
#define ICSPDAT_PORT                 PORTBbits.RB7
#define ICSPDAT_WPU                  WPUBbits.WPUB7
#define ICSPDAT_OD                   ODCONBbits.ODCB7
#define ICSPDAT_ANS                  ANSELBbits.ANSELB7
#define ICSPDAT_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define ICSPDAT_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define ICSPDAT_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define ICSPDAT_GetValue()           PORTBbits.RB7
#define ICSPDAT_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define ICSPDAT_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define ICSPDAT_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define ICSPDAT_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define ICSPDAT_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define ICSPDAT_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define ICSPDAT_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define ICSPDAT_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set IRQ0 aliases
#define IRQ0_TRIS                 TRISCbits.TRISC0
#define IRQ0_LAT                  LATCbits.LATC0
#define IRQ0_PORT                 PORTCbits.RC0
#define IRQ0_WPU                  WPUCbits.WPUC0
#define IRQ0_OD                   ODCONCbits.ODCC0
#define IRQ0_ANS                  ANSELCbits.ANSELC0
#define IRQ0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IRQ0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IRQ0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IRQ0_GetValue()           PORTCbits.RC0
#define IRQ0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IRQ0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IRQ0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IRQ0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IRQ0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IRQ0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IRQ0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IRQ0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set IRQ1 aliases
#define IRQ1_TRIS                 TRISCbits.TRISC1
#define IRQ1_LAT                  LATCbits.LATC1
#define IRQ1_PORT                 PORTCbits.RC1
#define IRQ1_WPU                  WPUCbits.WPUC1
#define IRQ1_OD                   ODCONCbits.ODCC1
#define IRQ1_ANS                  ANSELCbits.ANSELC1
#define IRQ1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IRQ1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IRQ1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IRQ1_GetValue()           PORTCbits.RC1
#define IRQ1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IRQ1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IRQ1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IRQ1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IRQ1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IRQ1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IRQ1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IRQ1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set CS_EXT aliases
#define CS_EXT_TRIS                 TRISCbits.TRISC2
#define CS_EXT_LAT                  LATCbits.LATC2
#define CS_EXT_PORT                 PORTCbits.RC2
#define CS_EXT_WPU                  WPUCbits.WPUC2
#define CS_EXT_OD                   ODCONCbits.ODCC2
#define CS_EXT_ANS                  ANSELCbits.ANSELC2
#define CS_EXT_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define CS_EXT_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define CS_EXT_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define CS_EXT_GetValue()           PORTCbits.RC2
#define CS_EXT_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define CS_EXT_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define CS_EXT_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define CS_EXT_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define CS_EXT_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define CS_EXT_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define CS_EXT_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define CS_EXT_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set USBCFG aliases
#define USBCFG_TRIS                 TRISCbits.TRISC3
#define USBCFG_LAT                  LATCbits.LATC3
#define USBCFG_PORT                 PORTCbits.RC3
#define USBCFG_WPU                  WPUCbits.WPUC3
#define USBCFG_OD                   ODCONCbits.ODCC3
#define USBCFG_ANS                  ANSELCbits.ANSELC3
#define USBCFG_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define USBCFG_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define USBCFG_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define USBCFG_GetValue()           PORTCbits.RC3
#define USBCFG_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define USBCFG_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define USBCFG_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define USBCFG_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define USBCFG_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define USBCFG_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define USBCFG_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define USBCFG_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set CSCON aliases
#define CSCON_TRIS                 TRISCbits.TRISC4
#define CSCON_LAT                  LATCbits.LATC4
#define CSCON_PORT                 PORTCbits.RC4
#define CSCON_WPU                  WPUCbits.WPUC4
#define CSCON_OD                   ODCONCbits.ODCC4
#define CSCON_ANS                  ANSELCbits.ANSELC4
#define CSCON_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define CSCON_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define CSCON_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define CSCON_GetValue()           PORTCbits.RC4
#define CSCON_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define CSCON_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define CSCON_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define CSCON_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define CSCON_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define CSCON_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define CSCON_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define CSCON_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISCbits.TRISC5
#define D1_LAT                  LATCbits.LATC5
#define D1_PORT                 PORTCbits.RC5
#define D1_WPU                  WPUCbits.WPUC5
#define D1_OD                   ODCONCbits.ODCC5
#define D1_ANS                  ANSELCbits.ANSELC5
#define D1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define D1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define D1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define D1_GetValue()           PORTCbits.RC5
#define D1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define D1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define D1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define D1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define D1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define D1_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISCbits.TRISC6
#define D2_LAT                  LATCbits.LATC6
#define D2_PORT                 PORTCbits.RC6
#define D2_WPU                  WPUCbits.WPUC6
#define D2_OD                   ODCONCbits.ODCC6
#define D2_ANS                  ANSELCbits.ANSELC6
#define D2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define D2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define D2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define D2_GetValue()           PORTCbits.RC6
#define D2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define D2_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define D2_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISCbits.TRISC7
#define D3_LAT                  LATCbits.LATC7
#define D3_PORT                 PORTCbits.RC7
#define D3_WPU                  WPUCbits.WPUC7
#define D3_OD                   ODCONCbits.ODCC7
#define D3_ANS                  ANSELCbits.ANSELC7
#define D3_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define D3_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define D3_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define D3_GetValue()           PORTCbits.RC7
#define D3_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define D3_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define D3_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISDbits.TRISD0
#define D4_LAT                  LATDbits.LATD0
#define D4_PORT                 PORTDbits.RD0
#define D4_WPU                  WPUDbits.WPUD0
#define D4_OD                   ODCONDbits.ODCD0
#define D4_ANS                  ANSELDbits.ANSELD0
#define D4_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define D4_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define D4_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define D4_GetValue()           PORTDbits.RD0
#define D4_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define D4_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define D4_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set IP1 aliases
#define IP1_TRIS                 TRISDbits.TRISD1
#define IP1_LAT                  LATDbits.LATD1
#define IP1_PORT                 PORTDbits.RD1
#define IP1_WPU                  WPUDbits.WPUD1
#define IP1_OD                   ODCONDbits.ODCD1
#define IP1_ANS                  ANSELDbits.ANSELD1
#define IP1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IP1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IP1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IP1_GetValue()           PORTDbits.RD1
#define IP1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IP1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IP1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define IP1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define IP1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define IP1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define IP1_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define IP1_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set IP2 aliases
#define IP2_TRIS                 TRISDbits.TRISD2
#define IP2_LAT                  LATDbits.LATD2
#define IP2_PORT                 PORTDbits.RD2
#define IP2_WPU                  WPUDbits.WPUD2
#define IP2_OD                   ODCONDbits.ODCD2
#define IP2_ANS                  ANSELDbits.ANSELD2
#define IP2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IP2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IP2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IP2_GetValue()           PORTDbits.RD2
#define IP2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IP2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IP2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IP2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IP2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IP2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IP2_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define IP2_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set IP3 aliases
#define IP3_TRIS                 TRISDbits.TRISD3
#define IP3_LAT                  LATDbits.LATD3
#define IP3_PORT                 PORTDbits.RD3
#define IP3_WPU                  WPUDbits.WPUD3
#define IP3_OD                   ODCONDbits.ODCD3
#define IP3_ANS                  ANSELDbits.ANSELD3
#define IP3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IP3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IP3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IP3_GetValue()           PORTDbits.RD3
#define IP3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IP3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IP3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define IP3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define IP3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define IP3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define IP3_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define IP3_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set IP4 aliases
#define IP4_TRIS                 TRISDbits.TRISD4
#define IP4_LAT                  LATDbits.LATD4
#define IP4_PORT                 PORTDbits.RD4
#define IP4_WPU                  WPUDbits.WPUD4
#define IP4_OD                   ODCONDbits.ODCD4
#define IP4_ANS                  ANSELDbits.ANSELD4
#define IP4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IP4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IP4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IP4_GetValue()           PORTDbits.RD4
#define IP4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IP4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IP4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define IP4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define IP4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define IP4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define IP4_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define IP4_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set IP5 aliases
#define IP5_TRIS                 TRISDbits.TRISD5
#define IP5_LAT                  LATDbits.LATD5
#define IP5_PORT                 PORTDbits.RD5
#define IP5_WPU                  WPUDbits.WPUD5
#define IP5_OD                   ODCONDbits.ODCD5
#define IP5_ANS                  ANSELDbits.ANSELD5
#define IP5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IP5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IP5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IP5_GetValue()           PORTDbits.RD5
#define IP5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IP5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IP5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define IP5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define IP5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define IP5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define IP5_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define IP5_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set IP6 aliases
#define IP6_TRIS                 TRISDbits.TRISD6
#define IP6_LAT                  LATDbits.LATD6
#define IP6_PORT                 PORTDbits.RD6
#define IP6_WPU                  WPUDbits.WPUD6
#define IP6_OD                   ODCONDbits.ODCD6
#define IP6_ANS                  ANSELDbits.ANSELD6
#define IP6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IP6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IP6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IP6_GetValue()           PORTDbits.RD6
#define IP6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IP6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IP6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define IP6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define IP6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define IP6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define IP6_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define IP6_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set IP7 aliases
#define IP7_TRIS                 TRISDbits.TRISD7
#define IP7_LAT                  LATDbits.LATD7
#define IP7_PORT                 PORTDbits.RD7
#define IP7_WPU                  WPUDbits.WPUD7
#define IP7_OD                   ODCONDbits.ODCD7
#define IP7_ANS                  ANSELDbits.ANSELD7
#define IP7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IP7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IP7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IP7_GetValue()           PORTDbits.RD7
#define IP7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IP7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IP7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define IP7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define IP7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define IP7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define IP7_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define IP7_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set LED_0 aliases
#define LED_0_TRIS                 TRISEbits.TRISE0
#define LED_0_LAT                  LATEbits.LATE0
#define LED_0_PORT                 PORTEbits.RE0
#define LED_0_WPU                  WPUEbits.WPUE0
#define LED_0_OD                   ODCONEbits.ODCE0
#define LED_0_ANS                  ANSELEbits.ANSELE0
#define LED_0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED_0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED_0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED_0_GetValue()           PORTEbits.RE0
#define LED_0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED_0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED_0_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED_0_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED_0_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED_0_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED_0_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define LED_0_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set LED_1 aliases
#define LED_1_TRIS                 TRISEbits.TRISE1
#define LED_1_LAT                  LATEbits.LATE1
#define LED_1_PORT                 PORTEbits.RE1
#define LED_1_WPU                  WPUEbits.WPUE1
#define LED_1_OD                   ODCONEbits.ODCE1
#define LED_1_ANS                  ANSELEbits.ANSELE1
#define LED_1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define LED_1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define LED_1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define LED_1_GetValue()           PORTEbits.RE1
#define LED_1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define LED_1_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define LED_1_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define LED_1_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define LED_1_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define LED_1_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define LED_1_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set LED_2 aliases
#define LED_2_TRIS                 TRISEbits.TRISE2
#define LED_2_LAT                  LATEbits.LATE2
#define LED_2_PORT                 PORTEbits.RE2
#define LED_2_WPU                  WPUEbits.WPUE2
#define LED_2_OD                   ODCONEbits.ODCE2
#define LED_2_ANS                  ANSELEbits.ANSELE2
#define LED_2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LED_2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LED_2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LED_2_GetValue()           PORTEbits.RE2
#define LED_2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF1 pin functionality
 * @Example
    IOCAF1_ISR();
 */
void IOCAF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_InterruptHandler);

*/
extern void (*IOCAF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);

*/
void IOCAF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF3 pin functionality
 * @Example
    IOCAF3_ISR();
 */
void IOCAF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_InterruptHandler);

*/
extern void (*IOCAF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);

*/
void IOCAF3_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF0 pin functionality
 * @Example
    IOCCF0_ISR();
 */
void IOCCF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_InterruptHandler);

*/
extern void (*IOCCF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_DefaultInterruptHandler);

*/
void IOCCF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF3 pin functionality
 * @Example
    IOCCF3_ISR();
 */
void IOCCF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_InterruptHandler);

*/
extern void (*IOCCF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF3_SetInterruptHandler() method.
    This handler is called every time the IOCCF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);

*/
void IOCCF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/