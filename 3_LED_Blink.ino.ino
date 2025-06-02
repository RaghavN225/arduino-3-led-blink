void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  for (int i =0; i < 5; i++){
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }

  pinMode(8,OUTPUT);
  for (int i = 0; i < 10; i++){
    digitalWrite(8,HIGH);
    delay(250);
    digitalWrite(8,LOW);
    delay(250);
  }

  pinMode(3,OUTPUT);
  for (int i = 0; i < 15; i++){
    digitalWrite(3,HIGH);
    delay(50);
    digitalWrite(3,LOW);
    delay(50);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
