#define LED 4

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int LOOPCOUNT = 10;
  while (LOOPCOUNT) {
    Serial.println("Start blink sequence no: ");
    Serial.print(LOOPCOUNT);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
    LOOPCOUNT = LOOPCOUNT-1;
  }
  exit(1);
}
