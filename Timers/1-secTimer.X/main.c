/*
 * File:   main.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 21, 2022, 12:38 PM
 */


#include <xc.h>
#include "main.h"
#include "timers.h"
#pragma config WDTE=OFF
static void init_config(void) {
    LED_ARRAY1 = 0x00;
    LED_ARRAY1_DDR = 0x00;
    
    init_timer0();
    
    /* Enable all the Global Interrupts */
    GIE = 1;
}

void main(void) {
    init_config();

    while (1) {
        ;
    }
    return;
}
