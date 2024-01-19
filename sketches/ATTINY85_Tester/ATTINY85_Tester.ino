// test code for ATTINY85 programmer
// rod_r2020

#define LED_PIN 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(LED_PIN,HIGH);
  delay(500);
  digitalWrite(LED_PIN,LOW);
  delay(150);
  digitalWrite(LED_PIN,HIGH);
  delay(150);
  digitalWrite(LED_PIN,LOW);
}
