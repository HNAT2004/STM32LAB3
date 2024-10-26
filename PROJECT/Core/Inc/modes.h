/*
 * modes.h
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */

#ifndef INC_MODES_H_
#define INC_MODES_H_

#include "global.h"
#include "fsm_automatic.h"
#include "display7SEG.h"

extern int current_mode;
extern int time_for_red;
extern int time_for_yellow;
extern int time_for_green;

void mode_1(void);
void mode_2(void);
void mode_3(void);
void mode_4(void);
void run_traffic_light(void);

#endif /* INC_MODES_H_ */
