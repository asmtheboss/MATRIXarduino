#include <Arduino.h>
#include <788BSmatrixSetup.h>
#include <simbolos.h>
#include <LCD.h>


int a = 0;
int boton = PB14;

void setup() {
  lcd.begin(16,2);
  matrixSetup();
  pinMode(boton, INPUT);

}

void loop() {


}
