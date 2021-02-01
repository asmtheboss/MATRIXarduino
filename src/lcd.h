#include <Arduino.h>
#include <LiquidCrystal.h>


const int rs = PA9, en = PA10, d4 = PB6, d5 = PB7, d6 = PB8, d7 = PB9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void inicio(){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("   introduzca");
    lcd.setCursor(0,1);
    lcd.print("   su tarjeta");
    
}

void cargando(){

        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("espere por favor");
        lcd.setCursor(0,1);
        lcd.print("analizando...");

}

void aceptadaParte1(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("tarjeta aceptada");
    lcd.setCursor(0,1);
    lcd.print("por favor");
}
void aceptadaParte2(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("recoja su ");
    lcd.setCursor(0,1);
    lcd.print("tarjeta");
}

void denegadoParte1(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("tarjeta denegada");
    lcd.setCursor(0,1);
    lcd.print("no valida");
}

void denegadoParte2(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("recoja su ");
    lcd.setCursor(0,1);
    lcd.print("tarjeta");
}

void accesoNoPermitido(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Acceso Irregular");
    lcd.setCursor(0,1);
    lcd.print("Vuelva Atras");
}
