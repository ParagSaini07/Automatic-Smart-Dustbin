#include <Servo.h>

#define trigPin 13
#define echoPin 12
#define servoPin 6

#define OPEN_ANGLE 180
#define CLOSE_ANGLE 25
#define DETECT_DISTANCE 15   // cm

Servo lidServo;

bool lidOpen = false;

// Function to get accurate distance
int getDistance() {
  long total = 0;
  int validReadings = 0;

  for (int i = 0; i < 5; i++) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH, 30000); // timeout
    if (duration > 0) {
      int dist = duration * 0.034 / 2;
      total += dist;
      validReadings++;
    }
    delay(20);
  }

  if (validReadings == 0) return 100; // no object
  return total / validReadings;
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lidServo.attach(servoPin);
  lidServo.write(CLOSE_ANGLE);  // lid closed
}

void loop() {
  int distance = getDistance();

  // Hand detected & lid closed
  if (distance <= DETECT_DISTANCE && !lidOpen) {
    lidServo.write(OPEN_ANGLE);  // open lid
    lidOpen = true;

    delay(5000);                 // keep open for 5 seconds

    lidServo.write(CLOSE_ANGLE); // close lid
    lidOpen = false;
  }

  delay(100);
}
