int pin_led=3;
void setup() {
    pinMode(pin_led,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  int valor_A0,intensidade_led;
  valor_A0 = analogRead(A0);
  intensidade_led = valor_A0/4.0118;
  analogWrite(pin_led, intensidade_led);
  Serial.println(intensidade_led);
}
