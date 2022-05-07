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

//��һ��ֵ�Ƕ�
extern short Angle_Last;
//��ʼ�Ƕ�
extern short Init_Angle;
//ԭʼYaw��
extern short Origin_Init_Yaw_Angle;
//ԭʼPitch��
extern short Origin_Init_Pitch_Angle;

void Encoder_Data_Process(CAN_Data_TypeDef *encoder_data,short init_angle);

#endif