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

void ext_rf_initialize(void) {
    EXT_TARGET_RF_RX = GetTarget(EXT_ADDR_RF_RX);
}

void ext_rf_runcmd(void) {
    ToggleLed(B);
    // RF Receiver : Ask for data
    unsigned char dx = I2C_SendCommand(EXT_TARGET_RF_RX, CMD2_GET_DATA);
    if(dx & 0b0001 > 0)
        LEDRGB_R_SetLow();
    else if (dx & 0b0010 > 0)
        LEDRGB_G_SetLow();
    else if (dx & 0b0100 > 0)
        LEDRGB_B_SetLow();
    else if (dx & 0b1000 > 0)
        LED_R_SetLow();
}
