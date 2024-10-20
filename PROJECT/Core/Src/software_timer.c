/*
 * software_timer.c
 *
 *  Created on: Oct 20, 2024
 *      Author: ADMIN
 */
int timer_flag = 0;
int timer_counter = 0;

void setTimer(int duration){
	timer_counter = duration;
	timer_flag = 0;
}

void timer_run(void){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}
