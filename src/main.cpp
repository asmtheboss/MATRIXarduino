#include <Arduino.h>
#include <788BSmatrixSetup.h>
#include <simbolos.h>

int a = 0;
int boton = PB6;

void setup() {

  matrixSetup();
  pinMode(boton, INPUT);

}

void loop() {

if(digitalRead(boton) == HIGH){
  tick();
}
if(digitalRead(boton) == LOW){
  cruz();
}

}
