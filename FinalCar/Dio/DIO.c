#include "DIO.h"




void Dio_SetPortDirection(Dio_Port_Number port_number ,Dio_Direction direction)
{
	if (Output == direction)
	{
		
		switch (port_number)
		{
			case PA : DDRA = 0xFF;break;
			case PB : DDRB = 0xFF;break;
			case PC : DDRC = 0xFF;break;
			case PD : DDRD = 0xFF;break;
		}
	}
	else if( Input == direction)
	{
		switch (port_number)
		{
			case PA : DDRA = 0x00;break;
			case PB : DDRB = 0x00;break;
			case PC : DDRC = 0x00;break;
			case PD : DDRD = 0x00;break;
		}
	}
}
/*
  to set the value for the whole port
*/
void Dio_SetPortValue(Dio_Port_Number port_number, uint8_t value)
{
	switch (port_number)
	{
		case PA: PORTA_DATA = value;break;
		case PB: PORTB_DATA = value;break;
		case PC: PORTC_DATA = value;break;
		case PD: PORTD_DATA = value;break;
	}
}
/*
to set the current direction for a certain pin
*/
void Dio_SetPinDirection(Dio_Port_Number port_number ,Dio_Pin_Number pin_number , Dio_Direction direction) 
{
	if ( (port_number <= PD) && (pin_number <= Pin7))
	{
		if (Output == direction)
		{
				switch (port_number)
				{
					case PA : DDRA |= (1<<(pin_number)) ; break;
					case PB : DDRB |= (1<<(pin_number)); break;
					case PC : DDRC |= (1<<(pin_number)); break;
					case PD : DDRD |= (1<<(pin_number)); break;
				}
		}
		else if (Input == direction)
		{
				switch (port_number)
				{
					case PA : DDRA &= ~(1<<(pin_number)) ; break;
					case PB : DDRB &= ~(1<<(pin_number)); break;
					case PC : DDRC &= ~(1<<(pin_number)); break;
					case PD : DDRD &= ~(1<<(pin_number)); break;
				}
		}
	}
}
/*
 to set the value for a certain pin
*/
void Dio_SetPinValue(Dio_Port_Number port_number ,Dio_Pin_Number pin_number , Dio_Value value)
{
		if ( (port_number <= PD) && (pin_number <= Pin7))
		{
				if (value == High)
				{
					switch (port_number)
					{
						case PA : PORTA_DATA |= (1<<(pin_number)) ; break;
						case PB : PORTB_DATA |= (1<<(pin_number)); break;
						case PC : PORTC_DATA |= (1<<(pin_number)); break;
						case PD : PORTD_DATA |= (1<<(pin_number)); break;
					}
				}
				else if (value == Low)
				{
					switch (port_number)
					{
						case PA : PORTA_DATA &= ~(1<<(pin_number)) ; break;
						case PB : PORTB_DATA &= ~(1<<(pin_number)); break;
						case PC : PORTC_DATA &= ~(1<<(pin_number)); break;
						case PD : PORTD_DATA &= ~(1<<(pin_number)); break;
					}
				}
		}
}
/*
to get the value on the pin
*/
Dio_Value Dio_GetPinValue(Dio_Port_Number port_number ,Dio_Pin_Number pin_number)
{
	Dio_Value h;
	
	if ( (port_number <= PD) && (pin_number <= Pin7))
	{

			switch (port_number)
		    {
									case PA : h = (((PINA) >> (pin_number)) & 0x01); break;
									case PB : h = (((PINB) >> (pin_number)) & 0x01); break;
									case PC : h = (((PINC	) >> (pin_number)) & 0x01); break;
									case PD : h = (((PIND) >> (pin_number)) & 0x01); break;
			}
		return h ;
}
}
