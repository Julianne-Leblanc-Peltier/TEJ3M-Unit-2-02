// Copyright (c) 2025 Julianne Leblanc-Peltier All rights reserved
//
// Created by: Julianne Leblanc-Peltier
// Created on: Feb 2025
// This program lights up an LED on a raspberry pi, increasing the time variable by a second in each loop

int blinkTime = 1000; // set variable to 1000
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  blinkTime = blinkTime + 1000; // adds 1 second (or 1000 ms) to variable
}
