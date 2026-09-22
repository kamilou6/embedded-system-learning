


void setup() {
  pinMode(13, OUTPUT);

  pinMode(2, OUTPUT);

  pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(10000);
  digitalWrite(13, LOW);
  delay(1000);

 digitalWrite(8, HIGH);
  delay(600);
  digitalWrite(8, LOW);
  delay(600);

  digitalWrite(8, HIGH);
  delay(600);
  digitalWrite(8, LOW);
  delay(600);

  digitalWrite(8, HIGH);
  delay(600);
  digitalWrite(8, LOW);
  delay(1000); 

  digitalWrite(2, HIGH);
  delay(10000);
  digitalWrite(2, LOW);
  delay(2000);

  
}
