#include <Arduino.h>

int VCCpin_9 = PA0, VCCpin_14 = PA2, VCCpin_8 = PA3, VCCpin_12 = PA1, VCCpin_1 = PA7, VCCpin_7 = PA4, VCCpin_2 = PA6, VCCpin_5 = PA5;
int GNDpin_13 = PB4, GNDpin_3 = PB11, GNDpin_4 = PB10, GNDpin_10 = PB12, GNDpin_6 = PB1, GNDpin_11 = PB3, GNDpin_15 = PB5, GNDpin_16 = PA8;

#define VCCpin9_HIGH    digitalWrite(PA0,HIGH);
#define VCCpin14_HIGH   digitalWrite(PA2,HIGH);
#define VCCpin8_HIGH    digitalWrite(PA3,HIGH);
#define VCCpin12_HIGH   digitalWrite(PA1,HIGH);
#define VCCpin1_HIGH    digitalWrite(PA7,HIGH);
#define VCCpin7_HIGH    digitalWrite(PA4,HIGH);
#define VCCpin2_HIGH    digitalWrite(PA6,HIGH);
#define VCCpin5_HIGH    digitalWrite(PA5,HIGH);

#define VCCpin9_LOW    digitalWrite(PA0,LOW);
#define VCCpin14_LOW   digitalWrite(PA2,LOW);
#define VCCpin8_LOW    digitalWrite(PA3,LOW);
#define VCCpin12_LOW   digitalWrite(PA1,LOW);
#define VCCpin1_LOW    digitalWrite(PA7,LOW);
#define VCCpin7_LOW    digitalWrite(PA4,LOW);
#define VCCpin2_LOW    digitalWrite(PA6,LOW);
#define VCCpin5_LOW    digitalWrite(PA5,LOW);

#define GNDpin13_OPEN   digitalWrite(PB4,HIGH);
#define GNDpin3_OPEN   digitalWrite(PB11,HIGH);
#define GNDpin4_OPEN   digitalWrite(PB10,HIGH);
#define GNDpin10_OPEN   digitalWrite(PB12,HIGH);
#define GNDpin6_OPEN   digitalWrite(PB1,HIGH);
#define GNDpin11_OPEN   digitalWrite(PB3,HIGH);
#define GNDpin15_OPEN   digitalWrite(PB5,HIGH);
#define GNDpin16_OPEN   digitalWrite(PA8,HIGH);

#define GNDpin13_CLOSE   digitalWrite(PB4,LOW);
#define GNDpin3_CLOSE   digitalWrite(PB11,LOW);
#define GNDpin4_CLOSE   digitalWrite(PB10,LOW);
#define GNDpin10_CLOSE   digitalWrite(PB12,LOW);
#define GNDpin6_CLOSE   digitalWrite(PB1,LOW);
#define GNDpin11_CLOSE   digitalWrite(PB3,LOW);
#define GNDpin15_CLOSE   digitalWrite(PB5,LOW);
#define GNDpin16_CLOSE   digitalWrite(PA8,LOW);


void matrixSetup(){
    pinMode(PA0,OUTPUT); pinMode(VCCpin_14,OUTPUT); pinMode(VCCpin_8,OUTPUT); pinMode(VCCpin_12,OUTPUT); pinMode(VCCpin_1,OUTPUT); pinMode(VCCpin_7,OUTPUT);
    pinMode(VCCpin_2,OUTPUT); pinMode(VCCpin_5,OUTPUT);
    pinMode(GNDpin_13,OUTPUT); pinMode(GNDpin_3,OUTPUT); pinMode(GNDpin_4,OUTPUT); pinMode(GNDpin_10,OUTPUT); pinMode(GNDpin_6,OUTPUT); pinMode(GNDpin_11,OUTPUT);
    pinMode(GNDpin_15,OUTPUT); pinMode(GNDpin_16,OUTPUT);
}

void tick(){
    //-----fila 1-----//
    VCCpin9_HIGH; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    VCCpin9_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 2-----//
    VCCpin14_HIGH; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_OPEN;
    delay(1);
    VCCpin14_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 3-----//
    VCCpin8_HIGH; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_OPEN; GNDpin16_OPEN;
    delay(1);
    VCCpin8_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 4-----//
    VCCpin12_HIGH; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_OPEN; GNDpin15_OPEN; GNDpin16_CLOSE;
    delay(1);
    VCCpin12_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 5-----//
    VCCpin1_HIGH; GNDpin13_OPEN; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_OPEN; GNDpin11_OPEN; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    VCCpin1_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 6-----//
    VCCpin7_HIGH; GNDpin13_OPEN; GNDpin3_OPEN; GNDpin4_CLOSE; GNDpin10_OPEN; GNDpin6_OPEN; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    VCCpin7_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 7-----//
    VCCpin2_HIGH; GNDpin13_CLOSE; GNDpin3_OPEN; GNDpin4_OPEN; GNDpin10_OPEN; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    VCCpin2_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    //-----fila 8-----//
    VCCpin5_HIGH; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_OPEN; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
    VCCpin5_LOW; GNDpin13_CLOSE; GNDpin3_CLOSE; GNDpin4_CLOSE; GNDpin10_CLOSE; GNDpin6_CLOSE; GNDpin11_CLOSE; GNDpin15_CLOSE; GNDpin16_CLOSE;
    delay(1);
}