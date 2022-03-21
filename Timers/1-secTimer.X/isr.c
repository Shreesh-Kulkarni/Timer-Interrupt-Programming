/*
 * File:   isr.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 21, 2022, 12:38 PM
 */


#include <xc.h>
#include "main.h"

void __interrupt() isr(void)
{
    static unsigned int count = 0; // 2B
    
    if (TMR0IF == 1)//interrupt is generated
    {
        /* TMR0 Register value + 6 (offset count to get 250 ticks) + 2 Inst Cycle */
        TMR0 =6;
       
 
        if (++count == 20000)
        {
            count = 0;
            
            LED1 = !LED1;
        }
        
        TMR0IF = 0;
    }
}