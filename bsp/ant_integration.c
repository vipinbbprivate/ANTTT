/**********************************************************************************************************************
File: ant_integration.c                                                                

Description:
This is a ant_integration .c file new source code
**********************************************************************************************************************/

#include "configuration.h"

/***********************************************************************************************************************
Global variable definitions with scope across entire project.
All Global variable names shall start with "G_"
***********************************************************************************************************************/
/* New variables */
volatile u32 G_u32ANTIntegrationFlags;                 /* Global state flags */


/*--------------------------------------------------------------------------------------------------------------------*/
/* Existing variables (defined in other files -- should all contain the "extern" keyword) */
extern volatile u32 G_u32SystemFlags;                  /* From main.c */

extern volatile u32 G_u32SystemTime1ms;                /* From board-specific source file */
extern volatile u32 G_u32SystemTime1s;                 /* From board-specific source file */


/***********************************************************************************************************************
Global variable definitions with scope limited to this local application.
Variable names shall start with "SocInt_" and be declared as static.
***********************************************************************************************************************/
static u32 ANTInt_u32Timeout;                      /* Timeout counter used across states */


/*--------------------------------------------------------------------------------------------------------------------*/
/* Private Function Declarations.                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/

/**********************************************************************************************************************
Function Definitions
**********************************************************************************************************************/
/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
bool ANTIntegrationInitialize(void)
{
  return sd_ant_stack_reset() == NRF_SUCCESS;
}

/**
*   Handle the Stack Event to determine if ANT message. If 
*   ANT Message, then set event.                       
*/
void ANTIntegrationHandler()
{
    
}



/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
