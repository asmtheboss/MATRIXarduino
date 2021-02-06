#include <Arduino.h>
#include <788BSmatrixSetup.h>
#include <LCD.h>


int a = 0;
int botonCorrecto = PB14;
int botonIncorrecto = PB15;
int buzzer = PB13;
int sensor = PB0;

boolean lcdState1 = false;
boolean matrixState1 = false;
boolean aceptada1 = false;
boolean denegada1 = false;
boolean sensor1 = false;

int aceptadaContador = 0;
int denegadaContador = 0;

unsigned long lcdBase = 0;
unsigned long matrixBase = 0;
unsigned long aceptadaBase = 0;
unsigned long denegadaBase = 0;
unsigned long accesoIrregularBase = 0;

const long lcdStop = 100;
const long matrixStop = 1;
const long aceptadaStop = 1000;
const long denegadaStop = 1000;
const long accesoIrregularStop = 1000;


void setup() {
  lcd.begin(16,2);
  pinMode(buzzer, OUTPUT);
  pinMode(sensor, INPUT);
  matrixSetup();
}

void loop() {

<<<<<<< HEAD
  if(digitalRead(botonCorrecto) == HIGH && digitalRead(botonIncorrecto) == LOW){
    aceptada1 = true;
  }
  if(digitalRead(botonCorrecto) == LOW && digitalRead(botonIncorrecto) == HIGH){
    denegada1 = true;
  }
  if(digitalRead(sensor) == LOW && digitalRead(botonCorrecto) == LOW && digitalRead(botonIncorrecto) == LOW){
    sensor1 = true;
  }

/*----------ACEPTADA----------*/

  if( aceptada1 == true){

    unsigned long aceptadaTimer = millis();

    if(aceptadaContador <= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          aceptadaParte1();
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          tickFino();
        }
      }
    }

    if(aceptadaContador >= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          aceptadaParte2();
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          tickGrueso();
        }
      }
    }

    if(aceptadaContador == 5){
      aceptada1 = false;
      aceptadaContador = 0;
    }
    if(aceptadaTimer - aceptadaBase >= aceptadaStop){
      aceptadaContador++;
      aceptadaBase = aceptadaTimer;
    }
  }

/*----------DENEGADA----------*/

  if( denegada1 == true){

    unsigned long denegadaTimer = millis();

    if(denegadaContador <= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          denegadoParte1();
          digitalWrite(buzzer, HIGH);
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          cruzFina();
        }
      }
    }

    if(denegadaContador >= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          denegadoParte2();
          digitalWrite(buzzer,LOW);
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          cruzGruesa();
        }
      }
    }

    if(denegadaContador == 5){
      denegada1 = false;
      denegadaContador = 0;
    }
    if(denegadaTimer - denegadaBase >= denegadaStop){
      denegadaContador++;
      denegadaBase = denegadaTimer;
    }
  }

/*----------SENSOR----------*/

  if( sensor1 == true){

    unsigned long denegadaTimer = millis();

    if(denegadaContador <= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          denegadoParte1();
          digitalWrite(buzzer, HIGH);
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          cruzFina();
        }
      }
    }

    if(denegadaContador >= 2.5){
      
      unsigned long lcdTimer = millis();
      unsigned long matrixTimer = millis();

      if(lcdTimer - lcdBase >= lcdStop){
        lcdBase = lcdTimer;

        if(lcdState1 == false){
          lcdState1 = true;
        }
        else{
          lcdState1 = false;
        }

        if(lcdState1 == true){
          denegadoParte2();
          digitalWrite(buzzer,LOW);
        }
      }
      if(matrixTimer - matrixBase >= matrixStop){
        matrixBase = matrixTimer;

        if(matrixState1 == false){
          matrixState1 = true;
        }
        else{
          matrixState1 = false;
        }

        if(matrixState1 == true){
          cruzGruesa();
        }
      }
    }

    if(denegadaContador == 5){
      sensor1 = false;
      denegadaContador = 0;
    }
    if(denegadaTimer - denegadaBase >= denegadaStop){
      denegadaContador++;
      denegadaBase = denegadaTimer;
    }
  }

/*----------INICIO----------*/

  if(aceptada1 == false && denegada1 == false && sensor1 == false){

    unsigned long lcdTimer = millis();
    unsigned long matrixTimer = millis();

    if(lcdTimer - lcdBase >= lcdStop){
      lcdBase = lcdTimer;

      if(lcdState1 == false){
        lcdState1 = true;
      }
      else{
        lcdState1 = false;
      }

      if(lcdState1 == true){
        inicio();
      }
    }
    if(matrixTimer - matrixBase >= matrixStop){
      matrixBase = matrixTimer;

      if(matrixState1 == false){
        matrixState1 = true;
      }
      else{
        matrixState1 = false;
      }

      if(matrixState1 == true){
        flechaFina();
      }
    }
  }
}






=======
  tick();
} 
>>>>>>> fb617d7da641202acdb0e3afea45eedf07868b7b
