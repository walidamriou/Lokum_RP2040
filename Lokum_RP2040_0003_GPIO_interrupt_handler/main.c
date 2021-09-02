/**
 * @file main.c
 * @brief Main file of the project
 * 
 * @author Walid Amriou
 * @date 08/30/2021
 * 
 * This project blink the led on Raspberry pi pico and print "Raspberry pi pico LED Blink" every Blink
 * (The LED ON for 1s and OFF for 1s)
 * 
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// Interrupt Handler
void gpio_callback();

int main() {
    // Initialize chosen serial port
    // Initialize all of the present standard stdio types that are linked into the binary.
    stdio_init_all();

    printf("Hello GPIO IRQ\n");

    // Enable interrupts for specified GPIO
    // gpio_set_irq_enabled_with_callback(gpio,events,enabled,callback)
    gpio_set_irq_enabled_with_callback(2, GPIO_IRQ_EDGE_RISE, true, &gpio_callback);

    // Wait forever
    while (1);

    return 0;
}

void gpio_callback() {
    printf("GPIO interrupt.\n");
}



