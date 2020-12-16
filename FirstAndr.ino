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
int analogPin = A0;
// The setup() function runs once each time the micro-controller starts
void setup()
{
	pinMode(ledPin, OUTPUT);
	pinMode(switchPin, INPUT_PULLUP);
	//Flash(500, 15);
	Serial.begin(9600);
}

// Add the main program code into the continuous loop() function
void loop()
{
	Serial.println(analogRead(analogPin) / 204.6);
	int randomDelay = random(100, 1000);
	if (digitalRead(switchPin) == LOW)	{
		//Serial.println("Connected");
		//Serial.println(digitalRead(switchPin));
		Flash(randomDelay, 1);
	}
	else {
		//Serial.println("Disconect");
		//Serial.println(digitalRead(switchPin));
		Flash(400, 1);
	}

}
void Flash(int delayPeriod, int n) {
	for (int i = 0; i < n;i++) {
		digitalWrite(ledPin, HIGH);
		delay(1000);
		digitalWrite(ledPin, LOW);
		delay(delayPeriod);
	}
}
