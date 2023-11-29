void setup() {
    // Réglage du port numérique associé à la LED : mode sortie = OUTPUT
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
   }
void loop() {
   digitalWrite(8, HIGH); // Allumage de la LED bleue: état haut = HIGH
   delay(1000);
   digitalWrite(8, LOW);  // Extinction de la LED bleue: état bas = LOW
   delay(1000);
   digitalWrite(9, HIGH); // Allumage de la LED rouge: état haut = HIGH
   delay(1000);
   digitalWrite(9, LOW);  // Extinction de la LED rouge: état bas = LOW
   delay(1000);
   digitalWrite(10, HIGH); // Allumage de la LED vert: état haut = HIGH
   delay(1000);
   digitalWrite(10, LOW);  // Extinction de la LED vert: état bas = LOW
   delay(1000);
   
}
