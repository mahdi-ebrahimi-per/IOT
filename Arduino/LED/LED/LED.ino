const int ledPin = 13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int delayPeriod = 100;
  digitalWrite(ledPin, 1);   // 1 or HIGH or true
  delay(delayPeriod);
  digitalWrite(ledPin, 0);   // 0 or LOW or false
  delay(delayPeriod);

    
}
