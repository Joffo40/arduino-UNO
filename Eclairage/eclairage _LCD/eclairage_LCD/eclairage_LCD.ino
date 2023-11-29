#define LDR A1  // composante photoresistor sur la pin A1
#define LED 9   // composante led sur la pin 9


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//----- Adressage matériel -----
// En cas de non fonctionnement, mettez la ligne 8 en
// commentaire et retirez le commentaire à la ligne 9.

unsigned int value;

 LiquidCrystal_I2C lcd(0x27, 20, 4);
    //LiquidCrystal_I2C lcd(0x3F,20,4);


void setup() {
   // initialise la communication avec le PC
   Serial.begin(9600);
   lcd.init(); // initialisation de l'afficheur
   // initialise les broches
   pinMode(LED, OUTPUT);
   pinMode(LDR, INPUT);
 
}
 
void loop() {
   // mesure la tension sur la broche A1
   value = analogRead(LDR);
   lcd.backlight();
// Envoi du message
  lcd.setCursor(0, 0);
  lcd.print(" Go Tronic");
  lcd.setCursor(0,1);
  lcd.print(" I2C Serial LCD");

   // allume la LED
   if (value<20) digitalWrite(LED, HIGH);

   // désactiver la LED
   if (value>20) digitalWrite(LED, LOW);

   delay(200);
  
}
