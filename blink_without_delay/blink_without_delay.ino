// Variable for keeping the previous LED state
int previousLEDstate = LOW;
unsigned long lastTime = 0; // Last time the LED changed state
int interval = 200; // interval between the blinks in milliseconds
void setup() {
// Declare the pin for the LED as Output
pinMode(LED_BUILTIN, OUTPUT);
}
void loop(){
// Here we can write any code we want to execute continuously
// Read the current time
unsigned long currentTime = millis();
// Compare the current time with the last time
if (currentTime - lastTime >= interval){
// First we set the previous time to the current time
lastTime = currentTime;
// Then we inverse the state of the LED
if (previousLEDstate == HIGH) {
digitalWrite(LED_BUILTIN, LOW);
previousLEDstate = LOW;
} else {
digitalWrite(LED_BUILTIN, HIGH);
previousLEDstate = HIGH;
}
}
}
