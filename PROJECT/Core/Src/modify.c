/*
 * modify.c
 *
 *  Created on: Oct 24, 2024
 *      Author: ADMIN
 */
#include "modify.h"
#include "display7SEG.h"

void modifyRedLED(void){
	setTimer(50);
	if (timer_flag_0 == 1){
		setTimer(50);
		HAL_GPIO_TogglePin(RED_X_GPIO_Port, RED_X_Pin);
		HAL_GPIO_TogglePin(RED_Y_GPIO_Port, RED_Y_Pin);
	}
}
void modifyYellowLED(void);
void modifyGreenLED(void);
