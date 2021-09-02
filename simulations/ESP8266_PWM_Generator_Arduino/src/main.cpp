/*
 ********************************************************************
  ESP8266 PWM Generator Arduino
  Implement PWM generator for Espressif Systems ESP8266 boards by Arduino framework  

  Github: https://github.com/walidamriou/ESP32_PWM_Generator_Arduino
  Copyright © 2020 Walid Amriou
  Last update: October 2020
 ********************************************************************
*/

#include <Arduino.h>
#include <ESP8266WiFi.h>

uint8_t LEDpin = 2; //GPIO02 (D4)

void setup(){
  Serial.begin(115200);
  pinMode(LEDpin, OUTPUT);      // sets the digital pin as output
}

void loop(){
  digitalWrite(LEDpin, HIGH);   // sets the LED on
  delay(2000);   // waits for a 2 seconds
  digitalWrite(LEDpin, LOW);    // sets the LED off
  delay(2000); // waits for a 2 seconds
}


 
