#include "rudder.h"
Rudder_TypeDef Rudder_Data;
char Is_Rudder = false;


//舵初始化
void Rudder_Init()
{
	//舵轮组PID
	for(int i = 0;i<4;i++)
	{	
		Pid_Reset(&PID_Rudder_Angle[i]);
		Pid_Set(&PID_Rudder_Angle[i],300.0f,0.0f,0,30000,500,5000,30000,1,5000,0,0);
		Pid_Reset(&PID_Rudder_Speed[i]);
		Pid_Set(&PID_Rudder_Speed[i],100.0f,0.0f,0,30000,500,5000,30000,1,5000,0,0);
	}
	
	//舵的初始角度标定
	Encoder_Data_Process(&CAN_Rudder[0],6193);
	Encoder_Data_Process(&CAN_Rudder[1],3470);
	Encoder_Data_Process(&CAN_Rudder[2],6135);
	Encoder_Data_Process(&CAN_Rudder[3],782);
}