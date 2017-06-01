// My first programme in Arduino
const int ledPin = 13; 							// pin 13 is the on board LED.

void setup() {
	pinMode(ledPin, OUTPUT);          // set pin 13 to be OUTPUT
}

void loop() {    										// The loop function Runs over and over forever
	digitalWrite(ledPin, LOW);        // make ledPin LOW, turn off
	delay(500);												// wait 0.5 seconds
	digitalWrite(ledPin, HIGH);       // make ledPin HIGH, turn on
	delay(500); 											// wait 0.5 seconds
}
