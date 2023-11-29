#define LDR A1  // composante photoresistor sur la pin A1
#define LED 9   // composante led sur la pin 9



unsigned int value;

 void setup() {
   // initialise la communication avec le PC
   Serial.begin(9600);
   
   // initialise les broches
   pinMode(LED, OUTPUT);
   pinMode(LDR, INPUT);
 
}
 
void loop() {
   // mesure la tension sur la broche A1
   value = analogRead(LDR);
   

   // allume la LED
   if (value<20) digitalWrite(LED, HIGH);

   // désactiver la LED
   if (value>20) digitalWrite(LED, LOW);

   delay(200);
  
}
