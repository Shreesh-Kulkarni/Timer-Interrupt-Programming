/*
 * File:   isr.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 21, 2022, 2:37 PM
 */


#include <xc.h>
#include "main.h"

void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR0IF == 1)
    {
        /* TMR0 Register value + 6 (offset count to get 250 ticks) + 2 Instruction Cycle */
        TMR0 = 6;
       
        if (++count == 1250)// 1sec 
        {
            count = 0;
            
            LED1 = !LED1;
        }
        
        TMR0IF = 0;
    }
}