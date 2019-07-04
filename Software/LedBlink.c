/*
 * File:   LedBlink.c
 * Author: Esseiva
 *
 * Created on July 2, 2019, 1:12 AM
 */

#include "LedBlink.h"
#include "mcc_generated_files/mcc.h"

void SetLed(int ledIndex, int Mode) {
    int mode2 = 1;
    if(Mode == ON)
        mode2 = 0;
    
    if (ledIndex == R) {
        LED_R_LAT = mode2;
    } else if (ledIndex == G) {
        LED_G_LAT = mode2;
    } else if (ledIndex == B) {
        LED_B_LAT = mode2;
    } else if (ledIndex == RGB_R) {
        LEDRGB_R_LAT = mode2;
    } else if (ledIndex == RGB_G) {
        LEDRGB_G_LAT = mode2;
    } else if (ledIndex == RGB_B) {
        LEDRGB_B_LAT = mode2;
    }
}

int GetLed(int ledIndex) {
    if (ledIndex == R) {
        return LED_R_LAT;
    } else if (ledIndex == G) {
        return LED_G_LAT;
    } else if (ledIndex == B) {
        return LED_B_LAT;
    } else if (ledIndex == RGB_R) {
        return LEDRGB_R_LAT;
    } else if (ledIndex == RGB_G) {
        return LEDRGB_G_LAT;
    } else if (ledIndex == RGB_B) {
        return LEDRGB_B_LAT;
    }
}

int ToggleLed(int ledIndex) {
    if (ledIndex == R) {
        LED_R_LAT = !LED_R_LAT;
    } else if (ledIndex == G) {
        LED_G_LAT = !LED_G_LAT;
    } else if (ledIndex == B) {
        LED_B_LAT = !LED_B_LAT;
    } else if (ledIndex == RGB_R) {
        LEDRGB_R_LAT = !LEDRGB_R_LAT;
    } else if (ledIndex == RGB_G) {
        LEDRGB_G_LAT = !LEDRGB_G_LAT;
    } else if (ledIndex == RGB_B) {
        LEDRGB_B_LAT = !LEDRGB_B_LAT;
    }
}

// OnTime and OffTime is times 10ms
void SetLedBlink(int ledIndex, int OnTime, int OffTime, int StartAfter, int BlinkCount) {
    if (ledIndex == R) {
        R_OnTime = OnTime;
        R_OffTime = OffTime;
        R_StartAfter = StartAfter;
        R_Enabled = ON;
        R_BlinkCount = BlinkCount;
        R_BlinkCounter = BlinkCount;
        R_Counter = 0;
        R_State = UNIDENTIFIED;
    } else if (ledIndex == G) {
        G_OnTime = OnTime;
        G_OffTime = OffTime;
        G_StartAfter = StartAfter;
        G_Enabled = ON;
        G_BlinkCount = BlinkCount;
        G_BlinkCounter = BlinkCount;
        G_Counter = 0;
        G_State = UNIDENTIFIED;
    } else if (ledIndex == B) {
        B_OnTime = OnTime;
        B_OffTime = OffTime;
        B_StartAfter = StartAfter;
        B_Enabled = ON;
        B_BlinkCount = BlinkCount;
        B_BlinkCounter = BlinkCount;
        B_Counter = 0;
        B_State = UNIDENTIFIED;
    } else if (ledIndex == RGB_R) {
        RGB_R_OnTime = OnTime;
        RGB_R_OffTime = OffTime;
        RGB_R_StartAfter = StartAfter;
        RGB_R_Enabled = ON;
        RGB_R_BlinkCount = BlinkCount;
        RGB_R_BlinkCounter = BlinkCount;
        RGB_R_Counter = 0;
        RGB_R_State = UNIDENTIFIED;
    } else if (ledIndex == RGB_G) {
        RGB_G_OnTime = OnTime;
        RGB_G_OffTime = OffTime;
        RGB_G_StartAfter = StartAfter;
        RGB_G_Enabled = ON;
        RGB_G_BlinkCount = BlinkCount;
        RGB_G_BlinkCounter = BlinkCount;
        RGB_G_Counter = 0;
        RGB_G_State = UNIDENTIFIED;
    } else if (ledIndex == RGB_B) {
        RGB_B_OnTime = OnTime;
        RGB_B_OffTime = OffTime;
        RGB_B_StartAfter = StartAfter;
        RGB_B_Enabled = ON;
        RGB_B_BlinkCount = BlinkCount;
        RGB_B_BlinkCounter = BlinkCount;
        RGB_B_Counter = 0;
        RGB_B_State = UNIDENTIFIED;
    }
}

void SetLedBlinkMode(int ledIndex, int BlinkEnabled) {
    if (ledIndex == R) {
        R_Enabled = BlinkEnabled;
        R_Counter = 0;
        R_BlinkCounter = R_BlinkCount;
        R_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(R,OFF);
        }
    } else if (ledIndex == G) {
        G_Enabled = BlinkEnabled;
        G_Counter = 0;
        G_BlinkCounter = G_BlinkCount;
        G_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(G,OFF);
        }
    } else if (ledIndex == B) {
        B_Enabled = BlinkEnabled;
        B_Counter = 0;
        B_BlinkCounter = B_BlinkCount;
        B_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(B,OFF);
        }
    } else if (ledIndex == RGB_R) {
        RGB_R_Enabled = BlinkEnabled;
        RGB_R_Counter = 0;
        RGB_R_BlinkCounter = RGB_R_BlinkCount;
        RGB_R_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(RGB_R,OFF);
        }
    } else if (ledIndex == RGB_G) {
        RGB_G_Enabled = BlinkEnabled;
        RGB_G_Counter = 0;
        RGB_G_BlinkCounter = RGB_G_BlinkCount;
        RGB_G_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(RGB_G,OFF);
        }
    } else if (ledIndex == RGB_B) {
        RGB_B_Enabled = BlinkEnabled;
        RGB_B_Counter = 0;
        RGB_B_BlinkCounter = RGB_B_BlinkCount;
        RGB_B_State = UNIDENTIFIED;
        if(BlinkEnabled == OFF) {
            SetLed(RGB_B,OFF);
        }
    }
}

void TMR2_Custom_ISR(void) {
    // Led R
    if(R_Enabled == ON) {
        if(R_StartAfter == 0)
        {
            R_Counter++;
            if(R_State == UNIDENTIFIED)
            {
                R_State = ON;
                SetLed(R,ON);
                R_Counter = 0;
            }
            else if(R_State == OFF && R_Counter == R_OffTime)
            {
                // Set ON
                SetLed(R, ON);
                R_Counter = 0;
                R_State = ON;
            }
            else if (R_State == ON && R_Counter == R_OnTime)
            {
                // Set Off
                SetLed(R, OFF);
                R_Counter = 0;
                R_State = OFF;
                if(R_BlinkCount != -1)
                {
                    if(--R_BlinkCounter == 0)
                    {
                        R_Enabled = OFF;
                    }
                }
            }
        } else
            R_StartAfter--;
    }
    // Led G
    if(G_Enabled == ON) {
        if(G_StartAfter == 0)
        {
            G_Counter++;
            if(G_State == UNIDENTIFIED)
            {
                G_State = ON;
                SetLed(G,ON);
                G_Counter = 0;
            }
            else if(G_State == OFF && G_Counter == G_OffTime)
            {
                // Set ON
                SetLed(G, ON);
                G_Counter = 0;
                G_State = ON;
            }
            else if (G_State == ON && G_Counter == G_OnTime)
            {
                // Set Off
                SetLed(G, OFF);
                G_Counter = 0;
                G_State = OFF;
                if(G_BlinkCount != -1)
                {
                    if(--G_BlinkCounter == 0)
                    {
                        G_Enabled = OFF;
                    }
                }
            }
        } else
            G_StartAfter--;
    }
    // Led B
    if(B_Enabled == ON) {
        if(B_StartAfter == 0)
        {
            B_Counter++;
            if(B_State == UNIDENTIFIED)
            {
                B_State = ON;
                SetLed(B,ON);
                B_Counter = 0;
            }
            else if(B_State == OFF && B_Counter == B_OffTime)
            {
                // Set ON
                SetLed(B, ON);
                B_Counter = 0;
                B_State = ON;
            }
            else if (B_State == ON && B_Counter == B_OnTime)
            {
                // Set Off
                SetLed(B, OFF);
                B_Counter = 0;
                B_State = OFF;
                if(B_BlinkCount != -1)
                {
                    if(--B_BlinkCounter == 0)
                    {
                        B_Enabled = OFF;
                    }
                }
            }
        } else
            B_StartAfter--;
    }
    // Led RGB_R
    if(RGB_R_Enabled == ON) {
        if(RGB_R_StartAfter == 0)
        {
            RGB_R_Counter++;
            if(RGB_R_State == UNIDENTIFIED)
            {
                RGB_R_State = ON;
                SetLed(RGB_R,ON);
                RGB_R_Counter = 0;
            }
            else if(RGB_R_State == OFF && RGB_R_Counter == RGB_R_OffTime)
            {
                // Set ON
                SetLed(RGB_R, ON);
                RGB_R_Counter = 0;
                RGB_R_State = ON;
            }
            else if (RGB_R_State == ON && RGB_R_Counter == RGB_R_OnTime)
            {
                // Set Off
                SetLed(RGB_R, OFF);
                RGB_R_Counter = 0;
                RGB_R_State = OFF;
                if(RGB_R_BlinkCount != -1)
                {
                    if(--RGB_R_BlinkCounter == 0)
                    {
                        RGB_R_Enabled = OFF;
                    }
                }
            }
        } else
            RGB_R_StartAfter--;
    }
    // Led RGB_G
    if(RGB_G_Enabled == ON) {
        if(RGB_G_StartAfter == 0)
        {
            RGB_G_Counter++;
            if(RGB_G_State == UNIDENTIFIED)
            {
                RGB_G_State = ON;
                SetLed(RGB_G,ON);
                RGB_G_Counter = 0;
            }
            else if(RGB_G_State == OFF && RGB_G_Counter == RGB_G_OffTime)
            {
                // Set ON
                SetLed(RGB_G, ON);
                RGB_G_Counter = 0;
                RGB_G_State = ON;
            }
            else if (RGB_G_State == ON && RGB_G_Counter == RGB_G_OnTime)
            {
                // Set Off
                SetLed(RGB_G, OFF);
                RGB_G_Counter = 0;
                RGB_G_State = OFF;
                if(RGB_G_BlinkCount != -1)
                {
                    if(--RGB_G_BlinkCounter == 0)
                    {
                        RGB_G_Enabled = OFF;
                    }
                }
            }
        } else
            RGB_G_StartAfter--;
    }
    // Led RGB_B
    if(RGB_B_Enabled == ON) {
        if(RGB_B_StartAfter == 0)
        {
            RGB_B_Counter++;
            if(RGB_B_State == UNIDENTIFIED)
            {
                RGB_B_State = ON;
                SetLed(RGB_B,ON);
                RGB_B_Counter = 0;
            }
            else if(RGB_B_State == OFF && RGB_B_Counter == RGB_B_OffTime)
            {
                // Set ON
                SetLed(RGB_B, ON);
                RGB_B_Counter = 0;
                RGB_B_State = ON;
            }
            else if (RGB_B_State == ON && RGB_B_Counter == RGB_B_OnTime)
            {
                // Set Off
                SetLed(RGB_B, OFF);
                RGB_B_Counter = 0;
                RGB_B_State = OFF;
                if(RGB_B_BlinkCount != -1)
                {
                    if(--RGB_B_BlinkCounter == 0)
                    {
                        RGB_B_Enabled = OFF;
                    }
                }
            }
        } else
            RGB_B_StartAfter--;
    }
}



