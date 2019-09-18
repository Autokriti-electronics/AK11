void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Enter Multiple Usernames : ");
}

void loop() {
  String s="";
  if(Serial.available()>0){
    s = Serial.readStringUntil(' ');
    Serial.print("Hello ");
    Serial.println(s);
    delay(10);
  }
}
