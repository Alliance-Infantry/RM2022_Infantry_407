#ifndef __GIMBAL_H
#define __GIMBAL_H

#include "main.h"

typedef struct 
{
	int Yaw_Angle_Init;
	int Pitch_Angle_Init;
	int Pitch_Angle_Max;
	int Pitch_Angle_Min;
} Init_Angle_Data;

void Gimbal_Init();

//上一中值角度
extern short Angle_Last;
//初始角度
extern short Init_Angle;
//原始Yaw角
extern short Origin_Init_Yaw_Angle;
//原始Pitch角
extern short Origin_Init_Pitch_Angle;

void Encoder_Data_Process(CAN_Data_TypeDef *encoder_data,short init_angle);

#endif