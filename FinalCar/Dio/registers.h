#ifndef REGISTERS_H_
#define REGISTERS_H_
typedef unsigned char uint8_t ;
typedef unsigned int uint32 ;

typedef enum
	{
		Input, // 0
		Output // 1
	}Dio_Direction;
typedef enum
	{
		PA , // Port A
		PB ,// Port B
		PC ,// Port C
		PD // Port D
	}Dio_Port_Number;

typedef enum
	{
		Low ,//0
		High //1
	}Dio_Value;
typedef enum 
	{
	Pin0, Pin1, Pin2, Pin3, Pin4, Pin5, Pin6, Pin7
	}Dio_Pin_Number; // The numbers of the pins

/*
Handmade library of the registers
*/
#define PORTA_DATA *((volatile uint8_t*)(0x3B))
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)(0x39))

#define PORTB_DATA *((volatile uint8_t*)(0x38))
#define DDRB *((volatile uint8_t*)(0x37))
#define PINB *((volatile uint8_t*)(0x36))

#define PORTC_DATA *((volatile uint8_t*)(0x35))
#define DDRC *((volatile uint8_t*)(0x34))
#define PINC *((volatile uint8_t*)(0x33))

#define PORTD_DATA *((volatile uint8_t*)(0x32))
#define DDRD *((volatile uint8_t*)(0x31))
#define PIND *((volatile uint8_t*)(0x30))




#endif /* REGISTERS_H_ */