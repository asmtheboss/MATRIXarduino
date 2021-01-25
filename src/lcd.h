#include <Arduino.h>
#include <LiquidCrystal.h>

const int rs = PA9, en = PA10, d4 = PB6, d5 = PB7, d6 = PB8, d7 = PB9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void inicio(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("   introduzca");
    lcd.setCursor(0,1);
    lcd.print("    tarjeta");

}

void cargando(){
    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("espero por favor");
    lcd.setCursor(0,1);
    lcd.print("analizando...");
}

void aceptada(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("tarjeta aceptada");
    lcd.setCursor(0,1);
    lcd.print("puede pasar...");
}

void denegado(){

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("tarjeta denegada");
    lcd.setCursor(0,1);
    lcd.print("no valida");
}
