#include "mbed.h"

DigitalOut led_green(LED1);
DigitalOut led_red(LED2);

InterruptIn user_button(USER_BUTTON);

float delay_on = 0.2;
float delay_off = 1.0;


int main()
{
    while(1) 
    {
        // LEDs are ON
        int user_button_state = user_button.read();
        switch(user_button_state)
        {
            case 0:
                led_red = 1;                // LED2 is ON
                wait(delay_on);
                led_red = 0;                // LED2 is OFF
                wait(delay_off);            
                break;
            case 1:
                led_green = 1;              // LED1 is ON
                wait(delay_on);
                led_green = 0;              // LED1 is OFF
                wait(delay_off);
                break;
            default:
                break;  
        }
    }
}