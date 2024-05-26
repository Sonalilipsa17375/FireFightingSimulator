#include <Servo.h>

const int trigPin = 7;
const int echoPin = 8;
const int ledPin = 9;
const int servoPin = 10;

Servo servo;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
    pinMode(triggerPin, OUTPUT); // Clear the trigger
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    // Sets the trigger pin to HIGH state for 10 microseconds
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    pinMode(echoPin, INPUT);
    // Reads the echo pin, and returns the sound wave travel time in microseconds
    return pulseIn(echoPin, HIGH);
}

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    servo.attach(servoPin);
    servo.write(0); // Set initial position of the servo to 0 degrees
}

void loop()
{
    long duration, distance;
    duration = readUltrasonicDistance(trigPin, echoPin);
    distance = (duration / 2) * 0.0343;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance < 30) // If an object is detected within 30 cm
    {
        digitalWrite(ledPin, HIGH); // Turn on LED to indicate fire detection
        servo.write(90);            // Rotate servo to 90 degrees to simulate water spray
    }
    else
    {
        digitalWrite(ledPin, LOW); // Turn off LED
        servo.write(0);            // Reset servo to initial position
    }

    delay(500); // Wait for 500 milliseconds
}
