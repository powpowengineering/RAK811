//**************************************************************************************************
// @Module        RAK811
// @Filename      ModuleRAK811.h
//--------------------------------------------------------------------------------------------------
// @Description   Interface of the RAK811 module.
//                
//--------------------------------------------------------------------------------------------------
// @Version       1.0.0
//--------------------------------------------------------------------------------------------------
// @Date          30.08.2021
//--------------------------------------------------------------------------------------------------
// @History       Version  Author      Comment
// XX.XX.XXXX     1.0.0    KPS         First release.
//**************************************************************************************************

#ifndef RAK811_H
#define RAK811_H



//**************************************************************************************************
// Project Includes
//**************************************************************************************************

// None.


//**************************************************************************************************
// Declarations of global (public) data types
//**************************************************************************************************

// None.


//**************************************************************************************************
// Definitions of global (public) constants
//**************************************************************************************************

// None.


//**************************************************************************************************
// Declarations of global (public) variables
//**************************************************************************************************

#define  RAK811_MODE_LoRaWAN            ('0')
#define  RAK811_MODE_LORA_P2P           ('1')
#define  RAK811_RECEIVER_MODE           ('1')
#define  RAK811_SENDER_MODE             ('2')

//**************************************************************************************************
// Declarations of global (public) functions
//**************************************************************************************************

// Init RAK811
extern void RAK811_init(void);

// Configure RAK811
extern void RAK811_confMode(const char mode);

// configure LoRaP2P parameters
extern void RAK811_confP2Pprm(const char* const freq,
                              const char spreadfactor,
                              const char bandwidth,
                              const char codingrate,
                              const char preamlen,
                              const har power);

// configure taransfer mode
extern void RAK811_confTransferMode(const char mode);

// send data
extern void RAK811_sendData(const char* data);

// send meassage to RAK811
extern void RAK811_sendMessage(const char* const message);

// parsing data
extern void RAK811_hexToAscii(const char* dataHex, char* dataAscii);




#endif // #ifndef RAK811_H

//****************************************** end of file *******************************************
