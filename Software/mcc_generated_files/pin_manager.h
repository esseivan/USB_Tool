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

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA0
#define D2_LAT                  LATAbits.LATA0
#define D2_PORT                 PORTAbits.RA0
#define D2_WPU                  WPUAbits.WPUA0
#define D2_OD                   ODCONAbits.ODCA0
#define D2_ANS                  ANSELAbits.ANSELA0
#define D2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define D2_GetValue()           PORTAbits.RA0
#define D2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA1
#define D3_LAT                  LATAbits.LATA1
#define D3_PORT                 PORTAbits.RA1
#define D3_WPU                  WPUAbits.WPUA1
#define D3_OD                   ODCONAbits.ODCA1
#define D3_ANS                  ANSELAbits.ANSELA1
#define D3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D3_GetValue()           PORTAbits.RA1
#define D3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

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

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA3
#define D4_LAT                  LATAbits.LATA3
#define D4_PORT                 PORTAbits.RA3
#define D4_WPU                  WPUAbits.WPUA3
#define D4_OD                   ODCONAbits.ODCA3
#define D4_ANS                  ANSELAbits.ANSELA3
#define D4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define D4_GetValue()           PORTAbits.RA3
#define D4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA4
#define D5_LAT                  LATAbits.LATA4
#define D5_PORT                 PORTAbits.RA4
#define D5_WPU                  WPUAbits.WPUA4
#define D5_OD                   ODCONAbits.ODCA4
#define D5_ANS                  ANSELAbits.ANSELA4
#define D5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D5_GetValue()           PORTAbits.RA4
#define D5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define D5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define D5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSELA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 procedures
#define RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define RA6_GetValue()              PORTAbits.RA6
#define RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define RA6_SetPullup()             do { WPUAbits.WPUA6 = 1; } while(0)
#define RA6_ResetPullup()           do { WPUAbits.WPUA6 = 0; } while(0)
#define RA6_SetAnalogMode()         do { ANSELAbits.ANSELA6 = 1; } while(0)
#define RA6_SetDigitalMode()        do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 procedures
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()              PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()             do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()           do { WPUAbits.WPUA7 = 0; } while(0)
#define RA7_SetAnalogMode()         do { ANSELAbits.ANSELA7 = 1; } while(0)
#define RA7_SetDigitalMode()        do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISBbits.TRISB2
#define SCL_LAT                  LATBbits.LATB2
#define SCL_PORT                 PORTBbits.RB2
#define SCL_WPU                  WPUBbits.WPUB2
#define SCL_OD                   ODCONBbits.ODCB2
#define SCL_ANS                  ANSELBbits.ANSELB2
#define SCL_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SCL_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SCL_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SCL_GetValue()           PORTBbits.RB2
#define SCL_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SCL_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISBbits.TRISB3
#define SDA_LAT                  LATBbits.LATB3
#define SDA_PORT                 PORTBbits.RB3
#define SDA_WPU                  WPUBbits.WPUB3
#define SDA_OD                   ODCONBbits.ODCB3
#define SDA_ANS                  ANSELBbits.ANSELB3
#define SDA_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SDA_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SDA_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SDA_GetValue()           PORTBbits.RB3
#define SDA_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SDA_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set USBCFG aliases
#define USBCFG_TRIS                 TRISBbits.TRISB5
#define USBCFG_LAT                  LATBbits.LATB5
#define USBCFG_PORT                 PORTBbits.RB5
#define USBCFG_WPU                  WPUBbits.WPUB5
#define USBCFG_OD                   ODCONBbits.ODCB5
#define USBCFG_ANS                  ANSELBbits.ANSELB5
#define USBCFG_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define USBCFG_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define USBCFG_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define USBCFG_GetValue()           PORTBbits.RB5
#define USBCFG_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define USBCFG_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define USBCFG_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define USBCFG_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define USBCFG_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define USBCFG_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define USBCFG_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define USBCFG_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set ISCPCLK aliases
#define ISCPCLK_TRIS                 TRISBbits.TRISB6
#define ISCPCLK_LAT                  LATBbits.LATB6
#define ISCPCLK_PORT                 PORTBbits.RB6
#define ISCPCLK_WPU                  WPUBbits.WPUB6
#define ISCPCLK_OD                   ODCONBbits.ODCB6
#define ISCPCLK_ANS                  ANSELBbits.ANSELB6
#define ISCPCLK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ISCPCLK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ISCPCLK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ISCPCLK_GetValue()           PORTBbits.RB6
#define ISCPCLK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ISCPCLK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ISCPCLK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ISCPCLK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ISCPCLK_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define ISCPCLK_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define ISCPCLK_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define ISCPCLK_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

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

// get/set RESET_USB aliases
#define RESET_USB_TRIS                 TRISCbits.TRISC0
#define RESET_USB_LAT                  LATCbits.LATC0
#define RESET_USB_PORT                 PORTCbits.RC0
#define RESET_USB_WPU                  WPUCbits.WPUC0
#define RESET_USB_OD                   ODCONCbits.ODCC0
#define RESET_USB_ANS                  ANSELCbits.ANSELC0
#define RESET_USB_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RESET_USB_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RESET_USB_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RESET_USB_GetValue()           PORTCbits.RC0
#define RESET_USB_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RESET_USB_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RESET_USB_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define RESET_USB_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define RESET_USB_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define RESET_USB_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define RESET_USB_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RESET_USB_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RESET_RF aliases
#define RESET_RF_TRIS                 TRISCbits.TRISC1
#define RESET_RF_LAT                  LATCbits.LATC1
#define RESET_RF_PORT                 PORTCbits.RC1
#define RESET_RF_WPU                  WPUCbits.WPUC1
#define RESET_RF_OD                   ODCONCbits.ODCC1
#define RESET_RF_ANS                  ANSELCbits.ANSELC1
#define RESET_RF_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RESET_RF_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RESET_RF_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RESET_RF_GetValue()           PORTCbits.RC1
#define RESET_RF_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RESET_RF_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RESET_RF_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define RESET_RF_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define RESET_RF_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define RESET_RF_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define RESET_RF_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define RESET_RF_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set USB_IOC aliases
#define USB_IOC_TRIS                 TRISCbits.TRISC2
#define USB_IOC_LAT                  LATCbits.LATC2
#define USB_IOC_PORT                 PORTCbits.RC2
#define USB_IOC_WPU                  WPUCbits.WPUC2
#define USB_IOC_OD                   ODCONCbits.ODCC2
#define USB_IOC_ANS                  ANSELCbits.ANSELC2
#define USB_IOC_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define USB_IOC_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define USB_IOC_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define USB_IOC_GetValue()           PORTCbits.RC2
#define USB_IOC_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define USB_IOC_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define USB_IOC_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define USB_IOC_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define USB_IOC_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define USB_IOC_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define USB_IOC_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define USB_IOC_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set SSPND aliases
#define SSPND_TRIS                 TRISCbits.TRISC3
#define SSPND_LAT                  LATCbits.LATC3
#define SSPND_PORT                 PORTCbits.RC3
#define SSPND_WPU                  WPUCbits.WPUC3
#define SSPND_OD                   ODCONCbits.ODCC3
#define SSPND_ANS                  ANSELCbits.ANSELC3
#define SSPND_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SSPND_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SSPND_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SSPND_GetValue()           PORTCbits.RC3
#define SSPND_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SSPND_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SSPND_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SSPND_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SSPND_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SSPND_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SSPND_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SSPND_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set IRQ0 aliases
#define IRQ0_TRIS                 TRISCbits.TRISC4
#define IRQ0_LAT                  LATCbits.LATC4
#define IRQ0_PORT                 PORTCbits.RC4
#define IRQ0_WPU                  WPUCbits.WPUC4
#define IRQ0_OD                   ODCONCbits.ODCC4
#define IRQ0_ANS                  ANSELCbits.ANSELC4
#define IRQ0_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IRQ0_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IRQ0_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IRQ0_GetValue()           PORTCbits.RC4
#define IRQ0_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IRQ0_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IRQ0_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IRQ0_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IRQ0_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IRQ0_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IRQ0_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IRQ0_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set IRQ1 aliases
#define IRQ1_TRIS                 TRISCbits.TRISC5
#define IRQ1_LAT                  LATCbits.LATC5
#define IRQ1_PORT                 PORTCbits.RC5
#define IRQ1_WPU                  WPUCbits.WPUC5
#define IRQ1_OD                   ODCONCbits.ODCC5
#define IRQ1_ANS                  ANSELCbits.ANSELC5
#define IRQ1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IRQ1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IRQ1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IRQ1_GetValue()           PORTCbits.RC5
#define IRQ1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IRQ1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IRQ1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IRQ1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IRQ1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IRQ1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IRQ1_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IRQ1_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set D0 aliases
#define D0_TRIS                 TRISCbits.TRISC6
#define D0_LAT                  LATCbits.LATC6
#define D0_PORT                 PORTCbits.RC6
#define D0_WPU                  WPUCbits.WPUC6
#define D0_OD                   ODCONCbits.ODCC6
#define D0_ANS                  ANSELCbits.ANSELC6
#define D0_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define D0_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define D0_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define D0_GetValue()           PORTCbits.RC6
#define D0_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define D0_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define D0_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define D0_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define D0_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define D0_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define D0_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define D0_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISCbits.TRISC7
#define D1_LAT                  LATCbits.LATC7
#define D1_PORT                 PORTCbits.RC7
#define D1_WPU                  WPUCbits.WPUC7
#define D1_OD                   ODCONCbits.ODCC7
#define D1_ANS                  ANSELCbits.ANSELC7
#define D1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define D1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define D1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define D1_GetValue()           PORTCbits.RC7
#define D1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define D1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define D1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define D1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define D1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define D1_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS                 TRISDbits.TRISD0
#define SCK_LAT                  LATDbits.LATD0
#define SCK_PORT                 PORTDbits.RD0
#define SCK_WPU                  WPUDbits.WPUD0
#define SCK_OD                   ODCONDbits.ODCD0
#define SCK_ANS                  ANSELDbits.ANSELD0
#define SCK_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define SCK_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define SCK_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define SCK_GetValue()           PORTDbits.RD0
#define SCK_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define SCK_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define SCK_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set MISO aliases
#define MISO_TRIS                 TRISDbits.TRISD1
#define MISO_LAT                  LATDbits.LATD1
#define MISO_PORT                 PORTDbits.RD1
#define MISO_WPU                  WPUDbits.WPUD1
#define MISO_OD                   ODCONDbits.ODCD1
#define MISO_ANS                  ANSELDbits.ANSELD1
#define MISO_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define MISO_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define MISO_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define MISO_GetValue()           PORTDbits.RD1
#define MISO_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define MISO_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define MISO_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define MISO_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define MISO_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define MISO_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define MISO_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define MISO_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set MOSI aliases
#define MOSI_TRIS                 TRISDbits.TRISD2
#define MOSI_LAT                  LATDbits.LATD2
#define MOSI_PORT                 PORTDbits.RD2
#define MOSI_WPU                  WPUDbits.WPUD2
#define MOSI_OD                   ODCONDbits.ODCD2
#define MOSI_ANS                  ANSELDbits.ANSELD2
#define MOSI_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define MOSI_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define MOSI_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define MOSI_GetValue()           PORTDbits.RD2
#define MOSI_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define MOSI_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define MOSI_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define MOSI_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define MOSI_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define MOSI_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define MOSI_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define MOSI_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set CSDAT aliases
#define CSDAT_TRIS                 TRISDbits.TRISD3
#define CSDAT_LAT                  LATDbits.LATD3
#define CSDAT_PORT                 PORTDbits.RD3
#define CSDAT_WPU                  WPUDbits.WPUD3
#define CSDAT_OD                   ODCONDbits.ODCD3
#define CSDAT_ANS                  ANSELDbits.ANSELD3
#define CSDAT_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define CSDAT_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define CSDAT_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define CSDAT_GetValue()           PORTDbits.RD3
#define CSDAT_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define CSDAT_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define CSDAT_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define CSDAT_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define CSDAT_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define CSDAT_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define CSDAT_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define CSDAT_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set CSCON aliases
#define CSCON_TRIS                 TRISDbits.TRISD4
#define CSCON_LAT                  LATDbits.LATD4
#define CSCON_PORT                 PORTDbits.RD4
#define CSCON_WPU                  WPUDbits.WPUD4
#define CSCON_OD                   ODCONDbits.ODCD4
#define CSCON_ANS                  ANSELDbits.ANSELD4
#define CSCON_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define CSCON_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define CSCON_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define CSCON_GetValue()           PORTDbits.RD4
#define CSCON_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define CSCON_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define CSCON_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define CSCON_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define CSCON_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define CSCON_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define CSCON_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define CSCON_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set LED0 aliases
#define LED0_TRIS                 TRISDbits.TRISD5
#define LED0_LAT                  LATDbits.LATD5
#define LED0_PORT                 PORTDbits.RD5
#define LED0_WPU                  WPUDbits.WPUD5
#define LED0_OD                   ODCONDbits.ODCD5
#define LED0_ANS                  ANSELDbits.ANSELD5
#define LED0_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LED0_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LED0_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LED0_GetValue()           PORTDbits.RD5
#define LED0_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LED0_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISDbits.TRISD6
#define LED1_LAT                  LATDbits.LATD6
#define LED1_PORT                 PORTDbits.RD6
#define LED1_WPU                  WPUDbits.WPUD6
#define LED1_OD                   ODCONDbits.ODCD6
#define LED1_ANS                  ANSELDbits.ANSELD6
#define LED1_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED1_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED1_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED1_GetValue()           PORTDbits.RD6
#define LED1_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LED1_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISDbits.TRISD7
#define LED2_LAT                  LATDbits.LATD7
#define LED2_PORT                 PORTDbits.RD7
#define LED2_WPU                  WPUDbits.WPUD7
#define LED2_OD                   ODCONDbits.ODCD7
#define LED2_ANS                  ANSELDbits.ANSELD7
#define LED2_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED2_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED2_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED2_GetValue()           PORTDbits.RD7
#define LED2_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LED2_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set LEDRGB_B aliases
#define LEDRGB_B_TRIS                 TRISEbits.TRISE0
#define LEDRGB_B_LAT                  LATEbits.LATE0
#define LEDRGB_B_PORT                 PORTEbits.RE0
#define LEDRGB_B_WPU                  WPUEbits.WPUE0
#define LEDRGB_B_OD                   ODCONEbits.ODCE0
#define LEDRGB_B_ANS                  ANSELEbits.ANSELE0
#define LEDRGB_B_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LEDRGB_B_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LEDRGB_B_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LEDRGB_B_GetValue()           PORTEbits.RE0
#define LEDRGB_B_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LEDRGB_B_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LEDRGB_B_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LEDRGB_B_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LEDRGB_B_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LEDRGB_B_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LEDRGB_B_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define LEDRGB_B_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set LEDRGB_G aliases
#define LEDRGB_G_TRIS                 TRISEbits.TRISE1
#define LEDRGB_G_LAT                  LATEbits.LATE1
#define LEDRGB_G_PORT                 PORTEbits.RE1
#define LEDRGB_G_WPU                  WPUEbits.WPUE1
#define LEDRGB_G_OD                   ODCONEbits.ODCE1
#define LEDRGB_G_ANS                  ANSELEbits.ANSELE1
#define LEDRGB_G_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define LEDRGB_G_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define LEDRGB_G_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define LEDRGB_G_GetValue()           PORTEbits.RE1
#define LEDRGB_G_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define LEDRGB_G_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define LEDRGB_G_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define LEDRGB_G_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define LEDRGB_G_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define LEDRGB_G_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define LEDRGB_G_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define LEDRGB_G_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set LEDRGB_R aliases
#define LEDRGB_R_TRIS                 TRISEbits.TRISE2
#define LEDRGB_R_LAT                  LATEbits.LATE2
#define LEDRGB_R_PORT                 PORTEbits.RE2
#define LEDRGB_R_WPU                  WPUEbits.WPUE2
#define LEDRGB_R_OD                   ODCONEbits.ODCE2
#define LEDRGB_R_ANS                  ANSELEbits.ANSELE2
#define LEDRGB_R_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LEDRGB_R_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LEDRGB_R_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LEDRGB_R_GetValue()           PORTEbits.RE2
#define LEDRGB_R_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LEDRGB_R_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LEDRGB_R_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LEDRGB_R_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LEDRGB_R_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LEDRGB_R_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LEDRGB_R_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define LEDRGB_R_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


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
    Interrupt on Change Handler for the IOCBF5 pin functionality
 * @Example
    IOCBF5_ISR();
 */
void IOCBF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_InterruptHandler);

*/
extern void (*IOCBF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);

*/
void IOCBF5_DefaultInterruptHandler(void);


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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF4 pin functionality
 * @Example
    IOCCF4_ISR();
 */
void IOCCF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_InterruptHandler);

*/
extern void (*IOCCF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_DefaultInterruptHandler);

*/
void IOCCF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF5 pin functionality
 * @Example
    IOCCF5_ISR();
 */
void IOCCF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF5_SetInterruptHandler() method.
    This handler is called every time the IOCCF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(IOCCF5_InterruptHandler);

*/
extern void (*IOCCF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF5_SetInterruptHandler() method.
    This handler is called every time the IOCCF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(IOCCF5_DefaultInterruptHandler);

*/
void IOCCF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF6 pin functionality
 * @Example
    IOCCF6_ISR();
 */
void IOCCF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF6_SetInterruptHandler() method.
    This handler is called every time the IOCCF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(IOCCF6_InterruptHandler);

*/
extern void (*IOCCF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF6_SetInterruptHandler() method.
    This handler is called every time the IOCCF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF6_SetInterruptHandler(IOCCF6_DefaultInterruptHandler);

*/
void IOCCF6_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF7 pin functionality
 * @Example
    IOCCF7_ISR();
 */
void IOCCF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_InterruptHandler);

*/
extern void (*IOCCF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF7_SetInterruptHandler() method.
    This handler is called every time the IOCCF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF7_SetInterruptHandler(IOCCF7_DefaultInterruptHandler);

*/
void IOCCF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/