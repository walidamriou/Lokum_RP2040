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
#include "config.h"

int main() {

    const uint led_pin = raspberrypi_pico_led;

    // Initialize LED pin
    gpio_init(led_pin); // Initialise a GPIO for (enabled I/O and set func to GPIO_FUNC_SIO)
    gpio_set_dir(led_pin, GPIO_OUT); // Set a single GPIO direction

    // Initialize chosen serial port
    // Initialize all of the present standard stdio types that are linked into the binary.
    stdio_init_all();

    // Loop forever
    while (true) {
        // Blink LED
        printf("Raspberry pi pico LED Blink\r\n");
        gpio_put(led_pin, true); // Drive a single GPIO high/low
        sleep_ms(led_on_2s); // Wait for the given number of milliseconds before returning
        gpio_put(led_pin, false); // // Drive a single GPIO high/low
        sleep_ms(led_off_3s); // Wait for the given number of milliseconds before returning
    }
}