/*
 * File:   MRF89XA.c
 * Author: Esseiva
 *
 * Created on July 5, 2019, 5:15 PM
 */

#include "mcc_generated_files/mcc.h"
#include "MRF89XA.h"
#include "main.h"

unsigned char MRF89XA_ExchangeConfig(unsigned char Data);
unsigned char MRF89XA_ExchangeConfig_A(unsigned char Address, unsigned char Data);
unsigned char MRF89XA_GetAddress(unsigned char Address, unsigned char Read);
unsigned char MRF89XA_SPI_ExchangeByte(unsigned char byte);
void MRF89XA_SetIndicationLed(unsigned char State);

void MRF89XA_Initialize(unsigned char Address, unsigned char Mode, unsigned char Modulation) {
    MRF89XA_SetMode(Mode);
    
    MRF89XA_SetModulation(Modulation);
    
    MRF89XA_WriteConfig(REG_FDEVREG,REG_FDEVREG_VALUE);
    MRF89XA_WriteConfig(REG_BRSREG,REG_BRSREG_VALUE);
    
    MRF89XA_WriteConfig(REG_FLTHREG, REG_FLTHREG_VALUE);
    MRF89XA_WriteConfig(REG_FIFOCREG, REG_FIFOCREG_VALUE);
    MRF89XA_WriteConfig(REG_FTXRXIREG,REG_FTXRXIREG_VALUE);
    MRF89XA_WriteConfig(REG_FTPRIREG, REG_FTPRIREG_VALUE);
    
    MRF89XA_WriteConfig(REG_R1CREG, REG_R1CREG_VALUE);
    MRF89XA_WriteConfig(REG_P1CREG, REG_P1CREG_VALUE);
    MRF89XA_WriteConfig(REG_S1CREG, REG_S1CREG_VALUE);
    
    MRF89XA_WriteConfig(REG_PACREG, REG_PACREG_VALUE);
    MRF89XA_WriteConfig(REG_FILCREG, REG_FILCREG_VALUE);
    MRF89XA_WriteConfig(REG_PFCREG, REG_PFCREG_VALUE);
    
    MRF89XA_WriteConfig(REG_SYNCREG,REG_SYNCREG_VALUE);
    MRF89XA_WriteConfig(REG_SYNCV07REG,REG_SYNCV07REG_VALUE);
    MRF89XA_WriteConfig(REG_SYNCV15REG,REG_SYNCV15REG_VALUE);
    
    MRF89XA_WriteConfig(REG_OOKCREG, REG_OOKCREG_VALUE);
    MRF89XA_WriteConfig(REG_TXCONREG,REG_TXCONREG_VALUE);
    
    MRF89XA_WriteConfig(REG_CLKOUTREG,REG_CLKOUTREG_VALUE);
    MRF89XA_WriteConfig(REG_PLOADREG,REG_PLOADREG_VALUE);
    MRF89XA_WriteConfig(REG_NADDSREG,Address);
    MRF89XA_WriteConfig(REG_PKTCREG,REG_PKTCREG_VALUE);
    MRF89XA_WriteConfig(REG_FCRCREG,REG_FCRCREG_VALUE);
}

void MRF89XA_SetMode(unsigned char Mode) {
    unsigned char mask = 0x00;
    if(Mode == MRF89XA_MODE_TX)
        mask = REG_GCONREG_MASK_TX;
    else if(Mode == MRF89XA_MODE_RX)
        mask = REG_GCONREG_MASK_RX;
    else if(Mode == MRF89XA_MODE_STANDBY)
        mask = REG_GCONREG_MASK_STDBY;
    else
        mask = REG_GCONREG_MASK_SLEEP;
                
    MRF89XA_WriteConfig(REG_GCONREG,REG_GCONREG_VALUE | mask);
}

void MRF89XA_SetModulation(unsigned char Modulation) {
    unsigned char mask = 0x00;
    if(Modulation == MRF89XA_MODULATION_FSK)
        mask = REG_DMODREG_MASK_FSK;
    else
        mask = REG_DMODREG_MASK_OOK;
                
    MRF89XA_WriteConfig(REG_DMODREG,REG_DMODREG_VALUE | mask);
}

unsigned char MRF89XA_SPI_ExchangeByte(unsigned char byte) {
    return spi2_exchangeByte(byte);
}

void MRF89XA_SetIndicationLed(unsigned char State) {
    LED_R_LAT = (State & 0x01 == 0);
}

#if MRF_DEBUG == 1
void MRF89XA_ReadAllConfigs(void) {
    unsigned char currentConfig = 0;
    unsigned char cond = 1;
    unsigned char counter = 0;
    
    while(cond == 1) {
        readBuffer[counter] = MRF89XA_ReadConfig(counter);
        counter++;
        
        if(counter > 0x1F) {
            cond = 0;
        } else {
            readBuffer[counter] = 0x00;
        }
        asm("nop");
    }
}

void MRF89XA_ReadAllFifo(void) {
    unsigned char currentConfig = 0;
    unsigned char cond = 1;
    unsigned char counter = 0;
    
    while(cond == 1) {
        readBuffer[counter] = MRF89XA_ReadFifo();
        counter++;
        
        if(counter > 16) {
            cond = 0;
        } else {
            readBuffer[counter] = 0x00;
        }
        asm("nop");
    }
}
#endif

unsigned char MRF89XA_WriteConfig(unsigned char Address, unsigned char Data) {
    return MRF89XA_ExchangeConfig_A(MRF89XA_GetAddress(Address, 0), Data);
}

unsigned char MRF89XA_ReadConfig(unsigned char Address) {
    return MRF89XA_ExchangeConfig_A(MRF89XA_GetAddress(Address, 1), 0xFF);
}

unsigned char MRF89XA_ReadFifo(void) {
    return MRF89XA_ExchangeFifo(0x00);
}

unsigned char MRF89XA_WriteFifo(unsigned char Data) {
    return MRF89XA_ExchangeFifo(Data);
}

unsigned char MRF89XA_ExchangeFifo(unsigned char Data) {
    CSCON_SetHigh();
    CSDAT_SetLow();
    unsigned char ret = MRF89XA_SPI_ExchangeByte(Data);
    CSDAT_SetHigh();
    return ret;
}

unsigned char MRF89XA_ExchangeConfig(unsigned char Data) {
    CSDAT_SetHigh();
    CSCON_SetLow();
    unsigned char ret = MRF89XA_SPI_ExchangeByte(Data);
    CSCON_SetHigh();
    return ret;
}

unsigned char MRF89XA_ExchangeConfig_A(unsigned char Address, unsigned char Data) {
    CSDAT_SetHigh();
    CSCON_SetLow();
    MRF89XA_SPI_ExchangeByte(Address);
    unsigned char ret = MRF89XA_SPI_ExchangeByte(Data);
    CSCON_SetHigh();
    return ret;
}

void MRF89XA_SendData(unsigned char TargetAddress, unsigned char Data) {
    MRF89XA_WriteFifo(TargetAddress);
    MRF89XA_WriteFifo(Data);
    // Wait for transmit done
    while(!MRF89XA_IsTxDone()) {
        Delay_Xms(1);
    }
}

void MRF89XA_SendCommand(unsigned char TargetAddress, unsigned char Command, unsigned char Param) {
    MRF89XA_WriteFifo(TargetAddress);
    MRF89XA_WriteFifo(Command);
    MRF89XA_WriteFifo(Param);
    // Wait for transmit done
    while(!MRF89XA_IsTxDone()) {
        Delay_Xms(1);
    }
}

unsigned char MRF89XA_GetAddress(unsigned char Address, unsigned char Read) {
    unsigned char ret = Address << 1;
    if(Read != 0) {
        ret = ret | REG_MASK_READ;
    } else {
        ret = ret | REG_MASK_WRITE;
    }
    return ret;
}

// RX mode
unsigned char MRF89XA_IsPLRReady(void) {
    return IRQ0_GetValue();
}

unsigned char MRF89XA_IsCRCOK(void) {
    unsigned char reg = MRF89XA_ReadConfig(REG_PKTCREG);
    return (reg & 0x01) > 0;
}

// TX mode 
unsigned char MRF89XA_IsFIFO_THRESHOLD(void) {
    return IRQ0_GetValue();
}

unsigned char MRF89XA_IsTxDone(void) {
    unsigned char reg = MRF89XA_ReadConfig(REG_FTPRIREG);
    return (reg & 0x20) > 0;
}

unsigned char MRF89XA_IsFifoEmpty(void) {
    unsigned char reg = MRF89XA_ReadConfig(REG_FTXRXIREG);
    return (reg & 0x02) == 0;
}

unsigned char MRF89XA_IsFifoFull(void) {
    unsigned char reg = MRF89XA_ReadConfig(REG_FTXRXIREG);
    return (reg & 0x04) > 0;
}

unsigned char MRF89XA_IsFifoOverrun(void) {
    unsigned char reg = MRF89XA_ReadConfig(REG_FTXRXIREG);
    return (reg & 0x01) > 0;
}
