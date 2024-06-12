int pin_led = 3;
void setup() {
    pinMode(pin_led,OUTPUT);
}

void loop() {
  for (int i = 0; i<=255; i++) {
    analogWrite(pin_led, i);
    delay(10);
  }
  for (int i = 255; i>=0; i--) {
    analogWrite(pin_led, i);
    delay(10);
  }
}
