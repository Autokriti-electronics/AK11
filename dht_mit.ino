#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <dht.h>

dht DHT;

#define DHT11_PIN 2

const char* ssid = "ssid";
const char* password = "password";

ESP8266WebServer server(80);  
 
String page = "";

void setup(void){
  
  Serial.begin(9600);
  WiFi.begin(ssid, password); //begin WiFi connection
  Serial.println("");
 
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
   
  server.on("/", [](){
    server.send(200, "text/plain", "All good");
  });
  
  server.on("/data", [](){
  int chk = DHT.read11(DHT11_PIN);
    server.send(200, "text/plain", String(DHT.temperature)+"#"+String(DHT.humidity));
    delay(1000); 
  });
  
  server.begin();
  Serial.println("Web server started!");
}
 
void loop(void){
  server.handleClient();
}
