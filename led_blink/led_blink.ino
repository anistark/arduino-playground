#define LED 4

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int LOOPCOUNT = 10;
  while (LOOPCOUNT) {
    Serial.println("Start Ignition sequence no: ");
    Serial.print(LOOPCOUNT);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
    LOOPCOUNT = LOOPCOUNT-1;
  }
  exit(1);
}

