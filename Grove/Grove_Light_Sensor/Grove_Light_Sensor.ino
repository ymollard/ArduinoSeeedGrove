// Ce croquis permet de visualiser la valeur du capteur de lumière dans une console Série (via USB sur l'ordinateur)
// Lorsqu'il a été téléversé, cliquer sur la console série en haut à droite de l'IDE Arduino
// Elle doit etre réglée sur 9600 bauds
// Elle affiche chaque seconde la valeur du capteur de lumière

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int lumiereActuelle = analogRead(A0);
    Serial.println(lumiereActuelle);
    delay(500);
}
