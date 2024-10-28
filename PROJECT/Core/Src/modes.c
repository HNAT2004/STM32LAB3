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
int time_set = 0;

int current_mode = 1;

void mode_1(void){
	fsm_automatic_run_X();
	fsm_automatic_run_Y();
	updateBuffer(clock_X, clock_Y);
	countdown();
}

void mode_2(void){
	time_set = time_for_red;
	modifyRedLED();
	if (isButton2Pressed()){
		time_set++;
		if (time_set > 99){
			time_for_red = 0;
		}
	}
	if (isButton3Pressed()){
		time_for_red = time_set;
	}
}

void mode_3(void){
	time_set = time_for_yellow;
	modifyYellowLED();
	if (isButton2Pressed()){
		time_set++;
		if (time_set > 99){
			time_for_yellow = 0;
		}
	}
	if (isButton3Pressed()){
		time_for_yellow = time_set;
	}
}

void mode_4(void){
	time_set = time_for_green;
	modifyGreenLED();
	if (isButton2Pressed()){
		time_set++;
		if (time_set > 99){
			time_for_green = 0;
		}
	}
	if (isButton3Pressed()){
		time_for_green = time_set;
	}
}

void change_mode(void){
	if (isButton1Pressed()){
		current_mode++;
		if (current_mode > 4){
			current_mode = 1;
			setTimer_X(time_for_red * 100);
			setTimer_Y(time_for_green * 100);
			clock_X = time_for_red;
			clock_Y = time_for_green;
		}
	}
}

void run_traffic_light(void){
	switch(current_mode){
	case 1:
		mode_1();
		change_mode();
		break;
	case 2:
		mode_2();
		change_mode();
		break;
	case 3:
		mode_3();
		change_mode();
		break;
	case 4:
		mode_4();
		change_mode();
		break;
	default:
		break;
	}
}
