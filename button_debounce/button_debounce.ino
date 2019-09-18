// Declare the pin for the button
int buttonPin = 2;
// Variable for keeping the previous button state
int previousButtonValue = HIGH;
long lastDebounce = 0; // Last time the button was pressed
long debounceTime = 50; // Debounce delay
void setup() {
// Define pin #2 as input and activate the internal pull-up resistor
pinMode(buttonPin, INPUT_PULLUP);
// Establish the Serial connection with a baud rate of 115200
Serial.begin(115200);
}
void loop(){
// Read the value of the input. It can either be 1 or 0
int buttonValue = digitalRead(buttonPin);
if (buttonValue != previousButtonValue && millis() - lastDebounce >=
debounceTime){
// Reading is useable, print it
Serial.println(buttonValue);
// Reset the debouncing timer
lastDebounce = millis();
// Change to the latest button state
previousButtonValue = buttonValue;
}
// Allow some delay for the Serial data to be transmitted
delay(10);
}
