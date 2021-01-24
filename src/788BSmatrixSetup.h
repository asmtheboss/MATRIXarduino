#include <Arduino.h>
int VCCpin_9 = PA0, VCCpin_14 = PA2, VCCpin_8 = PA3, VCCpin_12 = PA9, VCCpin_1 = PA7, VCCpin_7 = PA4, VCCpin_2 = PA6, VCCpin_5 = PA5;
int GNDpin_13 = PB4, GNDpin_3 = PB11, GNDpin_4 = PB10, GNDpin_10 = PB12, GNDpin_6 = PB1, GNDpin_11 = PB3, GNDpin_15 = PB5, GNDpin_16 = PA8;
/*int pin_1 = PA7, pin_2 = PA6, pin_3 = PB11, pin_4 = PB10, pin_5 = PA5, pin_6 = PB1, pin_7 = PA4, pin_8 = PA3,
pin_9 = PA0, pin_10 = PB12, pin_11 = PB3, pin_12 = PA10, pin_13 = PB4, pin_14 = PA9, pin_15 = PB5, pin_16 = PA8;*/

void matrixSetup(){

    pinMode(VCCpin_9, OUTPUT);       pinMode(GNDpin_13,OUTPUT);
    pinMode(VCCpin_14, OUTPUT);      pinMode(GNDpin_3,OUTPUT);
    pinMode(VCCpin_8, OUTPUT);       pinMode(GNDpin_4,OUTPUT);
    pinMode(VCCpin_12, OUTPUT);      pinMode(GNDpin_10,OUTPUT);
    pinMode(VCCpin_1, OUTPUT);       pinMode(GNDpin_6,OUTPUT);
    pinMode(VCCpin_7, OUTPUT);       pinMode(GNDpin_11,OUTPUT);
    pinMode(VCCpin_2, OUTPUT);       pinMode(GNDpin_15,OUTPUT);
    pinMode(VCCpin_5, OUTPUT);       pinMode(GNDpin_16,OUTPUT);

}

void allMatrix(){
    digitalWrite(VCCpin_9, HIGH);        digitalWrite(GNDpin_13, LOW);
    digitalWrite(VCCpin_14, HIGH);        digitalWrite(GNDpin_3, LOW);
    digitalWrite(VCCpin_8, HIGH);        digitalWrite(GNDpin_4, LOW);
    digitalWrite(VCCpin_12, HIGH);        digitalWrite(GNDpin_10, LOW);
    digitalWrite(VCCpin_1, HIGH);        digitalWrite(GNDpin_6, LOW);
    digitalWrite(VCCpin_7, HIGH);        digitalWrite(GNDpin_11, LOW);
    digitalWrite(VCCpin_2, HIGH);        digitalWrite(GNDpin_15, LOW);
    digitalWrite(VCCpin_5, HIGH);        digitalWrite(GNDpin_16, LOW);
}

/*-----FILA 1-----*/

void fila_1 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_9, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 2-----*/

void fila_2 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_9, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_14, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_14, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 3-----*/

void fila_3 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_8, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_8, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 4-----*/

void fila_4 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_12, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_12, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 5-----*/

void fila_5 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_1, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_1, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 6-----*/

void fila_6 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_7, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_7, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 7-----*/

void fila_7 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_2, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_2, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}

/*-----FILA 8-----*/

void fila_8 (int led_1, int led_2, int led_3, int led_4,
             int led_5, int led_6, int led_7, int led_8){

    if (led_1 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_13, LOW);
    }
    if (led_1 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_13, HIGH);
    }
    if (led_2 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_3, LOW);
    }
    if (led_2 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_3, HIGH);
    }
    if (led_3 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_4, LOW);
    }
    if (led_3 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_4, HIGH);
    }
    if (led_4 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_10, LOW);
    }
    if (led_4 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_10, HIGH);
    }
    if (led_5 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_6, LOW);
    }
    if (led_5 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_6, HIGH);
    }
    if (led_6 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_11, LOW);
    }
    if (led_6 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_11, HIGH);
    }
    if (led_7 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_15, LOW);
    }
    if (led_7 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_15, HIGH);
    }
    if (led_8 == 1){
        digitalWrite(VCCpin_5, HIGH);
        digitalWrite(GNDpin_16, LOW);
    }
    if (led_8 == 0)
    {
        digitalWrite(VCCpin_5, LOW);
        digitalWrite(GNDpin_16, HIGH);
    }
}
