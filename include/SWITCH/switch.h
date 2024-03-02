#ifndef SWITCH_H_
#define SWITCH_H_


#include "../lib/std_types.h"

// Error Status
typedef enum
{
	Switch_enuOK=0,
	Switch_enuNOK

}Switch_tenu_ErrorStatus;

// Switch Pins
typedef enum
{
	Switch_enu_Switch0=0,
    Switch_enu_Switch1  ,

	Switch_enu_Numbers
}Switch_tenuPins;


// Switch Status
typedef enum
{
	Switch_enuReleased=0,
	Switch_enuPressed
}Switch_tenuStatus;

// Switch PullUp/ PullDown
typedef enum
{
	Switch_enuPullUp=0,
	Switch_enuPullDown
}Switch_tenuPUPD;

// Switch Name
typedef enum
{
	Switch_enu_On=0,
	Switch_enu_Off,
}Switch_tenuNames;

// Struct with Switch Configurations
typedef struct
{
	u8 Switch_Port;
	u16 Switch_Pin;
	Switch_tenuNames Switch_Name;
	Switch_tenuPUPD Switch_PUPD;

}Switch_tstr_Config_t;


// Extern Array of Struct
extern const Switch_tstr_Config_t Switch_tstr_Config[Switch_enu_Numbers];











#endif SWITCH_H_