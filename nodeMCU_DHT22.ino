#include "DHT.h"
// Uncomment one of the lines below for whatever DHT sensor type you're using!
//#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT21   // DHT 21 (AM2301)
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

// DHT Sensor
uint8_t DHTPin = 5; 
               
// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);                

float Temperature;
float Humidity;
void setup() {
  Serial.begin(230400);
  delay(100);
  
  pinMode(DHTPin, INPUT);

  dht.begin();           
}

void loop(){
  Temperature = dht.readTemperature(); // Gets the values of the temperature
  Humidity = dht.readHumidity(); // Gets the values of the humidity 
  Serial.print(Temperature);
  Serial.print("    ");
  Serial.println(Humidity);
  delay(2000);
}
