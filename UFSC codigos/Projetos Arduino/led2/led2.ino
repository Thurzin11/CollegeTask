
  int pin_led = 7;
void setup() {
    pinMode(pin_led,OUTPUT);
    Serial.begin(9600);// configura comunicacao serial, velocidade 9600 bits por segundo
}

void loop() {
  digitalWrite(pin_led,HIGH);
  Serial.println("Led ligado");// mostra no serial Monitor o print
  delay(1000);
  digitalWrite(pin_led,LOW);
  Serial.println("Led desligado");// mostra no serial Monitor o print
  delay(1000);
}
