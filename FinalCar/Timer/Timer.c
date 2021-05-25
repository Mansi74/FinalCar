#include "Timer.h"

/*
 Function used to choose the mode of the timer 
 */
void Timer_SetMode(Timer_Mode Mode )
{
	switch (Mode)
	{
	case Nomral : 
	
	break;
	
	case CTC :

		TCCR0 |= (1<<(WGM01)) ;
		break;
		
	case Fast_PWM :
	
		TCCR0 |= (1<<(WGM00)) | (1<<(WGM01));
		break;
			
	case Phase_Correct_PWM :
	
		TCCR0 |= (1<<(WGM00)) ;
	
		break;

	}
}

/*
Function used to set the pres_scaler to a certain value 
*/
void Timer_start(Timer_Prescaler Prescaler)
{

switch(Prescaler)
{
	case No_Prescaler:
	
	TCCR0 |= (1<<(CS00)) ; 
	break ;
	
	case Prescaler_8 :
	
	TCCR0 |= (1<<(CS01)) ; 
	break ;
	
	case Prescaler_64 :
	
	TCCR0 |= (1<<(CS00)) | (1<<(CS01)) ;
	break ;
		
	case Prescaler_256 :
			
	TCCR0 |= (1<<(CS02)) ;
	break ;
			
	case Prescaler_1024 :
				
	TCCR0 |= (1<<(CS00)) | (1<<(CS02));
	break ;
	
}
					
}
 
/*
To stop the timer 
*/	
void Timer_Stop()
{
	TCCR0 = 0xFF ;
}