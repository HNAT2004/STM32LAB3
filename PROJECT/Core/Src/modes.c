/*
 * modes.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */
#include "modes.h"
#include "fsm_automatic.h"
#include "display7SEG.h"
void mode_1(void){
	fsm_automatic_run_X();
	fsm_automatic_run_Y();
	updateBuffer_X(clock_X);
//	updateBuffer_Y(clock_Y);
	countdown();
}
void mode_2(void);
void mode_3(void);
void mode_4(void);
