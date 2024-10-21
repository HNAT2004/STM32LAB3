/*
 * software_timer.c
 *
 *  Created on: Oct 20, 2024
 *      Author: ADMIN
 */
int timer_flag_1 = 0;
int timer_flag_2 = 0;

int timer_counter_1 = 0;
int timer_counter_2 = 0;

void setTimer_X(int duration){
	timer_counter_1 = duration;
	timer_flag_1 = 0;				//Start count-down
}

void setTimer_Y(int duration){
	timer_counter_2 = duration;
	timer_flag_2 = 0;				//Start count-down
}

void timer_run(void){
	if(timer_counter_1 > 0){
		timer_counter_1--;
		if(timer_counter_1 <= 0){
			timer_flag_1 = 1;		//Time's up
		}
	}
	if(timer_counter_2 > 0){
		timer_counter_2--;
		if(timer_counter_2 <= 0){
			timer_flag_2 = 1;		//Time's up
		}
	}
}
