#include <Arduino.h>
int tiempo = 0.005;

void apagado(){
    fila_1(0,0,0,0,0,0,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_2(0,0,0,0,0,0,0,0);
    fila_2(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_3(0,0,0,0,0,0,0,0);
    fila_3(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_4(0,0,0,0,0,0,0,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_5(0,0,0,0,0,0,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_6(0,0,0,0,0,0,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_7(0,0,0,0,0,0,0,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_8(0,0,0,0,0,0,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(tiempo);
}

void tick(){

    fila_1(0,0,0,0,0,0,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_2(0,0,0,0,0,0,0,1);
    fila_2(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_3(0,0,0,0,0,0,1,1);
    fila_3(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_4(0,0,0,0,0,1,1,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_5(1,0,0,0,1,1,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_6(1,1,0,1,1,0,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_7(0,1,1,1,0,0,0,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_8(0,0,1,0,0,0,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(tiempo);
}

void cruz(){

    fila_1(1,0,0,0,0,0,0,1);
    fila_1(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_2(1,1,0,0,0,0,1,1);
    fila_2(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_3(0,1,1,0,0,1,1,0);
    fila_3(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_4(0,0,1,1,1,1,0,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_5(0,0,0,1,1,0,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_6(0,0,1,1,1,1,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_7(0,1,1,0,0,1,1,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_8(1,1,0,0,0,0,1,1);
    fila_8(0,0,0,0,0,0,0,0);
    delay(tiempo);
}

void stop(){

    fila_1(0,0,1,1,1,1,0,0);
    fila_1(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_2(0,1,1,1,1,1,1,0);
    fila_2(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_3(1,1,1,1,1,1,1,1);
    fila_3(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_4(1,1,0,0,0,0,1,1);
    fila_4(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_5(1,1,0,0,0,0,1,1);
    fila_5(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_6(1,1,1,1,1,1,1,1);
    fila_6(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_7(0,1,1,1,1,1,1,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_8(0,0,1,1,1,1,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(tiempo);
}
void flecha(){
    fila_1(0,0,0,0,0,0,1,1);
    fila_1(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_2(0,0,0,0,0,1,1,1);
    fila_2(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_3(0,0,0,0,1,1,1,0);
    fila_3(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_4(0,0,0,1,1,1,0,0);
    fila_4(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_5(1,0,1,1,1,0,0,0);
    fila_5(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_6(1,1,1,1,0,0,0,0);
    fila_6(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_7(1,1,1,0,0,0,0,0);
    fila_7(0,0,0,0,0,0,0,0);
    delay(tiempo);
    fila_8(1,1,1,1,0,0,0,0);
    fila_8(0,0,0,0,0,0,0,0);
    delay(tiempo);
}
