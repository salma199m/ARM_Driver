#ifndef 	LED_H
#define		LED_H

#include"LEC_cfg.h"
#include"../lib/std_types.h"




typedef enum
{
	LED_enuOK=0,
	LED_enuNOK,
	LED_enuInvalidPin,
	LED_enuInvalidPort,
	LED_enuInvalidState,
	LED_enuInvalidSpeed,
	LED_enuInvalidType
}LED_tenuErrorStatus;



// Struct with LED Config
typedef struct
{
	LED_tenuLEDName LED_Name;
	LED_tenuLEDColor LED_Color;
	LED_tenuLEDPorts LED_Port;
	LED_tenuLEDPins LED_Pin;
	LED_tenuState LED_State;
	LED_tenuActiveStatus LED_ActiveStatus;
	u8 LED_Speed;
}LED_tstrConfig_t;



extern const LED_tstrConfig_t LED_tstrConfig [LED_enuLED_Count];

/******************************* APIs *********************************/
LED_tenuErrorStatus LED_enuLEDInit (void);

LED_tenuErrorStatus LED_enuSetLEDValue (u8 Led, LED_tenuActiveStatus Cpy_u8LEDVal);











#endif