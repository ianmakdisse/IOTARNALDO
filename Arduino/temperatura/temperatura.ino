#include "DHT.h"
const int DHTPIN7 = 7;
const int DHTPIN6 = 6; //pino que estamos conectado
const int DHTTYPE = DHT11; // DHT11 ou DHT22
DHT dht7(DHTPIN7, DHTTYPE); 
DHT dht6(DHTPIN6, DHTTYPE);//Instanciação do objeto do sensor
void setup() {
Serial.begin(9600);
dht7.begin();
dht6.begin();
}
void loop() {
// A leitura da temperatura e umidade pode levar até 250ms!
float h7 = dht7.readHumidity();//Valor da umidade
float t7 = dht7.readTemperature(); //Valor da temperatura
if (isnan(t7) || isnan(h7)) {
Serial.println("Erro ao ler do DHT");
} else {
Serial.print("Umidade do 7: ");
Serial.print(h7); Serial.print(" %\t");
Serial.print("Temperatura do 7: ");
Serial.print(t7); Serial.println(" ºC");
}

float h6 = dht6.readHumidity();//Valor da umidade
float t6 = dht6.readTemperature(); //Valor da temperatura
if (isnan(t6) || isnan(h6)) {
Serial.println("Erro ao ler do DHT");
} else {
Serial.print("Umidade do 6: ");
Serial.print(h6); Serial.print(" %\t");
Serial.print("Temperatura do 6: ");
Serial.print(t6); Serial.println(" ºC");
}
delay(500);
}
