
// the setup function runs once when you press reset or power the board
int amarelo = 12;
int vermelho = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  piscar(amarelo,2000,10);// wait for a second
  piscar(vermelho,500,10);
}
void piscar(int cor, int tempoligado, int tempoapagado){
  digitalWrite(cor, HIGH);// turn the LED on (HIGH is the voltage level)
  delay(tempoligado);                       // wait for a second
  digitalWrite(cor, LOW);    // turn the LED off by making the voltage LOW
  delay(tempoapagado); 
  
  }
