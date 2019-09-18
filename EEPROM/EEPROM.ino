#include <EEPROM.h>

void setup() {
  // initialize serial and wait for port to open:
  Serial.begin(9600);

  byte val=255;
  for(int addr=0;addr<255;addr++){
    EEPROM.write(addr, val);
    val--;
  }

  for(int addr=0;addr<255;addr++){
  value = EEPROM.read(address);
  Serial.print(address);
  Serial.print("\t");
  Serial.print(value, DEC);
  Serial.println();
  delay(100);
  }
}

void loop() {
  
}
