/*
 * File:   isr.c
 * Author: Shreesh Kulkarni
 *
 * Created on March 22, 2022, 12:09 PM
 */


#include <xc.h>
#include "main.h"

void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR2IF == 1)
    {
        if (++count == 1250) // 1sec
        {
            count = 0;
            
            LED1 = !LED1;
        }
        
        TMR2IF = 0;
    }
}