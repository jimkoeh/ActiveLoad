/** $Id:  $
  * \file
  * \author  $Author:  $
  * \version $Revision:  $
  * \project RFM12-OOK
  *
  *
  *
  * (C) 2013 by André Heßling
  */

#ifndef SYSTIMER_H_
#define SYSTIMER_H_

/*----------------------------------------------------------------------------*\
** Include files                                                              **
**                                                                            **
\*----------------------------------------------------------------------------*/
#include "stm32f0xx.h"


/*----------------------------------------------------------------------------*\
** Definitions                                                                **
**                                                                            **
\*----------------------------------------------------------------------------*/
/** @addtogroup /RFM12-OOK/tools/systimer.h
  * @{
  */



/*----------------------------------------------------------------------------*\
** Structures                                                                 **
**                                                                            **
\*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*\
** Variables                                                                  **
**                                                                            **
\*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*\
** Function prototypes                                                        **
**                                                                            **
\*----------------------------------------------------------------------------*/
uint32_t ustimer_get();

void ustimer_init();

void delay_us(unsigned us);

void delay_ms(unsigned ms);

void mstimer_init(void);

uint32_t mstimer_get(void);

void mstimer_delay(uint32_t ms);

uint64_t get_uptime_us();

uint64_t get_uptime_ms();

/**
  * @}
  */

#endif /* SYSTIMER_H_ */
