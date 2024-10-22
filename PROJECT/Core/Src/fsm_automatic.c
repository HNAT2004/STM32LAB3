/*
 * fsm_automatic.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */
#include "fsm_automatic.h"

int clock_X = 0;
int clock_Y = 0;

void countdown(void){
	if(timer_flag_3 == 1){
		clock_X--;
		clock_Y--;
		setTimer_Clock(100);
	}
}

void fsm_automatic_run_X(void){
	switch(status_X){
	case INIT:
		HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_SET);
		status_X = AUTO_RED_X;
		clock_X = 5;
		setTimer_X(500);
		break;

	case AUTO_RED_X:
		HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_SET);

		if (timer_flag_1 == 1){
			status_X = AUTO_GREEN_X;
			clock_X = 3;
			setTimer_X(300);
		}
		break;

	case AUTO_YELLOW_X:
		HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_SET);

		if (timer_flag_1 == 1){
			status_X = AUTO_RED_X;
			clock_X = 5;
			setTimer_X(500);
		}
		break;

	case AUTO_GREEN_X:
		HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, GPIO_PIN_RESET);

		if (timer_flag_1 == 1){
			status_X = AUTO_YELLOW_X;
			clock_X = 2;
			setTimer_X(200);
		}
		break;

	default:
		break;
	}
}

void fsm_automatic_run_Y(void){
	switch(status_Y){
	case INIT:
		HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_SET);
		status_Y = AUTO_GREEN_Y;
		clock_Y = 3;
		setTimer_Y(300);

	case AUTO_RED_Y:
		HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_SET);

		if (timer_flag_2 == 1){
			status_Y = AUTO_GREEN_Y;
			clock_Y = 3;
			setTimer_Y(300);
		}
		break;

	case AUTO_YELLOW_Y:
		HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_SET);

		if (timer_flag_2 == 1){
			status_Y = AUTO_RED_Y;
			clock_Y = 5;
			setTimer_Y(500);
		}
		break;

	case AUTO_GREEN_Y:
		HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, GPIO_PIN_RESET);

		if (timer_flag_2 == 1){
			status_Y = AUTO_YELLOW_Y;
			clock_Y = 2;
			setTimer_Y(200);
		}
		break;

	default:
		break;
	}
}
