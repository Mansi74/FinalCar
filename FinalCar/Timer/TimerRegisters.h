#ifndef TIMERREGISTERS_H_
#define TIMERREGISTERS_H_

typedef enum
	{
		CS00 ,  //pin 0
		CS01 ,  // pin 1
		CS02 ,  // pin2
		WGM01,   // pin3
		COM00,  // pin4
		COM01,  // pin5
		WGM00,  // pin6
		FOC0    // pin 7
	}Timer_TCCR0_Pin; // TCCR0 CONTROL PINS

typedef enum
	{

		No_Prescaler,
		Prescaler_8,
		Prescaler_64,
		Prescaler_256,
		Prescaler_1024,

	}Timer_Prescaler; // Enum for the pre-scalar values to set it using the control pins

typedef enum
	{
		TOV0, // Pin 0
		OCF0   // Pin 1
	}TIFR_STATUS_PINS; // To detect the overflow flag

typedef enum
	{
		Nomral ,
		CTC,
		Fast_PWM,
		Phase_Correct_PWM
	}Timer_Mode; // Timer Modes

/*Handmade library of the registers*/

#define TIMSK *((volatile uint8_t*)(0x59))
#define TIFR *((volatile uint8_t*)0x58)
#define TCCR0 *((volatile uint8_t*)(0x53))
#define TCNT0 *((volatile uint8_t*)(0x52))
#define OCR0 *((volatile uint8_t*)(0x5C))



#endif /* TIMERREGISTERS_H_ */