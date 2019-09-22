/*

AUTHOR: Hazim Bitar (techbitar)
DATE: Aug 29, 2013
LICENSE: Public domain (use at your own risk)
CONTACT: techbitar at gmail dot com (techbitar.com)

*/


#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX | TX

void setup() 
{
   pinMode(2, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
   pinMode(3, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6,OUTPUT);
  Serial.begin(38400);
  BTSerial.begin(38400);  // HC-05 default speed in AT command more
}

void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
  
  { //Serial.print(BTSerial.read());
    int temp=BTSerial.read();
    if(temp==66)
    { Serial.print("BACKWARD");
      Move('B');
    }
   else  if(temp==70)
    { Serial.print("FORWARD");
      Move('F');
    }
   
   else if(temp==76)
    { Serial.print("LEFT");
      Move('L');
    }
   else  if(temp==82)
    { Serial.print("RIGHT");
      Move('R');
    }
    else 
    { Serial.print("NEUTRAL");
      Move('N');
    }
 }else Serial.print("gfgfg");
}

void Move(char c)
{
  if(c=='F')
  { digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(6,LOW);
  }
  if(c=='B')
  { digitalWrite(2,LOW);
    digitalWrite(5,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(6,HIGH);
  }
   if(c=='L')
  { digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  if(c=='R')
  { digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  if(c=='N')
  { digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
}
