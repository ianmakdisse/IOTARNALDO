//Pino analógico em que o sensor está conectado
const int sensor = A0;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Lendo o valor do sensor.
  int valorSensor = analogRead(sensor);
   //Exibindo o valor do sensor no serial monitor.
   Serial.println(valorSensor);
   delay(500); 
     // int val = analogRead(0);
  valorSensor = map(valorSensor, 0, 1023, 255, 0);
  analogWrite(3, valorSensor);
 
}
