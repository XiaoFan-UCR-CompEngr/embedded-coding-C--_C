#include <iostream>
#include <stdio.h>
#include <stdint.h>
struct status_of_LEDS
{
    int led1 : 1;
    int led2 : 1;
    int led3 : 1;
    int led4 : 1;
    int led5 : 1;
    int led6 : 1;
    int led7 : 1;
    int led8 : 1;
};

int main()
{
    struct status_of_LEDS LED1;
    std::cout<<"Size of "<< sizeof(LED1);
}