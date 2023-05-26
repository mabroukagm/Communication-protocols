#include <Wire.h>
void setup()
{
Wire.begin(); // Démarrage de l'interface I2C (l’adresse est facultative pour le maitre)
}
byte x = 0;
void loop() {
Wire.beginTransmission(4); // transmettre à l’équipement #4
Wire.write("x is "); // envoie cinq octets
Wire.write(x); //envoie un octet
Wire.endTransmission(); // stop transmission
x++;
delay(500);
}
