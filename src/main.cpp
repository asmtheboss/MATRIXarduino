#include <Arduino.h>
#include <788BSmatrixSetup.h>



void setup() {

  matrixSetup();

}

void loop() {

  fila_1(1,0,1,0,1,0,1,0);
  fila_1(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_2(0,1,0,1,0,1,0,1);
  fila_2(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_3(1,0,1,0,1,0,1,0);
  fila_3(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_4(0,1,0,1,0,1,0,1);
  fila_4(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_5(1,0,1,0,1,0,1,0);
  fila_5(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_6(0,1,0,1,0,1,0,1);
  fila_6(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_7(1,0,1,0,1,0,1,0);
  fila_7(0,0,0,0,0,0,0,0);
  delay(0.001);
  fila_8(0,1,0,1,0,1,0,1);
  fila_8(0,0,0,0,0,0,0,0);
  delay(0.001);

  // allMatrix();
}
