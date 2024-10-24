/*
 * modify.c
 *
 *  Created on: Oct 24, 2024
 *      Author: ADMIN
 */
#include "modify.h"
#include "display7SEG.h"

void modifyRedLED(void){
//	int clock_X = 5;
//	int clock_Y = 5;
//	updateBuffer(clock_X, clock_Y);
	if (timer_flag_5 == 1){
		HAL_GPIO_TogglePin(RED_X_GPIO_Port, RED_X_Pin);
		HAL_GPIO_TogglePin(RED_Y_GPIO_Port, RED_Y_Pin);
		setTimer(50);
	}
}
void modifyYellowLED(void);
void modifyGreenLED(void);
