/*
 * modify.c
 *
 *  Created on: Oct 24, 2024
 *      Author: ADMIN
 */
#include "modify.h"
#include "display7SEG.h"

void modifyRedLED(void){
	int clock_X = 5;
	int clock_Y = 5;
	HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_SET);
	updateBuffer(clock_X, clock_Y);
	if (timer_flag_5 == 1){
		HAL_GPIO_TogglePin(RED_X_GPIO_Port, RED_X_Pin);
		HAL_GPIO_TogglePin(RED_Y_GPIO_Port, RED_Y_Pin);
		setTimer(50);
	}
}
void modifyYellowLED(void){
	int clock_X = 2;
	int clock_Y = 2;
	HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_SET);
	updateBuffer(clock_X, clock_Y);
	if (timer_flag_5 == 1){
		HAL_GPIO_TogglePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin);
		HAL_GPIO_TogglePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin);
		setTimer(50);
	}
}
void modifyGreenLED(void){
	int clock_X = 3;
	int clock_Y = 3;
	HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_SET);
	updateBuffer(clock_X, clock_Y);
	if (timer_flag_5 == 1){
		HAL_GPIO_TogglePin(GREEN_X_GPIO_Port, GREEN_X_Pin);
		HAL_GPIO_TogglePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin);
		setTimer(50);
	}
}
