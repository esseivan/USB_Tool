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
#ifndef MRF89XA_H
#define	MRF89XA_H

#define MRF_DEBUG 0

enum MRF89XA_Mode {
    MRF89XA_MODE_RX,
    MRF89XA_MODE_TX,
    MRF89XA_MODE_STANDBY,
    MRF89XA_MODE_SLEEP,
    
    MRF89XA_MODULATION_FSK,
    MRF89XA_MODULATION_OOK,
};

#if MRF_DEBUG == 1
unsigned char readBuffer[32] = {0};
void MRF89XA_ReadAllConfigs(void);
void MRF89XA_ReadAllFifo(void);
#endif

void MRF89XA_Initialize(unsigned char Address, unsigned char Mode, unsigned char Modulation);
void MRF89XA_SetMode(unsigned char Mode);
void MRF89XA_SetModulation(unsigned char Modulation);
unsigned char MRF89XA_WriteConfig(unsigned char Address, unsigned char Data);
unsigned char MRF89XA_ReadConfig(unsigned char Address);
unsigned char MRF89XA_ReadFifo(void);
unsigned char MRF89XA_WriteFifo(unsigned char Data);
unsigned char MRF89XA_ExchangeFifo(unsigned char Data);
void MRF89XA_SendData(unsigned char TargetAddress, unsigned char Data);
void MRF89XA_SendCommand(unsigned char TargetAddress, unsigned char Command, unsigned char Param);
unsigned char MRF89XA_IsPLRReady(void);
unsigned char MRF89XA_IsCRCOK(void);
unsigned char MRF89XA_IsFIFO_THRESHOLD(void);
unsigned char MRF89XA_IsTxDone(void);
unsigned char MRF89XA_IsFifoEmpty(void);
unsigned char MRF89XA_IsFifoFull(void);
unsigned char MRF89XA_IsFifoOverrun(void);


#define REG_MASK_READ           0b01000000
#define REG_MASK_WRITE          0b00000000

//General Configuration Registers: Size ? 13 Bytes, Start Address ? 0x00
#define REG_GCONREG             0x00    //General Configuration Register
#define REG_DMODREG		        0x01    //Data and Modulation Configuration Register
#define REG_FDEVREG             0x02    //Frequency Deviation Control Register
#define REG_BRSREG     	        0x03    //Bit Rate Set Register
#define REG_FLTHREG             0x04    //Floor Threshold Control Register 
#define REG_FIFOCREG  	        0x05    //FIFO Configuration Register
#define REG_R1CREG     	        0x06    //R1 Counter Set Register
#define REG_P1CREG     	        0x07    //P1 Counter Set Register
#define REG_S1CREG     	        0x08    //S1 Counter Set Register
#define REG_R2CREG     	        0x09    //R2 Counter Set Register
#define REG_P2CREG     	        0x0A    //P2 Counter Set Register
#define REG_S2CREG     	        0x0B    //S2 Counter Set Register
#define REG_PACREG     	        0x0C    //Power Amplifier Control Register
//Interrupt Configuration Registers: Size ? 3 Bytes, Start Address ? 0x0D
#define REG_FTXRXIREG           0x0D    //FIFO, Transmit and Receive Interrupt Request Configuration Register
#define REG_FTPRIREG            0x0E    //FIFO Transmit PLL and RSSI Interrupt Configuration Register
#define REG_RSTHIREG            0x0F    //RSSI Threshold Interrupt Request Configuration Register
//Receiver Configuration Registers: Size ? 6 Bytes, Start Address ? 0x10
#define REG_FILCREG             0x10    //Filter Configuration Register
#define REG_PFCREG     	        0x11    //Polyphase Filter Configuration Register
#define REG_SYNCREG             0x12    //Sync Control Register 
#define REG_RESVREG             0x13    //Reserved Register
//Receiver Configuration Registers: Size ? 6 Bytes, Start Address ? 0x14
#define REG_RSTSREG             0x14    //RSSI Status Read Register
#define REG_OOKCREG             0x15    //OOK Configuration Register
//Sync Word Configuration Registers: Size ? 4 Bytes, Start Address ? 0x16
#define REG_SYNCV31REG          0x16    //Sync Value 1st Byte Configuration Register
#define REG_SYNCV23REG          0x17    //Sync Value 2nd Byte Configuration Register
#define REG_SYNCV15REG          0x18    //Sync Value 3rd Byte Configuration Register
#define REG_SYNCV07REG          0x19    //Sync Value 4th Byte Configuration Register
//Transmitter Configuration Registers: Size ? 1 Byte, Start Address ? 0x1A
#define REG_TXCONREG            0x1A    //Transmit Configuration Register
//Oscillator Configuration Registers: Size ? 1 Byte, Start Address ? 0x1B
#define REG_CLKOUTREG           0x1B    //Clock Output Control Register
//Packet Handling Configuration Registers: Size ? 4 Bytes, Start Address ? 0x1C
#define REG_PLOADREG            0x1C    //Payload Configuration Register
#define REG_NADDSREG            0x1D    //Node Address Set Register
#define REG_PKTCREG             0x1E    //Packet Configuration Register
#define REG_FCRCREG             0x1F    //FIFO CRC Configuration Register

#define REG_GCONREG_MASK_TX     0b10000000
#define REG_GCONREG_MASK_RX     0b01100000
#define REG_GCONREG_MASK_STDBY  0b00100000
#define REG_GCONREG_MASK_SLEEP  0b00000000

#define REG_DMODREG_MASK_FSK    0b10000000
#define REG_DMODREG_MASK_OOK    0b01000000

// 860MHz, sleep mode
#define REG_GCONREG_VALUE       0b00010000  // 0x28
/*                                |||||||+- RPS         = 0 : RPS select bits (Ri,Pi,Si)
 *                                |||||++-- VCOT1..0    = 0b00 : TX bits
 *                                |||++---- FBS1..0     = 0b10 : Frequency Band Selection
 *                                +++------ CMOD2..0    = 0b000 : Chip Mode
 */
// Packet mode, NO modulation (defined with mask), peak mode, Gain 0dB
#define REG_DMODREG_VALUE       0b00101000  // 0x88, Edited
/*                                ||||||++- IFGAIN1..0  = 0b00 : IF Gain
 *                                |||||+--- DMODE1      = 0 : Data Mode bit 1
 *                                |||++---- OOKTYP1..0  = 0b01 : OOK Demodulator Threshold Type
 *                                ||+------ DMODE0      = 1 : Data Mode bit 0
 *                                ++------- MODSEL1..0  = 0b00 : Modulation Type Selection
 */
// FDev 100kHz
#define REG_FDEVREG_VALUE       0x03  // 0x03
/*                                ++++++++- FDVAL7..0   = 0x03 : Frequency Deviation Value (FSK)
 */
// Bit rate 1kbps
#define REG_BRSREG_VALUE        0xC7  // 0x07
/*                                |+++++++- BRVAL6..0   = 0xC7 : Bit Rate Value
 *                                +-------- RESERVED
 */
// 6dB min
#define REG_FLTHREG_VALUE       0b00001100  // 0x0C
/*                                ++++++++- FTOVAL7..0  = 0b00001100 : Floor Threshold OOK Value
 */
// Fifo 16 bytes, interrupt at 2 (address + cmd)
#define REG_FIFOCREG_VALUE      0b00000010  // 0x0F, Edited
/*                                ||++++++- FTINT5..0   = 2 : FIFO Threshold Interrupt
 *                                ++------- FSIZE1..0   = 0b00 : FIFO Size Selection
 */
// R1 : 125
#define REG_R1CREG_VALUE        0x7D  // 0x77
/*                                ++++++++- R1CVAL7..0  = 0x77 : R1 Value
 */
// P1 : 100
#define REG_P1CREG_VALUE        0x64  // 0x64
/*                                ++++++++- P1CVAL7..0  = 0x64 : P1 Value
 */
// S1 : 20
#define REG_S1CREG_VALUE        0x14  // 0x32
/*                                ++++++++- S1CVAL7..0  = 0x32 : S1 Value
 */
#define REG_R2CREG_VALUE        0b01110100  // 0x74
/*                                ++++++++- R2CVAL7..0  = 0x74 : R2 Value
 */
#define REG_P2CREG_VALUE        0b01100010  // 0x62
/*                                ++++++++- P2CVAL7..0  = 0x62 : P2 Value
 */
#define REG_S2CREG_VALUE        0b00110010  // 0x32
/*                                ++++++++- S2CVAL7..0  = 0x32 : S2 Value
 */
// 3us rise and fall time
#define REG_PACREG_VALUE        0b00100000  // 0x38
/*                                |||||+++- RESERVED
 *                                |||++---- PARC1..0    = 0b00 : Power Amplifier Ramp Control 
 *                                +++------ RESERVED
 */
// IRQ0RX : FIFOEMPTY, IRQ1RX : FIFO_THRESHOLD, IRQ1TX : TXDONE
#define REG_FTXRXIREG_VALUE     0b10111000  // 0x00, Edited
/*                                |||||||+- FOVRRUN     = 0 : FIFO Overrun Clear
 *                                ||||||+-- FIFOEMPTY   = 0 : FIFO Empty
 *                                |||||+--- FIFOFULL    = 0 : FIFO Full
 *                                ||||+---- IRQ1TX      = 1 : Transmit IRQ1
 *                                ||++----- IRQ1RXS1..0 = 0b11 : IRQ1 Receive Stand-by
 *                                ++------- IRQ0RXS1..0 = 0b10 : IRQ0 Receive Stand-by
 */
// IRQOTX : FIFO_THRESHOLD + Start sending once all selected bytes are set
#define REG_FTPRIREG_VALUE      0b00111010  // 0x01, Edited
/*                                |||||||+- LENPLL      = 0 : Lock Enable of PLL
 *                                ||||||+-- LSTSPLL     = 1 : Lock Status of PLL
 *                                |||||+--- RIRQS       = 0 : RSSI IRQ Source
 *                                ||||+---- RESERVED    = 1
 *                                |||+----- IRQ0TXST    = 1 : Transmit Start with IRQ0
 *                                ||+------ TXDONE      = 1 : Transmit Done
 *                                |+------- FIFOFSC     = 0 : FIFO Filling Status or Control
 *                                +-------- FIFOFM      = 0 : FIFO Filling Method
 */
// RSSI threshold, unused
#define REG_RSTHIREG_VALUE      0b00000000  // 0x00
/*                                ++++++++- RTIVAL7..0  = 0 : RSSI Threshold for Interrupt Value
 */
// Passive filter : 312kHz, Butterworth filter : 100kHz
#define REG_FILCREG_VALUE       0b10010011  // 0xA3
/*                                ||||++++- BUTFILV3..0 = 0b0011 : Butterworth Filter Value
 *                                ++++----- PASFILV3..0 = 0b1001 : Passive Filter Value
 */
// Polyphase center frequency : 100kHz
#define REG_PFCREG_VALUE        0b00111000  // 0x38
/*                                ||||++++- RESERVED    = 0b1000
 *                                ++++----- POLCFV3..0  = 0b0011 : Polyphase Centre Frequency Value
 */
// Sync off, Polyphase on
#define REG_SYNCREG_VALUE       0b10101010  // 0x18, Edited
/*                                |||||||+- RESERVED
 *                                |||||++-- SYNCTEN1..0 = 0b00 : SYNC Word Tolerated Error Numbers 
 *                                |||++---- SYNCWSZ1..0 = 0b00 : SYNC Word Size
 *                                ||+------ SYNCREN     = 0 : SYNC Word Recognition Enable
 *                                |+------- BSYNCEN     = 0 : Bit Synchronizer Enable
 *                                +-------- POLFILEN    = 1 : Polyphase Filter Enable
 */
// Reserved register
#define REG_RSTSREG_VALUE       0b00000111  // 0x07
/*                                ++++++++- Reserved    = 0b00000111
 */
// RSSI read register
#define REG_RSVREG_VALUE        0b00000000  // 0x00
/*                                ++++++++- RSSIVAL7..0 = 0 : RSSI Value (Read-only)
 */
// 0.5dB, once, 8 Pi
#define REG_OOKCREG_VALUE       0b00000000  // 0x00
/*                                ||||||++- OOKATHC1..0 = 0b00 : OOK Average Threshold Cut-off
 *                                |||+++--- OOKTHPV2..0 = 0b000 : OOK Threshold Period Value
 *                                +++------ OOKTHSV2..0 = 0b000 : OOK Threshold Step Value
 */
// Sync word 3
#define REG_SYNCV31REG_VALUE    0x00  // 0x00, Edited
/*                                ++++++++- SYNCV31..24 = 0 :  SYNC First Byte Value
 */
// Sync word 2
#define REG_SYNCV23REG_VALUE    0x00  // 0x00, Edited
/*                                ++++++++- SYNCV23..16 = 0 :  SYNC Second Byte Value
 */
// Sync word 1
#define REG_SYNCV15REG_VALUE    0x45  // 0x00, Edited
/*                                ++++++++- SYNCV15..8 = 0x45 ('E') :  SYNC Third Byte Value
 */
// Sync word 0
#define REG_SYNCV07REG_VALUE    0x01  // 0x00, Edited
/*                                ++++++++- SYNCV7..0 = 0x01 :  SYNC Fourth Byte Value
 */
// Transmit power 13dBm, filter 200kHz
#define REG_TXCONREG_VALUE      0b01110000  // 0x72, Edited
/*                                |||||||+- RESERVED
 *                                ||||+++-- TXOPVAL2..0  = 0b000 : Transmit Output Power Value
 *                                ++++----- TXIPOLFV3..0 = 0b0111 : Transmission Interpolation Filter Cut Off Frequency Value
 */
// Clkout off
#define REG_CLKOUTREG_VALUE     0b00111100  // 0xBC
/*                                ||||||++- RESERVED
 *                                |+++++--- CLKOFREQ4..0 = 0b01111 : Clock Out Frequency
 *                                +-------- CLKOCNTRL    = 0 : Clock Output Control
 */
// Manchester encoding off, Payload length is 4 max
#define REG_PLOADREG_VALUE      0b00000100  // 0x00
/*                                |+++++++- PLDPLEN6..0 = 0x04 : Payload Packet Length
 *                                +-------- MCHSTREN    = 0 : Manchester Encoding/Decoding Enable
 */
// Local address
#define REG_NADDSREG_VALUE      0x40  // 0x00
/*                                ++++++++- NLADDR7..0  = 0x40 : Node Local Address
 */
// Packet length fixed, Preamble size 2, Whitening OFF, CRC OFF, Adress local & 0x00
#define REG_PKTCREG_VALUE       0b00100000  // 0x48
/*                                |||||||+- STSCRCEN    = 0 : Status Check CRC Enable
 *                                |||||++-- ADDFIL1..0  = 0b01 : Address Filtering
 *                                ||||+---- CHKCRCEN    = 0 : Check (or Calculation) CRC Enable
 *                                |||+----- WHITEON     = 0 : Whitening/Dewhitening Process Enable
 *                                |++------ PRESIZE1..0 = 0b01 : Preamble Size
 *                                +-------- PKTLENF     = 0 : Packet Length Format
 */
// AutoClear ON, Fifo Write in standby
#define REG_FCRCREG_VALUE       0b00000000  // 0x00
/*                                |||||||+- RESERVED
 *                                |+------- FRWAXS      = 0 : FIFO Read/Write Access
 *                                +-------- ACFCRC      = 0 : Auto Clear FIFO CRC
 */



#endif	/* MRF89XA_H */

