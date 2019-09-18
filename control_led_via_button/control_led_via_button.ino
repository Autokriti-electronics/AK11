// Declare the pins for the Button and the LED
int buttonPin = 2;
int LED = 13;
void setup() {
// Define pin #2 as input
pinMode(buttonPin, INPUT);
// Define pin #13 as output, for the LED
pinMode(LED, OUTPUT);
}
void loop() {
// Read the value of the input. It can either be 1 or 0.
int buttonValue = digitalRead(buttonPin);
if (buttonValue == HIGH) {
// If button pushed, turn LED on
digitalWrite(LED,HIGH);
} else {
// Otherwise, turn the LED off
digitalWrite(LED, LOW);
}
}
