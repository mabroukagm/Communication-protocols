#include <Wire.h>
void setup()
{
Wire.begin(4); // Démarrage de l'interface I2C avec l'adresse #4
Wire.onReceive(receiveEvent); // enregistrer un événement
Serial.begin(9600); // ouvre le port série et fixe le débit de communication à 9600 bauds
}
void loop()
{
delay(100);
}
// Fonction qui s'exécute chaque fois que des données sont reçues du maître
// cette fonction est enregistrée comme événement, voir setup()
void receiveEvent()
{
while(1 < Wire.available())
{
char c = Wire.read(); // recevoir l'octet comme caractère
Serial.print(c); // afficher le caractère
}
int x = Wire.read(); // recevoir l'octet sous forme d'un entier
Serial.println(x); // afficher le nombre entier
}
