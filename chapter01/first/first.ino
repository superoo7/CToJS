// My first programme in Arduino
const int ledPin = 13;

void setup() {
	pinMode(ledPin, OUTPUT);
}

void loop() {
	digitalWrite(ledPin, LOW);
	delay(500);
	digitalWrite(ledPin, HIGH);
	delay(500);
}
