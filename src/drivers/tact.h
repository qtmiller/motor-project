/*******************************************************************************************
tactometer.h

Description:
Determines revolution period (ms) and frequency (rev/sec and rev/min)

Quinn Miller
********************************************************************************************/

#ifndef __TACTOMETER_H__
#define __TACTOMETER_H__

#include "types.h"


/**************************************************************************
 *                                  Constants
 **************************************************************************/
/**************************************************************************
 *                                  Types
 **************************************************************************/
/**************************************************************************
 *                                  Prototypes
 **************************************************************************/
void TactInit(void);
void TactUpdate(void);

int GetPeriod(void);
int GetTimeSinceTick(void);
float GetRPS(void);
float GetRPM(void);


#endif
