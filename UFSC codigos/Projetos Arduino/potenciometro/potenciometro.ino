void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor_A0;
  float tensao;
  valor_A0 = analogRead(A0);
  tensao = (float)5/1023*valor_A0;

  Serial.println(tensao);
  delay(20);

}
