/*
 * modes.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */
#include "modes.h"

void mode_1(void){
	fsm_automatic_run();
	if (timer_flag_0 == 1){
		setTimer(100);
		second_X--;
		second_Y--;
	}
	if (timer_flag_1 == 1){
		setTimer_X(1);
		updateBuffer();
	}
	if (timer_flag_2 == 1){
		setTimer_Y(1);
		updateBuffer();
	}
}
void mode_2(void);
void mode_3(void);
void mode_4(void);
