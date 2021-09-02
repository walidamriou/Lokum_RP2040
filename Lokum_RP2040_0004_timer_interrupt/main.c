/**
 * @file main.c
 * @brief Main file of the project
 * 
 * @author Walid Amriou
 * @date 08/30/2021
 * 
 * This project print "GPIO interrupt." every 2s using time
 * 
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// Interrupt Handler
bool alarm_callback();
struct repeating_timer timer;

int main() {
    // Initialize chosen serial port
    // Initialize all of the present standard stdio types that are linked into the binary.
    stdio_init_all();
    
    add_repeating_timer_ms(2000, alarm_callback, NULL, &timer);

    // Wait forever
    while (1);

    return 0;
}

bool alarm_callback() {
    printf("Timer interrupt.\n");
    return true;
}



