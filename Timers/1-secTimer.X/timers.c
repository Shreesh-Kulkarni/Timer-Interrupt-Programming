/*
 * File:   timers.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 21, 2022, 12:38 PM
 */


#include <xc.h>

void init_timer0(void)
{
    /* Setting the internal clock source */
    T0CS = 0;
    
    /* Assigning the prescaler to Watchdog Timer */
    PSA = 1;

    TMR0 = 6;//This sets the initial point of the timer to start from its 6th tick, so that we exactly get 1 second duration
    /*Setting TMR0 as 6 enables us to cause an overflow and generate and interrupt after only 250 ticks*/
    /* The timer interrupt is enabled */
    TMR0IE = 1;
}
