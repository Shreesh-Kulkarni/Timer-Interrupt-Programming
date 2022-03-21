/*
 * File:   timers.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 21, 2022, 2:37 PM
 */


#include <xc.h>
#include "timers.h"

void init_timer0(void){
    /*Setting internal clock source*/
    T0CS=0;
    /*Assigning prescaler rate to timer0*/
    PSA=0;
    /*assigning prescaler rate to 1:16*/
    PS2=0;
    PS1=1;
    PS0=1;
    TMR0=6;
    /*enabling timer interrupt*/
    TMR0IE=1;
    
}
