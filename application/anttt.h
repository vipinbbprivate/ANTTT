/**********************************************************************************************************************
File: anttt.h                                                                
**********************************************************************************************************************/

#ifndef __ANTTT_H
#define __ANTTT_H

/**********************************************************************************************************************
Type Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Constants / Definitions
**********************************************************************************************************************/
#define ANTTT_DEVICE_TYPE       (u8)20


#define ANTTT_COMMAND_ID_OFFSET         0x00
#define ANTTT_COMMAND_POSITION_OFFSET   0x01
#define ANTTT_COMMAND_SOURCE_OFFSET     0x02
#define ANTTT_COMMAND_SIZE              0x03

#define ANTTT_COMMAND_ID_MOVE           0xCC
#define ANTTT_COMMAND_ID_MOVE_RESP      0xAC   

typedef enum {ANTTT_POS1 = 0, ANTTT_POS2, ANTTT_POS3, ANTT_POS4, ANTTT_POS5, ANTTT_POS6,
              ANTTT_POS7, ANTTT_POS8, ANTTT_POS9} ANTTT_POSITIONS;


/**********************************************************************************************************************
Function Declarations
**********************************************************************************************************************/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/
void AntttHandleIncomingMessage(u8* data, u8 len);

/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
void AntttInitialize(void);



/*--------------------------------------------------------------------------------------------------------------------*/
/* Private functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/



#endif /* __ANTTT_H */


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
