/*
 * display7SEG.h
 *
 *  Created on: Oct 21, 2024
 *      Author: ADMIN
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#include "global.h"

extern int second_X;
extern int second_Y;

void display7SEG_X(int number);
void display7SEG_Y(int number);
void update7SEG(int index);
void updateBuffer(void);

#endif /* INC_DISPLAY7SEG_H_ */
