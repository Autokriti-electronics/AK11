
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Enter Username : ");
}

void loop() {
      if(Serial.available()>0)
      { 
      char data[21];
      int ans = Serial.readBytesUntil(13,data,20);
      Serial.print("Hello ");
      for(int i=0;i<ans;i++)
      Serial.print(data[i]);
      }
}
