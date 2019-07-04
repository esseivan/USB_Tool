/*******************************************************************************
 * File:    iic.h
 * Author:  Esseiva Nicolas
 * Company: EMF (Ecole des Métiers de Fribourg) http://www.emf.ch
 * Desc.:   Définitions pour communication I2C
 * Date :   20170901 Création (YYYYMMDD)
 * Dernière modif. : 20180701 (YYYYMMDD) 
 ******************************************************************************/
//OK

#ifndef IIC_HEADER    
#define IIC_HEADER

#define I2C_SLAVE_ADDRESS 0x7F 
#define I2C_SLAVE_MASK    0xFF

#define MODULE_INDEX_RF_RECEIVER 0x01

#define CMD2_GET_MODULE_INDEX 0x50
#define CMD2_GET_DATA 0x51

unsigned char I2C_RX_CMD = 0;

//##############################################################################
// Fonctions (prototype)
//##############################################################################

// Initialisation en mode Master 
void I2C_Master_Init(void);
// Initialisation en mode Slave 
void I2C_Slave_Init(void);
// Envoi d'un tableau
void I2C_WriteData(unsigned char Target, unsigned char Data);
// Envoi d'un tableau
void I2C_WriteLength(unsigned char Target, unsigned char Length, unsigned char *Data);
// Demande de lecture d'un byte
unsigned char I2C_ReadData(unsigned char Target);
// Demande de lecture d'un tableau
void I2C_ReadLength(unsigned char Target, unsigned char Length, unsigned char *Output);
// Envoi d'une commande et attente d'une réponse sous forme de byte
unsigned char I2C_SendCommand(unsigned char Target, unsigned char CMD);
// Envoi d'une commande et attente d'une réponse sous forme de tableau
void I2C_SendCommand_L(unsigned char Target, unsigned char CMD, unsigned char Length, unsigned char *Output);
// Contrôle l'erreur de collision de bus
void I2C_BusCollisionISR(void);
// Retourne l'adresse avec le flag R_nW mis à 0
unsigned char GetTarget(unsigned char Address);
void I2C_Slave_ISR(void);

#endif

/* END OF FILE ****************************************************************/
