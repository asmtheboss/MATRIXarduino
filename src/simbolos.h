#include <Arduino.h>

void apagado(){
    fila_1(0,0,0,0,0,0,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_2(0,0,0,0,0,0,0,0);
    fila_2(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_3(0,0,0,0,0,0,0,0);
    fila_3(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_4(0,0,0,0,0,0,0,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_5(0,0,0,0,0,0,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_6(0,0,0,0,0,0,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_7(0,0,0,0,0,0,0,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_8(0,0,0,0,0,0,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(0.5);
}

void tick(){

    fila_1(0,0,0,0,0,0,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_2(0,0,0,0,0,0,0,1);
    fila_2(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_3(0,0,0,0,0,0,1,1);
    fila_3(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_4(0,0,0,0,0,1,1,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_5(1,0,0,0,1,1,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_6(1,1,0,1,1,0,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_7(0,1,1,1,0,0,0,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_8(0,0,1,0,0,0,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(0.5);
}

void cruz(){

    fila_1(1,0,0,0,0,0,0,1);
    fila_1(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_2(1,1,0,0,0,0,1,1);
    fila_2(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_3(0,1,1,0,0,1,1,0);
    fila_3(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_4(0,0,1,1,1,1,0,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_5(0,0,0,1,1,0,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_6(0,0,1,1,1,1,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_7(0,1,1,0,0,1,1,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_8(1,1,0,0,0,0,1,1);
    fila_8(0,0,0,0,0,0,0,0);
    delay(0.5);
}

void stop(){

    fila_1(0,0,1,1,1,1,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_2(0,1,1,1,1,1,1,0);
    fila_2(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_3(1,1,1,1,1,1,1,1);
    fila_3(0,0,0,0,0,0,0,0);
    delay(10.5);
    fila_4(1,1,0,0,0,0,1,1);
    fila_4(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_5(1,1,0,0,0,0,1,1);
    fila_5(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_6(1,1,1,1,1,1,1,1);
    fila_6(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_7(0,1,1,1,1,1,1,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(0.5);
    fila_8(0,0,1,1,1,1,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(0.5);
}
