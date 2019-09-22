//Code for AT mode
#include<SoftwareSerial.h>
SoftwareSerial BT(10,11); //RX 11 and TX 10
void setup ()
{
  Serial.begin(9600);
  BT.begin(38400);
 
}
void loop()
{
  if(BT.available())
  Serial.write(BT.read());
  if(Serial.available())
  BT.write(Serial.read());
  
}

