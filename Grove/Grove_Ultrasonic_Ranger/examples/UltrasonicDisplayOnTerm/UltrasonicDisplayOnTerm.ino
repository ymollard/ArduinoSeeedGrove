

// Afficher la distance mesurée par le capteur ultrasons sur la console série de l'IDE Arduino classique
// La console série doit etre réglée sur 9600 bauds

#include "Ultrasonic.h"

Ultrasonic ultrasonic(7);
// On branche le capteur Ultrason Grove sur D7 

void setup()
{
  // Pour écrire sur la console série, on démarre la communication à 9600 bauds
	Serial.begin(9600);
}

void loop()
{
	long RangeInCentimeters;
	
	Serial.print("Objet visible a ");
	
	RangeInCentimeters = ultrasonic.MeasureInCentimeters();
	Serial.print(RangeInCentimeters);
	Serial.println(" cm");
	delay(250);
}
