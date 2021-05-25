#ifndef DIO_H_
#define DIO_H_

void Dio_SetPortDirection(Dio_Port_Number port_number ,Dio_Direction direction); // to set the current direction for the whole port
void Dio_SetPortValue(Dio_Port_Number port_number, uint8_t value); //  to set the value for the whole port
void Dio_SetPinDirection(Dio_Port_Number port_number ,Dio_Pin_Number pin_number , Dio_Direction direction) ;// to set the current direction for a certain pin
void Dio_SetPinValue(Dio_Port_Number port_number ,Dio_Pin_Number pin_number , Dio_Value  value) ;//  to set the value for a certain pin
Dio_Value Dio_GetPinValue(Dio_Port_Number port_number ,Dio_Pin_Number pin_number); // to get the value on the pin

#endif /* DIO_H_ */