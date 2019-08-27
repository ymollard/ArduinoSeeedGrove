#include "SHT31.h"

// Ce croquis se connecte au capteur de température et d'humidité modèle Seeed SHT31
// Il doit être branché au porte analog A0
// Ce croquis affiche toutes les secondes les valeurs de température et d'humidité actuelles sur la console série

SHT31 sht31 = SHT31();

void setup() {  
  Serial.begin(9600);
  Serial.println("Démarrage du capteur en cours ...");  
  sht31.begin();  
}

void loop() {
  float temp = sht31.getTemperature();
  float hum = sht31.getHumidity();
  Serial.print("Temp = "); 
  Serial.print(temp);
  Serial.println(" C");
  Serial.print("Hum = "); 
  Serial.print(hum);
  Serial.println("%"); 
  Serial.println();
  delay(1000);
}
