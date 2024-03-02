#include"../include/gpio.h"
#include"../include/switch.h"
#include"../lib/std_types.h"


Switch_tenu_ErrorStatus Switch_enuInit(void)
{
	Switch_tenu_ErrorStatus LocalErrorStatus = Switch_enuOK;

	u8 LocalIterator;
	GPIO_tsrt_PortConfig_t GPIO_Switch;

	for (LocalIterator =0; LocalIterator< Switch_enu_Numbers; LocalIterator++)
	{
		GPIO_Switch.GPIO_Port = Switch_tstr_Config[LocalIterator].Switch_Port;
		GPIO_Switch.GPIO_Pin = Switch_tstr_Config[LocalIterator].Switch_Pin;
		GPIO_Switch.GPIO_Mode = Switch_tstr_Config[LocalIterator].Switch_PUPD;

		GPIO_enuInit(&GPIO_Switch);
	}
	return LocalErrorStatus;
}
/***********************************************************************************/

Switch_tenu_ErrorStatus Switch_enuGetSwitchState (u8 Cpy_u8Port, u16 Cpy_u16Pin , u16 *Add_u16State)
{
	Switch_tenu_ErrorStatus LocalErrorStatus = Switch_enuOK;

	u8 LocalIterator;
	u8 LocalCounter=0;

	GPIO_enuGetPinValue(Switch_tstr_Config[Cpy_u8Port].Switch_Port,Switch_tstr_Config[Cpy_u16Pin].Switch_Pin, Add_u16State);

	return LocalErrorStatus;
}
