void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Enter Username : ");
}

void loop() {
  String s="";
  if(Serial.available()>0){
    s = Serial.readString();
    Serial.print("Hello ");
    Serial.println(s);
  }
}
