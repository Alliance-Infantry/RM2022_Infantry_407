#ifndef __SHOOT_TASK_H
#define __SHOOT_TASK_H


typedef enum
{
	SHOOT_MODE_STOP = 0,
	SHOOT_MODE_RUN,
}Shoot_Mode_Enum;


//为1则是单发，为2则是连发
typedef enum
{
	SHOOT_CMD_STOP = 0,
	SHOOT_CMD_ONCE,
	SHOOT_CMD_LONG,
}Shoot_Cmd_Enum;


#include "main.h"
void shoot_task_create();

extern Shoot_Cmd_Enum Shoot_Cmd; //发射模式，单发1 连发2
extern Shoot_Mode_Enum Shoot_Mode;

#endif