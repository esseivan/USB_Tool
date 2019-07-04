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
#ifndef LEDBLINK_H
#define	LEDBLINK_H

#include "main.h"

void SetLed(int ledIndex, int Mode);
int GetLed(int ledIndex);
int ToggleLed(int ledIndex);
void SetLedBlink(int ledIndex, int OnTime, int OffTime, int StartAfter, int BlinkCount);
void SetLedBlinkMode(int ledIndex, int BlinkEnabled);
void TMR2_Custom_ISR(void);

// Time kept on
int R_OnTime = 0;
// Time kept off
int R_OffTime = 0;
// Is enabled
int R_Enabled = 0;
// internal counter, do not use
int R_Counter = 0;
// Start after specified delay
int R_StartAfter = 0;
// Number of blinks
int R_BlinkCount = 0;
// internal counter, do not use
int R_BlinkCounter = 0;
// Current state
int R_State = UNIDENTIFIED;

int G_OnTime = 0;
int G_OffTime = 0;
int G_Enabled = 0;
int G_Counter = 0;
int G_StartAfter = 0;
int G_BlinkCount = 0;
int G_BlinkCounter = 0;
int G_State = UNIDENTIFIED;

int B_OnTime = 0;
int B_OffTime = 0;
int B_Enabled = 0;
int B_Counter = 0;
int B_StartAfter = 0;
int B_BlinkCount = 0;
int B_BlinkCounter = 0;
int B_State = UNIDENTIFIED;

int RGB_R_OnTime = 0;
int RGB_R_OffTime = 0;
int RGB_R_Enabled = 0;
int RGB_R_Counter = 0;
int RGB_R_StartAfter = 0;
int RGB_R_BlinkCount = 0;
int RGB_R_BlinkCounter = 0;
int RGB_R_State = UNIDENTIFIED;

int RGB_G_OnTime = 0;
int RGB_G_OffTime = 0;
int RGB_G_Enabled = 0;
int RGB_G_Counter = 0;
int RGB_G_StartAfter = 0;
int RGB_G_BlinkCount = 0;
int RGB_G_BlinkCounter = 0;
int RGB_G_State = UNIDENTIFIED;

int RGB_B_OnTime = 0;
int RGB_B_OffTime = 0;
int RGB_B_Enabled = 0;
int RGB_B_Counter = 0;
int RGB_B_StartAfter = 0;
int RGB_B_BlinkCount = 0;
int RGB_B_BlinkCounter = 0;
int RGB_B_State = UNIDENTIFIED;

#endif	/* LEDBLINK_H */

