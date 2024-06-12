
  int pin_led = 7;
void setup() {
    pinMode(pin_led,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  digitalWrite(pin_led,HIGH);
  delay(1000);
  digitalWrite(pin_led,LOW);
  delay(1000);
}
