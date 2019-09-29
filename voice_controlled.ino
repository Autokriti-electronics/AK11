#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX | TX

void setup() 
{
   pinMode(2, OUTPUT);  
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
  Serial.begin(9600);
  BTSerial.begin(9600);  
}

void Forward(){
    Serial.println("FORWARD");
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
  }

 void Backward()
  { Serial.println("BACKWARD");
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
  }

 void Left()
  { Serial.println("LEFT");
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }

 void Right()
  { Serial.println("RIGHT");
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  
void Stop()
  
  {Serial.println("STOP");
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }


void loop()
{ 
  char comm;
  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
   { comm = BTSerial.read();
    }
  Serial.println(comm);
  switch(comm){
    case '1':
      Forward();
      break;
    case '2':
      Right();
      break;
    case '3':
      Left();
      break;
    case '4':
      Backward();
      break;
    case '5':
      Stop(); 
    }
}
