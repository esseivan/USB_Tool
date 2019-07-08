/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef COMMANDS_H
#define	COMMANDS_H

/*************************************
 * USB COMMANDS
 *************************************/

// ***** cmds general
// Shutdown USB module
#define CMD_USB_SHUTDOWN 0x05
// Shutdown RF module
#define CMD_RF_SHUTDOWN 0X06

// ***** RF (SPI)
// Bridge SPI <-> Uart
#define CMD_RF_ENABLE_BRIDGE 0xA0
// Send on SPI
#define CMD_RF_SEND 0xA1
// Transmit buffer received (if any)
#define CMD_RF_RECEIVE 0xA2
// Return the number of bytes in the buffer
#define CMD_RF_RECEIVE_COUTN 0xA3
// Enable/disable receive interrupt
#define CMD_RF_RECEIVE_INTERRUPT_ENABLE 0xA4
#define CMD_RF_RECEIVE_INTERRUPT_DISABLE 0xA5

// ***** Extensions (I2C)
// Bridge I2C <-> Uart
#define CMD_EXT_ENABLE_BRIDGE 0xB0
// Send on I2C
#define CMD_EXT_SEND 0xB1
// Transmit buffer received (if any)
#define CMD_EXT_RECEIVE 0xB2
// Return the number of bytes in the buffer
#define CMD_EXT_RECEIVE_COUTN 0xB3
// Enable/disable receive interrupt
#define CMD_EXT_RECEIVE_INTERRUPT_ENABLE 0xB4
#define CMD_EXT_RECEIVE_INTERRUPT_DISABLE 0xB5

// ***** cmds gpio
// Mode in,out
#define CMD_SET_PIN_MODE 0x10
#define CMD_GET_PIN_MODE 0x11
// Value 0,1
#define CMD_SET_PIN_VALUE 0x12
#define CMD_GET_PIN_VALUE 0x13
// OD off,on
#define CMD_SET_PIN_OD 0x14
#define CMD_GET_PIN_OD 0x15
// DAC ref 1.024V, 2.048V, 4.096V
#define CMD_SET_PIN_DAC_REF 0x16
#define CMD_GET_PIN_DAC_REF 0x17
// DAC out xV
#define CMD_SET_PIN_DAC_OUT 0x18
#define CMD_GET_PIN_DAC_OUT 0x19
// CLKR Duty Cycle 0, 25, 50, 75
#define CMD_SET_PIN_CLKR_DC 0x1A
#define CMD_GET_PIN_CLKR_DC 0x1B
// CLKR Divider : 2 pow 0,1,2,3,4,5,6,7
#define CMD_SET_PIN_CLKR_DIV 0x1C
#define CMD_GET_PIN_CLKR_DIV 0x1D
// ***** params
#define PARAM_PIN_MODE_OUT 0x00
#define PARAM_PIN_MODE_IN 0x01
#define PARAM_PIN_VALUE_LOW 0x00
#define PARAM_PIN_VALUE_HIGH 0x01
#define PARAM_PIN_OD_INACTIVE 0x00
#define PARAM_PIN_OD_ACTIVE 0x01
#define PARAM_PIN_DAC_REF_OFF 0x00
#define PARAM_PIN_DAC_REF_1024 0x01
#define PARAM_PIN_DAC_REF_2048 0x02
#define PARAM_PIN_DAC_REF_4096 0x03
#define PARAM_PIN_CLKR_DC_0 0x00
#define PARAM_PIN_CLKR_DC_25 0x01
#define PARAM_PIN_CLKR_DC_50 0x02
#define PARAM_PIN_CLKR_DC_75 0x03
#define PARAM_PIN_CLKR_DIV_1 0x00
#define PARAM_PIN_CLKR_DIV_2 0x01
#define PARAM_PIN_CLKR_DIV_4 0x02
#define PARAM_PIN_CLKR_DIV_8 0x03
#define PARAM_PIN_CLKR_DIV_16 0x04
#define PARAM_PIN_CLKR_DIV_32 0x05
#define PARAM_PIN_CLKR_DIV_64 0x06
#define PARAM_PIN_CLKR_DIV_128 0x07

// ***** cmds leds
// LED mode off, on, blink
#define CMD_SET_LED_MODE 0x20
#define CMD_GET_LED_MODE 0x21
// LED ontime x * 10ms
#define CMD_SET_LED_ONTIME 0x22
#define CMD_GET_LED_ONTIME 0x23
// LED offtime x * 10ms
#define CMD_SET_LED_OFFTIME 0x24
#define CMD_GET_LED_OFFTIME 0x25
// LED start after delay x * 10ms
#define CMD_SET_LED_STARTAFTER 0x26
#define CMD_GET_LED_STARTAFTER 0x27
// ***** params
#define PARAM_LED_MODE_OFF 0x00
#define PARAM_LED_MODE_ON 0x01
#define PARAM_LED_MODE_BLINK 0x02

#endif	/* COMMANDS_H */

