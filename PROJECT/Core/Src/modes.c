/*
 * modes.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */
#include "modes.h"
#include "fsm_automatic.h"
#include "display7SEG.h"
#include "modify.h"

int time_for_red = 5;
int time_for_yellow = 2;
int time_for_green = 3;

int current_mode = 1;

void mode_1(void){
	fsm_automatic_run_X();
	fsm_automatic_run_Y();
	updateBuffer(clock_X, clock_Y);
	countdown();
}

void mode_2(void){
	modifyRedLED();
}

void mode_3(void){
	modifyYellowLED();
}

void mode_4(void){
	modifyGreenLED();
}

void change_mode(void){
	if (isButton1Pressed()){
		current_mode++;
		if (current_mode > 4){
			current_mode = 1;
		}
	}
}

void run_traffic_light(void){
	switch(current_mode){
	case 1:
		mode_1();
		break;
	case 2:
		mode_2();
		break;
	case 3:
		mode_3();
		break;
	case 4:
		mode_4();
		break;
	default:
		break;
	}
}
