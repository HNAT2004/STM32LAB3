/*
 * display7SEG.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */
#include "display7SEG.h"

int index_led = 0;
int led_buffer_X[2] = {0, 0};
int led_buffer_Y[2] = {0, 0};

void display7SEG_X(int number){
	switch(number){
	case 0:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, SET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, SET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, SET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, SET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, SET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, SET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, SET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, SET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, SET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, SET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, SET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, SET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_X_GPIO_Port, SEG0_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_X_GPIO_Port, SEG1_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_X_GPIO_Port, SEG2_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_X_GPIO_Port, SEG3_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_X_GPIO_Port, SEG4_X_Pin, SET);
		HAL_GPIO_WritePin(SEG5_X_GPIO_Port, SEG5_X_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_X_GPIO_Port, SEG6_X_Pin, RESET);
		break;
	default:
		break;
	}
}

void display7SEG_Y(int number){
	switch(number){
	case 0:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_Y_GPIO_Port, SEG0_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_Y_GPIO_Port, SEG1_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_Y_GPIO_Port, SEG2_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_Y_GPIO_Port, SEG3_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_Y_GPIO_Port, SEG4_Y_Pin, SET);
		HAL_GPIO_WritePin(SEG5_Y_GPIO_Port, SEG5_Y_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_Y_GPIO_Port, SEG6_Y_Pin, RESET);
		break;
	default:
		break;
	}
}

void update7SEG(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_X_GPIO_Port, EN0_X_Pin, RESET);
		HAL_GPIO_WritePin(EN1_X_GPIO_Port, EN1_X_Pin, SET);
		HAL_GPIO_WritePin(EN0_Y_GPIO_Port, EN0_Y_Pin, RESET);
		HAL_GPIO_WritePin(EN1_Y_GPIO_Port, EN1_Y_Pin, SET);
		display7SEG_X(led_buffer_X[0]);
		display7SEG_Y(led_buffer_Y[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_X_GPIO_Port, EN0_Y_Pin, SET);
		HAL_GPIO_WritePin(EN1_X_GPIO_Port, EN1_Y_Pin, RESET);
		HAL_GPIO_WritePin(EN0_Y_GPIO_Port, EN0_Y_Pin, SET);
		HAL_GPIO_WritePin(EN1_Y_GPIO_Port, EN1_Y_Pin, RESET);
		display7SEG_X(led_buffer_X[1]);
		display7SEG_Y(led_buffer_Y[1]);
		break;
	default:
		break;
	}
}

void updateBuffer(void){
	if (second1_X > 9){
		second1_X = 0;
		second0_X++;
		if (second0_X > 9) second0_X = 0;
	}
	if (second1_Y > 9){
		second1_Y = 0;
		second0_Y++;
		if (second0_Y > 9) second0_Y = 0;
	}
	update7SEG(index_led++);
	if (index_led > 1) index_led = 0;
}
