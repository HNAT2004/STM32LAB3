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