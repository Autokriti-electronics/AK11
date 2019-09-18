const int led=13;
void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);

}

void loop() {
  char x;
  if(Serial.available()){
    x=Serial.read();
    if(x=='1')
    digitalWrite(led,HIGH);
    if(x=='0')
    digitalWrite(led,LOW);
  }
  delay(100);

}
