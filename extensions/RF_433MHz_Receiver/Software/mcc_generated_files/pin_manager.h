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
        Device            :  PIC16F15323
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

// get/set ICSPDAT aliases
#define ICSPDAT_TRIS                 TRISAbits.TRISA0
#define ICSPDAT_LAT                  LATAbits.LATA0
#define ICSPDAT_PORT                 PORTAbits.RA0
#define ICSPDAT_WPU                  WPUAbits.WPUA0
#define ICSPDAT_OD                   ODCONAbits.ODCA0
#define ICSPDAT_ANS                  ANSELAbits.ANSA0
#define ICSPDAT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ICSPDAT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ICSPDAT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ICSPDAT_GetValue()           PORTAbits.RA0
#define ICSPDAT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ICSPDAT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ICSPDAT_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define ICSPDAT_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define ICSPDAT_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define ICSPDAT_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define ICSPDAT_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define ICSPDAT_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ICSPCLK aliases
#define ICSPCLK_TRIS                 TRISAbits.TRISA1
#define ICSPCLK_LAT                  LATAbits.LATA1
#define ICSPCLK_PORT                 PORTAbits.RA1
#define ICSPCLK_WPU                  WPUAbits.WPUA1
#define ICSPCLK_OD                   ODCONAbits.ODCA1
#define ICSPCLK_ANS                  ANSELAbits.ANSA1
#define ICSPCLK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ICSPCLK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ICSPCLK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ICSPCLK_GetValue()           PORTAbits.RA1
#define ICSPCLK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ICSPCLK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ICSPCLK_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define ICSPCLK_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define ICSPCLK_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define ICSPCLK_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define ICSPCLK_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define ICSPCLK_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set VT aliases
#define VT_TRIS                 TRISAbits.TRISA2
#define VT_LAT                  LATAbits.LATA2
#define VT_PORT                 PORTAbits.RA2
#define VT_WPU                  WPUAbits.WPUA2
#define VT_OD                   ODCONAbits.ODCA2
#define VT_ANS                  ANSELAbits.ANSA2
#define VT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define VT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define VT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define VT_GetValue()           PORTAbits.RA2
#define VT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define VT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define VT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define VT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define VT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define VT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define VT_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define VT_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA4
#define D2_LAT                  LATAbits.LATA4
#define D2_PORT                 PORTAbits.RA4
#define D2_WPU                  WPUAbits.WPUA4
#define D2_OD                   ODCONAbits.ODCA4
#define D2_ANS                  ANSELAbits.ANSA4
#define D2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D2_GetValue()           PORTAbits.RA4
#define D2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA5
#define D3_LAT                  LATAbits.LATA5
#define D3_PORT                 PORTAbits.RA5
#define D3_WPU                  WPUAbits.WPUA5
#define D3_OD                   ODCONAbits.ODCA5
#define D3_ANS                  ANSELAbits.ANSA5
#define D3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define D3_GetValue()           PORTAbits.RA5
#define D3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISCbits.TRISC0
#define SCL_LAT                  LATCbits.LATC0
#define SCL_PORT                 PORTCbits.RC0
#define SCL_WPU                  WPUCbits.WPUC0
#define SCL_OD                   ODCONCbits.ODCC0
#define SCL_ANS                  ANSELCbits.ANSC0
#define SCL_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCL_GetValue()           PORTCbits.RC0
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCL_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISCbits.TRISC1
#define SDA_LAT                  LATCbits.LATC1
#define SDA_PORT                 PORTCbits.RC1
#define SDA_WPU                  WPUCbits.WPUC1
#define SDA_OD                   ODCONCbits.ODCC1
#define SDA_ANS                  ANSELCbits.ANSC1
#define SDA_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDA_GetValue()           PORTCbits.RC1
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDA_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set INT0 aliases
#define INT0_TRIS                 TRISCbits.TRISC2
#define INT0_LAT                  LATCbits.LATC2
#define INT0_PORT                 PORTCbits.RC2
#define INT0_WPU                  WPUCbits.WPUC2
#define INT0_OD                   ODCONCbits.ODCC2
#define INT0_ANS                  ANSELCbits.ANSC2
#define INT0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define INT0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define INT0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define INT0_GetValue()           PORTCbits.RC2
#define INT0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define INT0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define INT0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define INT0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define INT0_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define INT0_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define INT0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define INT0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISCbits.TRISC3
#define LED_LAT                  LATCbits.LATC3
#define LED_PORT                 PORTCbits.RC3
#define LED_WPU                  WPUCbits.WPUC3
#define LED_OD                   ODCONCbits.ODCC3
#define LED_ANS                  ANSELCbits.ANSC3
#define LED_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_GetValue()           PORTCbits.RC3
#define LED_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set D0 aliases
#define D0_TRIS                 TRISCbits.TRISC4
#define D0_LAT                  LATCbits.LATC4
#define D0_PORT                 PORTCbits.RC4
#define D0_WPU                  WPUCbits.WPUC4
#define D0_OD                   ODCONCbits.ODCC4
#define D0_ANS                  ANSELCbits.ANSC4
#define D0_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define D0_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define D0_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define D0_GetValue()           PORTCbits.RC4
#define D0_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define D0_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define D0_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define D0_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define D0_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define D0_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define D0_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define D0_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISCbits.TRISC5
#define D1_LAT                  LATCbits.LATC5
#define D1_PORT                 PORTCbits.RC5
#define D1_WPU                  WPUCbits.WPUC5
#define D1_OD                   ODCONCbits.ODCC5
#define D1_ANS                  ANSELCbits.ANSC5
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
#define D1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/