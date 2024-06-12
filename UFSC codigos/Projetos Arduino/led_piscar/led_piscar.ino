int pin_botao = 2;
int pin_led = 7;
void setup() {
  pinMode(pin_botao, INPUT);
  Serial.begin(9600);
  pinMode(pin_led, OUTPUT);
}

void loop() {
  if(digitalRead(pin_botao) == 1){
    Serial.println("Botao Ligado");
    digitalWrite(pin_led,HIGH);
    delay(50);
  }else{
    Serial.println("Botao Desligado");
    digitalWrite(pin_led,LOW);
    delay(100);
  }

}
