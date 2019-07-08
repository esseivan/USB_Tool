/*
 * File:   ext_rf_receiver.c
 * Author: Esseiva
 *
 * Created on July 3, 2019, 11:25 PM
 */


#include "mcc_generated_files/mcc.h"
#include "LedBlink.h"
#include "ext_rf_receiver.h"
#include "commands.h"
#include "MRF89XA.h"

void ext_rf_initialize(void) {
    EXT_TARGET_RF_RX = GetTarget(EXT_ADDR_RF_RX);
}

void ext_rf_runcmd(void) {
    // RF Receiver : Ask for data
    unsigned char dx = I2C_SendCommand(EXT_TARGET_RF_RX, CMD2_GET_DATA);
    if((dx & 0b0001) > 0)
        ToggleLed(RGB_R);
    else if ((dx & 0b0010) > 0)
        ToggleLed(RGB_G);
    else if ((dx & 0b0100) > 0)
        ToggleLed(RGB_B);
    else if ((dx & 0b1000) > 0)
    {
        // Indicate interrupt received with one Blue blink
        SetLedBlink(B,20,20,0,-1);
        MRF89XA_SendData(0x41, 0x55);
        // Indicate interrupt received with one Blue blink
        SetLedBlink(B,20,0,0,1);
    }
}
