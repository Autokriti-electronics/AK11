int ledPin =  9;    // LED connected to digital pin 13
int ledBPin = 12;    // LED connected to digital pin 12
int ledGPin = 11;    // LED connected to digital pin 11
int ledRPin = 10;    // LED connected to digital pin 10

void setup()   {                
 // initialize the digital pins as an output:
 pinMode(ledPin, OUTPUT);
 pinMode(ledBPin, OUTPUT);
 pinMode(ledGPin, OUTPUT);
 pinMode(ledRPin, OUTPUT); 


for(int i = 0; i < 10; i += 1) 
{
 digitalWrite(ledPin, HIGH);   // set the LED on
 delay(500);                  // wait 
 digitalWrite(ledPin, LOW);    // set the LED off
 delay(500);                  // wait 
 digitalWrite(ledBPin, HIGH);   // set the LED on
 delay(500);                  // wait  
 digitalWrite(ledBPin, LOW);    // set the LED off
 delay(500);                  // wait for a second
 digitalWrite(ledGPin, HIGH);   // set the LED o
 delay(500);                  // wait 
 digitalWrite(ledGPin, LOW);    // set the LED off
 delay(500);                   // wait 
 digitalWrite(ledRPin, HIGH);   // set the LED o
 delay(500);                  // wait 
 digitalWrite(ledRPin, LOW);    // set the LED off
 delay(500);                  // wait 
   }
}
void loop(){}
