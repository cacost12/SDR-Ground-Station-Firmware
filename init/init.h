/*******************************************************************************
*                                                                              *
* FILE:                                                                        *
* 		init.h                                                                 *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Contains initialization routines for MCU core and peripherals          *
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INIT_H 
#define INIT_H

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------------------------------------------------------
 Standard Includes                                                              
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 Project Includes                                                               
------------------------------------------------------------------------------*/
#include "main.h"


/*------------------------------------------------------------------------------
 Function prototypes                                                          
------------------------------------------------------------------------------*/
void SystemClock_Config( void );
void GPIO_Init         ( void );
void XBee_UART_Init    ( void );
void USB_UART_Init     ( void );
void RS485_UART_Init   ( void );


#ifdef __cplusplus
}
#endif
#endif /* INIT_H */

/*******************************************************************************
* END OF FILE                                                                  *
*******************************************************************************/