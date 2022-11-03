int botao = 2; // entrada digital na porta 2
int val = 0; 
void setup() {
Serial.begin(9600);
pinMode(botao, INPUT); // porta 2 vira entrada
}
void loop(){
val = digitalRead(botao); // lê a porta do botão
Serial.println(val);
delay(2000);
}
