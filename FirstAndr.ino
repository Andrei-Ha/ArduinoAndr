// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       FirstAndr.ino
    Created:	16.12.2020 9:08:23
    Author:     ANDR\Andrei_317
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
int ledPin = 13;
int switchPin = 7;
// The setup() function runs once each time the micro-controller starts
void setup()
{
	pinMode(ledPin, OUTPUT);
	pinMode(switchPin, INPUT_PULLUP);
	//Flash(500, 15);
}

// Add the main program code into the continuous loop() function
void loop()
{
	if (digitalRead(switchPin) == LOW)	{
		Flash(100, 1);
	}
	else {
		Flash(400, 1);
	}

}
void Flash(int delayPeriod, int n) {
	for (int i = 0; i < n;i++) {
		digitalWrite(ledPin, HIGH);
		delay(delayPeriod);
		digitalWrite(ledPin, LOW);
		delay(delayPeriod);
	}
}
