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
void I2C_Slave_Send_ACK(unsigned char Ack);
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
    SCL1_SetDigitalMode();
    SCL1_SetDigitalInput();
    SSP1CLKPPS = 0x10; // MSSP1 : CLK -> RC0
    RC0PPS = 0x15;           // RB2 -> CLK
    
    SDA1_SetDigitalMode();
    SDA1_SetDigitalInput();
    SSP1DATPPS = 0x11; // MSSP1 : DAT -> RC1
    RC1PPS = 0x16;           // RB3 -> DAT

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
//               ||||++++- SSPM3..0 = 0b0110 : Slave 7-bit mode
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
//               +-------- GCEN     = 0 : General call, responds to address 0x00 (Slave only)
    SSP1CON3 = 0b00000000;
//               ||||||||
//               |||||||+- DHEN     = 0 : Data hold enable
//               ||||||+-- AHEN     = 0 : Address hold enable
//               |||||+--- SBCDE    = 0 : Collision detect enable
//               ||||+---- SDAHT    = 0 : SDA hold time
//               |||+----- BOEN     = 0 : Buffer Overwrite enable
//               ||+------ SCIE     = 0 : Start condition interrupt
//               |+------- PCIE     = 0 : Stop condition interrupt
//               +-------- ACKTIM   = 0 : Acknowledge time status
    
    // SSP1ADD 100kHz 
    SSP1ADD = 0x3b;

    PIR3bits.BCL1IF = 0;

    PIE3bits.BCL1IE = 1;
}

//******************************************************************************
// Initialisation en mode Slave 
//******************************************************************************
void I2C_Slave_Init(void) {
    // Set SCL and SDA as inputs
    SCL1_SetDigitalMode();
    SCL1_SetDigitalInput();
    SSP1CLKPPS = 0x10; // MSSP1 : CLK -> RC0
    RC0PPS = 0x15;           // RB2 -> CLK
    
    SDA1_SetDigitalMode();
    SDA1_SetDigitalInput();
    SSP1DATPPS = 0x11; // MSSP1 : DAT -> RC1
    RC1PPS = 0x16;           // RB3 -> DAT

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
    SSP1CON3 = 0b00100100;
//               ||||||||
//               |||||||+- DHEN     = 0 : Data hold enable
//               ||||||+-- AHEN     = 0 : Address hold enable
//               |||||+--- SBCDE    = 1 : Collision detect enable
//               ||||+---- SDAHT    = 0 : SDA hold time
//               |||+----- BOEN     = 0 : Buffer Overwrite enable
//               ||+------ SCIE     = 1 : Start condition interrupt
//               |+------- PCIE     = 0 : Stop condition interrupt
//               +-------- ACKTIM   = 0 : Acknowledge time status
    
    // Device address    
    SSP1ADD = I2C_SLAVE_ADDRESS << 1;
    // Address mask
    SSP1MSK = I2C_SLAVE_MASK;
    
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
}

//******************************************************************************
// Send Acknowledge
//******************************************************************************
void I2C_Master_Send_ACK(unsigned char Ack) {
    SSP1CON2bits.ACKDT = Ack ? 0 : 1; //Acknowledge bit
    SSP1CON2bits.ACKEN = 1; //Acknowledge sequence
    while(SSP1CON2bits.ACKEN);
}

//******************************************************************************
// Send Acknowledge
//******************************************************************************
void I2C_Slave_Send_ACK(unsigned char Ack) {
    if(Ack == 0) {
        SDA1_SetLow();
    }
    while(!PIR3bits.SSP1IF);
    PIR3bits.SSP1IF = 0;
    SDA1_SetHigh();
}

//******************************************************************************
// Write to buffer
//******************************************************************************
void I2C_Master_Write(unsigned char data) {
    SSP1BUF = data;
    while(!PIR3bits.SSP1IF);
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
    
    I2C_Master_RepeatedStart();

    I2C_Master_Write(Target | 0x01);
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
    I2C_Master_Write(CMD);

    I2C_Master_RepeatedStart();

    I2C_Master_Write(Target | 0x01);

    for (unsigned char i = 0; i < Length; i++) {
        // Wait for data to be received
        while(!SSP1STATbits.BF);
        
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
        
        // Send acknowledge
        I2C_Slave_Send_ACK(0);
        
        // Clear previous buffer
        unsigned char data = SSP1BUF;
            
        // Check if read or write
        if(SSP1STATbits.R_nW == 1) {
            // Read
            // Process last command
            if(I2C_RX_CMD == CMD2_GET_MODULE_INDEX) {
                SSP1BUF = MODULE_INDEX_RF_RECEIVER;
            } else if (I2C_RX_CMD == CMD2_GET_DATA) {
                unsigned char dx = d0 * 1 + d1 * 2 + d2 * 4 + d3 * 8;
                SSP1BUF = dx;
            }
            
            Delay_Xms(1);
            
            // Release clock
            SSP1CON1bits.CKP = 1;
           
            // Wait for master's acknowledge
            while(!PIR3bits.SSP1IF);
            PIR3bits.SSP1IF = 0;
            
            // Check ack or nack to send more data
            while(!SSP1CON2bits.ACKSTAT) {
                // While ACK, send dummy value
                SSP1BUF = 0xFF;
                
                Delay_Xms(1);

                // Release clock
                SSP1CON1bits.CKP = 1;

                // Wait for master's acknowledge
                while(!PIR3bits.SSP1IF);
                PIR3bits.SSP1IF = 0;
            }
        } else {
            // Write
            // Wait for new data received
            while(!SSP1STATbits.BF);
            // Send acknowledge
            I2C_Slave_Send_ACK(0);
            // Read command
            I2C_RX_CMD = SSP1BUF;
        }
    }
}

/* END OF FILE ****************************************************************/
