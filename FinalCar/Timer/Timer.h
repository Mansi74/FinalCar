#ifndef TIMER_H_
#define TIMER_H_
#include "TimerRegisters.h"
/*
 Function used to choose the mode of the timer 
*/
void Timer_SetMode(Timer_Mode Mode );

/*
Function used to set the pres_scaler to a certain value
*/
void Timer_start(Timer_Prescaler Prescaler);
 
 /*
 To stop the timer
 */
void Timer_Stop()

#endif /* TIMER_H_ */