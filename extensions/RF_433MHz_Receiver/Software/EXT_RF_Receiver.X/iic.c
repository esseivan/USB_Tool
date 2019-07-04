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
// Attente
void I2C_Master_Wait(void);
// Restart
void I2C_Master_RepeatedStart(void);
// Start
void I2C_Master_Start(void);
// Stop
void I2C_Master_Stop(void);
// Read
unsigned char I2C_Master_Read(unsigned char Ack);
// Write
void I2C_Master_Write(unsigned char d);

//##############################################################################
// Fonctions (implémentation)
//##############################################################################

//******************************************************************************
// Initialisation en mode Master 
//******************************************************************************

void I2C_Master_Init(void) {
    // Set SCL and SDA as inputs
    SCL1_SetDigitalInput();
    SCL1_SetDigitalMode();
    SDA1_SetDigitalInput();
    SDA1_SetDigitalMode();
    // R_nW write_noTX; P stopbit_notdetected; S startbit_notdetected; BF RCinprocess_TXcomplete; SMP High Speed; UA dontupdate; CKE disabled; D_nA lastbyte_address; 
    SSP1STAT = 0x00;
    // SSPEN enabled; WCOL no_collision; CKP Idle:Low, Active:High; SSPM FOSC/4_SSPxADD_I2C; SSPOV no_overflow; 
    SSP1CON1 = 0x28;
    SSP1CON2 = 0x00;
    // ACKTIM ackseq; SBCDE disabled; BOEN disabled; SCIE disabled; PCIE disabled; DHEN disabled; SDAHT 100ns; AHEN disabled; 
    SSP1CON3 = 0x00;
    // SSP1ADD 100kHz 
    SSP1ADD = 0x3b;

    PIR3bits.BCL1IF = 0;

    PIE3bits.BCL1IE = 1;
}

void I2C_Slave_Init(void) {
    // Set SCL and SDA as inputs
    SCL1_SetDigitalInput();
    SCL1_SetDigitalMode();
    SDA1_SetDigitalInput();
    SDA1_SetDigitalMode();
    // R_nW write_noTX; P stopbit_notdetected; S startbit_notdetected; BF RCinprocess_TXcomplete; SMP High Speed; UA dontupdate; CKE disabled; D_nA lastbyte_address; 
    SSP1STAT = 0x00;
    // SSPEN enabled; WCOL no_collision; CKP Idle:Low, Active:High; SSPM I2C Slave (7-bit Addressing); SSPOV no_overflow; 
    SSP1CON1 = 0x26;
    SSP1CON2 = 0x00;
    // ACKTIM ackseq; SBCDE enabled; BOEN disabled; SCIE enabled; PCIE disabled; DHEN disabled; SDAHT 100ns; AHEN disabled; 
    SSP1CON3 = 0x24;
    // Device address    
    SSP1ADD = I2C_SLAVE_ADDRESS << 1;
    // Address mask
    SSP1MSK = I2C_SLAVE_MASK;

    SSP1CON3bits.SCIE = 1;
    
    PIR3bits.BCL1IF = 0;

    PIE3bits.BCL1IE = 1;
   
    PIE3bits.SSP1IE = 1;
}

//******************************************************************************
// Attente
//******************************************************************************

void I2C_Master_Wait(void) {
    while ((SSP1STAT & 0x04) || (SSP1CON2 & 0x1F)); //Transmit is in progress
}
//******************************************************************************
// Restart
//******************************************************************************

void I2C_Master_RepeatedStart(void) {
    I2C_Master_Wait();
    SSP1CON2bits.RSEN = 1; //Initiate repeated start condition
}
//******************************************************************************
// Start
//******************************************************************************

void I2C_Master_Start(void) {
    I2C_Master_Wait();
    SSP1CON2bits.SEN = 1; //Initiate start condition
}
//******************************************************************************
// Stop
//******************************************************************************

void I2C_Master_Stop(void) {
    I2C_Master_Wait();
    SSP1CON2bits.PEN = 1; //Initiate stop condition
}
//******************************************************************************
// Read
//******************************************************************************

unsigned char I2C_Master_Read(unsigned char Ack) {
    unsigned char temp;
    I2C_Master_Wait();
    SSP1CON2bits.RCEN = 1;
    I2C_Master_Wait();
    temp = SSP1BUF; //Read data from SSPBUF
    I2C_Master_Wait();
    SSP1CON2bits.ACKDT = Ack ? 0 : 1; //Acknowledge bit
    SSP1CON2bits.ACKEN = 1; //Acknowledge sequence
    //while(SSP1CON2bits.ACKEN == 1);
    return temp;
}
//******************************************************************************
// Write
//******************************************************************************

void I2C_Master_Write(unsigned char d) {
    I2C_Master_Wait();
    SSP1BUF = d; //Write data to SSPBUF
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

    for (unsigned char i = 0; i < Length; i++) {
        I2C_Master_Write(Data[i]);
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
    I2C_Master_Write(Target);

    I2C_Master_RepeatedStart();

    I2C_Master_Write(Target | 0x01);
    unsigned char result = I2C_Master_Read(0);
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
    I2C_Master_Write(Target);

    I2C_Master_RepeatedStart();

    I2C_Master_Write(Target | 0x01);

    for (unsigned char i = 0; i < Length; i++) {
        Output[i] = I2C_Master_Read(((i + 1) == Length) ? 0 : 1);
    }
    Output[Length] = 0x00;

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
    I2C_Master_Start();
    I2C_Master_Write(Target);
    I2C_Master_Write(CMD);

    I2C_Master_RepeatedStart();

    I2C_Master_Write(Target | 0x01);
    unsigned char result = I2C_Master_Read(0);
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
        Output[i] = I2C_Master_Read(((i + 1) == Length) ? 0 : 1);
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
            // Process last command
            if(I2C_RX_CMD == CMD2_GET_MODULE_INDEX) {
                SSP1BUF = MODULE_INDEX_RF_RECEIVER;
            } else if (I2C_RX_CMD == CMD2_GET_DATA) {
                unsigned char dx = d0 * 1 + d1 * 2 + d2 * 4 + d3 * 8;
                SSP1BUF = dx;
            }
            
            // Wait for acknowledge sent
            while(!PIR3bits.SSP1IF);
            PIR3bits.SSP1IF = 0;
            // Check ack or nack to send more data
            
        } else {
            // Write
            SSP1CON1bits.CKP = 1;
            // Wait for new data received
            while(!SSP1STATbits.BF);
            // Send acknowldege
            SSP1CON2bits.ACKDT = 0; //Acknowledge bit
            SSP1CON2bits.ACKEN = 1; //Acknowledge sequence
            // Wait for acknowledge sent
            while(!PIR3bits.SSP1IF);
            PIR3bits.SSP1IF = 0;
            // Read command
            I2C_RX_CMD = SSP1BUF;
        }
    }
}

/* END OF FILE ****************************************************************/
