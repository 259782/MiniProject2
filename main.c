/**
 * @file main.c
 * @author JAHNAVI JHA
 * @brief activity 1&2 main
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "led.h"
#include "user_utils.h"
#include "ADCREAD.h"

void led();
uint16_t t;

int main(void)
{ 
	led();
while(1)
    {  if(!(PIND&(1<<PD0))&& !(PIND&(1<<PD1)) ) //IF BOTH SWITCHES PRESSED
    {
        PORTB|=(1<<PB0); //LED 1
        _delay_ms(20);
		t=ADCREAD(0);

    }
    else{
        PORTB&=~(1<<PB0); //LED 0
        _delay_ms(2000);
    }
    }
return 0;
}
