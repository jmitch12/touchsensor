

int ledPin = 9;    // LED connected to digital pin 9
int brightness = 0;
int sensorLow = 1023;
int sensorHigh = 119;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    brightness = map(sensorValue, sensorLow, sensorHigh, 0, 255);
    analogWrite(ledPin, brightness);
    // wait for 30 milliseconds to see the dimming effect
    delay(300);
  }




