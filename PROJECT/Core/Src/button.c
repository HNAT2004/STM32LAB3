/*
 * button.c
 *
 *  Created on: Oct 20, 2024
 *      Author: ADMIN
 */
#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int timerForKeyPress = 200;

void subKeyProcess(void){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void getKeyInput(void){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin); //Read current signal of button
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){	//Debounce
		if (KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){
				//TODO
				subKeyProcess();
				timerForKeyPress = 200;
			}
		}
		else{
			timerForKeyPress--;
			if (timerForKeyPress == 0){
				KeyReg3 = NORMAL_STATE;
			}
		}
	}
}

