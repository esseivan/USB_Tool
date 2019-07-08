/*******************************************************************************
 * File:    iic.c
 * Author:  Esseiva Nicolas
 * Company: EMF (Ecole des Métiers de Fribourg) http://www.emf.ch
 * Desc.:   Communication I2C
 * Date :   20170901 Création (YYYYMMDD)
 * Dernière modif. : 20180701 (YYYYMMDD)
 ******************************************************************************/
//OK

#include "iic.h"
#include "mcc_generated_files/mcc.h"
#include "main.h"
#include "commands.h"
#include "LedBlink.h"

//##############################################################################
// Fonctions (Prototypes)
//##############################################################################
// Repeated Start
void I2C_Master_RepeatedStart(void);
// Start
void I2C_Master_Start(void);
// Stop
void I2C_Master_Stop(void);
// Send Acknowledge
void I2C_Master_Send_ACK(unsigned char Ack);
// Write
void I2C_Master_Write(unsigned char data);

//##############################################################################
// Fonctions (implémentation)
//##############################################################################

//******************************************************************************
// Initialisation en mode Master 
//******************************************************************************
void I2C_Master_Init(void) {
    // Set SCL and SDA as inputs
    SCL_SetDigitalMode();
    SCL_SetDigitalInput();
    SSP1CLKPPS = 0b00001010; // MSSP1 : CLK -> RB2
    RB2PPS = 0x0F;           // RB2 -> CLK
    
    SDA_SetDigitalMode();
    SDA_SetDigitalInput();
    SSP1DATPPS = 0b00001011; // MSSP1 : DAT -> RB3
    RB3PPS = 0x10;           // RB3 -> DAT

    SSP1STAT = 0b00000000;
//               ||||||||
//               |||||||+- BF       = 0 : Buffer Full, if SSPBUF is full
//               ||||||+-- UA       = 0 : 
//               |||||+--- R_nW     = 0 : #Slave mode : Indicate if master want Read or Write
//               |||||                    #Master mode : Indicate if transmit is in progress
//               ||||+---- S        = 0 : Start last detected
//               |||+----- P        = 0 : Stop last detected
//               ||+------ D_nA     = 0 : Last received byte is Data or Address
//               |+------- CKE      = 0 : SMBus support
//               +-------- SMP      = 0 : Sample bit, slew rate control
    SSP1CON1 = 0b00101000;
//               ||||||||
//               ||||++++- SSPM3..0 = 0b1000 : Master mode fosc/4
//               |||+----- CKP      = 0 : Clock stretching (hold the clock)
//               ||+------ SSPEN    = 1 : Enable the I2C module
//               |+------- SSPOV    = 0 : Indicator that byte was received while SSPBUF was full
//               +-------- WCOL     = 0 : Indicator that transmission was established in invalid conditions
    SSP1CON2 = 0b00000000;
//               ||||||||
//               |||||||+- SEN      = 0 : Initiate Start condition (Master only)
//               ||||||+-- RSEN     = 0 : Initiate Repeated Start condition (Master only)
//               |||||+--- PEN      = 0 : Initiate Stop condition (Master only)
//               ||||+---- RCEN     = 0 : Enable RX mode (Master only)
//               |||+----- ACKEN    = 0 : Send the ACK (or nACK) on the bus (Master RX only)
//               ||+------ ACKDT    = 0 : Indicate if we send ACK or nACK (Master RX only)
//               |+------- ACKSTAT  = 0 : Indicate the acknowledge status bit received (Master TX only)
//               +-------- GCEN     = 0 : General call, responds to address 0x00 (Slave only))
    // ACKTIM ackseq; SBCDE disabled; BOEN disabled; SCIE disabled; PCIE disabled; DHEN disabled; SDAHT 100ns; AHEN disabled; 
    SSP1CON3 = 0x00;
    // SSP1ADD 25kHz 
    SSP1ADD = 0xEF;

    PIR3bits.BCL1IF = 0;

    PIE3bits.BCL1IE = 1;
}

//******************************************************************************
// Initialisation en mode Slave 
//******************************************************************************
void I2C_Slave_Init(void) {
    // Set SCL and SDA as inputs
    SCL_SetDigitalInput();
    SCL_SetDigitalMode();
    SSP1CLKPPS = 0b00001010; // MSSP1 : CLK -> RB2
    RB2PPS = 0x0F;           // RB2 -> CLK
    
    SDA_SetDigitalInput();
    SDA_SetDigitalMode();
    SSP1DATPPS = 0b00001011; // MSSP1 : DAT -> RB3
    RB3PPS = 0x10;           // RB3 -> DAT
    
    SSP1STAT = 0b00000000;
//               ||||||||
//               |||||||+- BF       = 0 : Buffer Full, if SSPBUF is full
//               ||||||+-- UA       = 0 : 
//               |||||+--- R_nW     = 0 : #Slave mode : Indicate if master want Read or Write
//               |||||                    #Master mode : Indicate if transmit is in progress
//               ||||+---- S        = 0 : Start last detected
//               |||+----- P        = 0 : Stop last detected
//               ||+------ D_nA     = 0 : Last received byte is Data or Address
//               |+------- CKE      = 0 : SMBus support
//               +-------- SMP      = 0 : Sample bit, slew rate control
    SSP1CON1 = 0b00100110;
//               ||||||||
//               ||||++++- SSPM3..0 = 0b0110 : Slave mode 7-bit address
//               |||+----- CKP      = 0 : Clock stretching (hold the clock)
//               ||+------ SSPEN    = 1 : Enable the I2C module
//               |+------- SSPOV    = 0 : Indicator that byte was received while SSPBUF was full
//               +-------- WCOL     = 0 : Indicator that transmission was established in invalid conditions
    SSP1CON2 = 0b10000000;
//               ||||||||
//               |||||||+- SEN      = 0 : Initiate Start condition (Master only)
//               ||||||+-- RSEN     = 0 : Initiate Repeated Start condition (Master only)
//               |||||+--- PEN      = 0 : Initiate Stop condition (Master only)
//               ||||+---- RCEN     = 0 : Enable RX mode (Master only)
//               |||+----- ACKEN    = 0 : Send the ACK (or nACK) on the bus (Master RX only)
//               ||+------ ACKDT    = 0 : Indicate if we send ACK or nACK (Master RX only)
//               |+------- ACKSTAT  = 0 : Indicate the acknowledge status bit received (Master TX only)
//               +-------- GCEN     = 0 : General call, responds to address 0x00 (Slave only))
    // ACKTIM ackseq; SBCDE enabled; BOEN disabled; SCIE enabled; PCIE disabled; DHEN disabled; SDAHT 100ns; AHEN disabled; 
    SSP1CON3 = 0x24;
    // Device address    
    SSP1ADD = 0x00 << 1;
    // Address mask
    SSP1MSK = 0x00;

    SSP1CON3bits.SCIE = 1;
    
    PIR3bits.BCL1IF = 0;

    PIE3bits.BCL1IE = 1;
   
    PIE3bits.SSP1IE = 1;
}

//******************************************************************************
// Repeated start
//******************************************************************************
void I2C_Master_RepeatedStart(void) {
    SSP1CON2bits.RSEN = 1; //Initiate repeated start condition
    while(SSP1CON2bits.RSEN);
    PIR3bits.SSP1IF = 0;
}

//******************************************************************************
// Start
//******************************************************************************
void I2C_Master_Start(void) {
    SSP1CON2bits.SEN = 1; //Initiate start condition
    while(SSP1CON2bits.SEN);
    PIR3bits.SSP1IF = 0;
}

//******************************************************************************
// Stop
//******************************************************************************
void I2C_Master_Stop(void) {
    SSP1CON2bits.PEN = 1; //Initiate stop condition
    while(SSP1CON2bits.PEN);
    PIR3bits.SSP1IF = 0;
}

//******************************************************************************
// Send Acknowledge
//******************************************************************************
void I2C_Master_Send_ACK(unsigned char Ack) {
    SSP1CON2bits.ACKDT = Ack == 0 ? 0 : 1; //Acknowledge bit
    SSP1CON2bits.ACKEN = 1; //Acknowledge sequence
    while(SSP1CON2bits.ACKEN);
    PIR3bits.SSP1IF = 0;
}

//******************************************************************************
// Write to buffer
//******************************************************************************
void I2C_Master_Write(unsigned char data) {
    SSP1BUF = data;
    if(SSP1CON1bits.WCOL) {
        SSP1CON1bits.WCOL = 0;
        SetLedBlink(R,1000,0,0,1);
    } else {
        while(!PIR3bits.SSP1IF);
    }
}

//******************************************************************************
// Envoi d'un byte
// Paramètres   :
//      Target  : Adresse de la cible
//      Data    : Donnée
//******************************************************************************
void I2C_WriteData(unsigned char Target, unsigned char Data) {
    I2C_Master_Start();
    
    I2C_Master_Write(Target);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        I2C_Master_Stop();
        return;
    }
    
    I2C_Master_Write(Data);
    
    I2C_Master_Stop();
}

//******************************************************************************
// Envoi d'un tableau
// Paramètres :
//      Target  : Adresse de la cible
//      Length  : Taille du tableau
//      Data    : Tableau de donnée
//******************************************************************************
void I2C_WriteLength(unsigned char Target, unsigned char Length, unsigned char *Data) {
    I2C_Master_Start();
    
    I2C_Master_Write(Target);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        I2C_Master_Stop();
        return;
    }
    
    for (unsigned char i = 0; i < Length; i++) {
        I2C_Master_Write(Data[i]);
        if(SSP1CON2bits.ACKSTAT) {
            // NACK, initiate stop
            I2C_Master_Stop();
            return;
        }
    }

    I2C_Master_Stop();
}

//******************************************************************************
// Demande de lecture d'un byte
// Paramètres   :
//      Target  : Adresse de la cible
// Retour : Valeur lue
//******************************************************************************
unsigned char I2C_ReadData(unsigned char Target) {
    I2C_Master_Start();
    
    // Transmit address with read flag
    I2C_Master_Write(Target | 0x01);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        I2C_Master_Stop();
        return 0xFF;
    }
    
    // Enable receive mode
    SSP1CON2bits.RCEN = 1;
    
    // Wait for data to be received
    while(!SSP1STATbits.BF);
    PIR3bits.SSP1IF = 0;
    
    // Read data
    unsigned char result = SSP1BUF;
    
    // Send not acknowledge
    I2C_Master_Send_ACK(1);
    
    // Stop condition
    I2C_Master_Stop();
    
    return result;
}

//******************************************************************************
// Demande de lecture d'un tableau
// Paramètres :
//      Target  : Adresse de la cible
//      Length  : Taille du tableau
//      Output  : Tableau de sortie
//******************************************************************************
void I2C_ReadLength(unsigned char Target, unsigned char Length, unsigned char *Output) {
    I2C_Master_Start();
    
    // Transmit address with read flag
    I2C_Master_Write(Target | 0x01);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        I2C_Master_Stop();
        return;
    }
    
    // Enable receive mode
    SSP1CON2bits.RCEN = 1;
    
    for (unsigned char i = 0; i < Length; i++) {
        // Wait for data to be received
        while(!SSP1STATbits.BF);
        PIR3bits.SSP1IF = 0;
        
        // Add data to output
        Output[i] = SSP1BUF;
        
        // Ack
        I2C_Master_Send_ACK(((i + 1) == Length) ? 1 : 0);
    }
    Output[Length] = 0x00;
    
    // Stop condition
    I2C_Master_Stop();
}

//******************************************************************************
// Envoi d'une commande et attente d'une réponse sous forme de byte
// Paramètres :
//      Target  : Adresse de la cible
//      CMD     : Commande
// Retour : Valeur lue
//******************************************************************************
unsigned char I2C_SendCommand(unsigned char Target, unsigned char CMD) {
    // Start condition
    I2C_Master_Start();
    
    // Send target address with R_nW flag
    I2C_Master_Write(Target);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return 0xFF;
    }
    
    // Send command
    I2C_Master_Write(CMD);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return 0xFF;
    }
    
    I2C_Master_Stop();
    
    Delay_Xms(5);
    
    I2C_Master_Start();

    I2C_Master_Write(Target | 0x01);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return 0xFF;
    }
    
    // Enable reception
    SSP1CON2bits.RCEN = 1;
    
    // Wait for data to be received
    while(!SSP1STATbits.BF);
    PIR3bits.SSP1IF = 0;
        
    unsigned char result = SSP1BUF;
    
    I2C_Master_Send_ACK(1);
    
    I2C_Master_Stop();
    return result;
}
//******************************************************************************
// Envoi d'une commande et attente d'une réponse sous forme de tableau
// Paramètres :
//      Target  : Adresse de la cible
//      CMD     : Commande
//      Length  : Taille du tableau
//      Output  : Tableau de sortie
//******************************************************************************
void I2C_SendCommand_L(unsigned char Target, unsigned char CMD, unsigned char Length, unsigned char *Output) {
    I2C_Master_Start();
    I2C_Master_Write(Target);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return;
    }
    I2C_Master_Write(CMD);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return;
    }

    I2C_Master_Stop();
    
    Delay_Xms(5);
    
    I2C_Master_Start();

    I2C_Master_Write(Target | 0x01);
    if(SSP1CON2bits.ACKSTAT) {
        // NACK, initiate stop
        SSP1CON2bits.PEN = 1;
        while(SSP1CON2bits.PEN);
        return;
    }

    // Enable reception
    SSP1CON2bits.RCEN = 1;
    
    for (unsigned char i = 0; i < Length; i++) {
        // Wait for data to be received
        while(!SSP1STATbits.BF);
        PIR3bits.SSP1IF = 0;
        
        // Add data to output
        Output[i] = SSP1BUF;
        
        // Ack
        I2C_Master_Send_ACK(((i + 1) == Length) ? 1 : 0);
    }
    Output[Length] = 0x00;

    I2C_Master_Stop();
}

//******************************************************************************
// Contrôle l'erreur de collision de bus
//******************************************************************************
void I2C_BusCollisionISR(void) {
    // enter bus collision handling code here
    PIR3bits.BCL1IF = 0;
}

//******************************************************************************
// Retourne l'adresse avec le flag R_nW mis à 0
//******************************************************************************
unsigned char GetTarget(unsigned char Address) {
    unsigned char ret = Address << 1;
    ret = ret & 0b11111110;
    return ret;
}

//******************************************************************************
// Retourne l'adresse avec le flag R_nW mis à 0
//******************************************************************************
void I2C_Slave_ISR(void) {
    PIR3bits.SSP1IF = 0;
    
    // Check what is the source
    if(SSP1STATbits.S == 1) {
        // Start condition, address valid
        // Send Acknowledge
        
        SSP1CON2bits.ACKDT = 0; //Acknowledge bit
        SSP1CON2bits.ACKEN = 1; //Acknowledge sequence
        // Wait for acknowledge sent
        while(!PIR3bits.SSP1IF);
        PIR3bits.SSP1IF = 0;
        // Clear previous buffer
        unsigned char data = SSP1BUF;
            
        // Check if read or write
        if(SSP1STATbits.R_nW == 1) {
            // Read
            
        } else {
            // Write
            
        }
    }
}

/* END OF FILE ****************************************************************/
