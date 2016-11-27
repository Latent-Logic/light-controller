// constants won't change. Used here to set a pin number :
const int starttime = 100;  // the amount of time that each delay is going to
                            // have on the startup script.
long randNumber;
long NumberCounter;  // This is a counter to count how may times the program has
                     // looped before it triggers a function.
// Variables will change :
int ledState0 = LOW;   // ledState used to set the LED
int ledState1 = LOW;   // ledState used to set the LED
int ledState2 = LOW;   // ledState used to set the LED
int ledState3 = LOW;   // ledState used to set the LED
int ledState4 = LOW;   // ledState used to set the LED
int ledState5 = LOW;   // ledState used to set the LED
int ledState6 = LOW;   // ledState used to set the LED
int ledState7 = LOW;   // ledState used to set the LED
int ledState8 = LOW;   // ledState used to set the LED
int ledState9 = LOW;   // ledState used to set the LED
int ledState10 = LOW;  // ledState used to set the LED
int ledState11 = LOW;  // ledState used to set the LED
int ledState12 = LOW;  // ledState used to set the LED
int ledState13 = LOW;  // ledState used to set the LED

// Set what pins are enabled. (Low = Off, High = On)
int ledEnabled0 = LOW;
int ledEnabled1 = LOW;
int ledEnabled2 = LOW;
int ledEnabled3 = LOW;
int ledEnabled4 = LOW;
int ledEnabled5 = LOW;
int ledEnabled6 = LOW;
int ledEnabled7 = LOW;
int ledEnabled8 = LOW;
int ledEnabled9 = LOW;
int ledEnabled10 = LOW;
int ledEnabled11 = LOW;
int ledEnabled12 = LOW;
int ledEnabled13 = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time LED was updated

// constants won't change :
const long interval = 500;  // interval at which to blink (milliseconds)

void setup() {
  // Get a random seed from analog 0
  randomSeed(analogRead(0));
  // set the digital pin as output:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  // This is the light test section, we will run though all of the different
  // functions here.

  // Chase both on and off.
  Chase(starttime, HIGH);
  Chase(starttime, LOW);

  Blink(10, starttime);  // Blink 10 times.
}

void loop() {
  randNumber = random(0, 14);  // Random number to generate what pin should be
                               // on/off. Add 1 to your final number. Eg. 13
                               // pins would be a total of 14.

  // Used for timed events.
  if (NumberCounter >
      1000)  // Resets the number counter if it is larger then 1000.
  {
    NumberCounter == 0;
  } else if ((NumberCounter == 100) || (NumberCounter == 300) ||
             (NumberCounter == 500) || (NumberCounter == 700) ||
             (NumberCounter == 900)) {
    LightsOff();
    Chase(starttime, HIGH);
    Chase(starttime, LOW);
  } else if ((NumberCounter == 200) || (NumberCounter == 400) ||
             (NumberCounter == 600) || (NumberCounter == 800) ||
             (NumberCounter == 1000)) {
    LightsOff();
    Blink(5, 1000);
  }
  NumberCounter++;  // Add one to the number counter.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // set the LED with the ledState of the variable:
    RandomLight();
  }
}

void RandomLight() {
  if ((randNumber == 0) && (ledEnabled0 == HIGH)) {
    if (ledState0 == LOW) {
      ledState0 = HIGH;
    } else {
      ledState0 = LOW;
    }
    digitalWrite(0, ledState0);
    return 1;
  }

  if ((randNumber == 1) && (ledEnabled1 == HIGH)) {
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    digitalWrite(1, ledState1);
    return 1;
  }

  if ((randNumber == 2) && (ledEnabled2 == HIGH)) {
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(2, ledState2);
    return 1;
  }

  if ((randNumber == 3) && (ledEnabled3 == HIGH)) {
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(3, ledState3);
    return 1;
  }

  if ((randNumber == 4) && (ledEnabled4 == HIGH)) {
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(4, ledState4);
    return 1;
  }

  if ((randNumber == 5) && (ledEnabled5 == HIGH)) {
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(5, ledState5);
    return 1;
  }

  if ((randNumber == 6) && (ledEnabled6 == HIGH)) {
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(6, ledState6);
    return 1;
  }

  if ((randNumber == 7) && (ledEnabled7 == HIGH)) {
    if (ledState7 == LOW) {
      ledState7 = HIGH;
    } else {
      ledState7 = LOW;
    }
    digitalWrite(7, ledState7);
    return 1;
  }

  if ((randNumber == 8) && (ledEnabled8 == HIGH)) {
    if (ledState8 == LOW) {
      ledState8 = HIGH;
    } else {
      ledState8 = LOW;
    }
    digitalWrite(8, ledState8);
    return 1;
  }

  if ((randNumber == 9) && (ledEnabled9 == HIGH)) {
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(9, ledState9);
    return 1;
  }

  if ((randNumber == 10) && (ledEnabled10 == HIGH)) {
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    }
    digitalWrite(10, ledState10);
    return 1;
  }

  if ((randNumber == 11) && (ledEnabled11 == HIGH)) {
    if (ledState11 == LOW) {
      ledState11 = HIGH;
    } else {
      ledState11 = LOW;
    }
    digitalWrite(11, ledState11);
    return 1;
  }

  if ((randNumber == 12) && (ledEnabled12 == HIGH)) {
    if (ledState12 == LOW) {
      ledState12 = HIGH;
    } else {
      ledState12 = LOW;
    }
    digitalWrite(12, ledState12);
    return 1;
  }

  if ((randNumber == 13) && (ledEnabled13 == HIGH)) {
    if (ledState13 == LOW) {
      ledState13 = HIGH;
    } else {
      ledState13 = LOW;
    }
    digitalWrite(13, ledState13);
    return 1;
  }
}

void LightsOn()  // Turns all pins on.
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, HIGH);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, HIGH);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, HIGH);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, HIGH);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, HIGH);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, HIGH);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, HIGH);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, HIGH);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, HIGH);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, HIGH);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, HIGH);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, HIGH);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, HIGH);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, HIGH);
  }
}

void LightsOff()  // Turns all pins off
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, LOW);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, LOW);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, LOW);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, LOW);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, LOW);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, LOW);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, LOW);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, LOW);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, LOW);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, LOW);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, LOW);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, LOW);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, LOW);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, LOW);
  }
}

void Blink(int times, int delays)  // Times = how many times the outputs should
                                   // blink, delays = how long between the
                                   // on/off
{
  int i;
  for (i = 0; i < times; i++) {
    LightsOn();
    delay(delays);
    LightsOff();
    delay(delays);
  }
}

void Chase(int delays, int type)  // Delays = How much of a delay between each
                                  // pin, type = High/Low for On/Off
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, type);
    delay(delays);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, type);
    delay(delays);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, type);
    delay(delays);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, type);
    delay(delays);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, type);
    delay(delays);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, type);
    delay(delays);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, type);
    delay(delays);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, type);
    delay(delays);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, type);
    delay(delays);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, type);
    delay(delays);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, type);
    delay(delays);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, type);
    delay(delays);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, type);
    delay(delays);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, type);
    delay(delays);
  }
}

// constants won't change. Used here to set a pin number :
const int starttime = 100;  // the amount of time that each delay is going to
                            // have on the startup script.
long randNumber;
long NumberCounter;  // This is a counter to count how may times the program has
                     // looped before it triggers a function.
// Variables will change :
int ledState0 = LOW;   // ledState used to set the LED
int ledState1 = LOW;   // ledState used to set the LED
int ledState2 = LOW;   // ledState used to set the LED
int ledState3 = LOW;   // ledState used to set the LED
int ledState4 = LOW;   // ledState used to set the LED
int ledState5 = LOW;   // ledState used to set the LED
int ledState6 = LOW;   // ledState used to set the LED
int ledState7 = LOW;   // ledState used to set the LED
int ledState8 = LOW;   // ledState used to set the LED
int ledState9 = LOW;   // ledState used to set the LED
int ledState10 = LOW;  // ledState used to set the LED
int ledState11 = LOW;  // ledState used to set the LED
int ledState12 = LOW;  // ledState used to set the LED
int ledState13 = LOW;  // ledState used to set the LED

// Set what pins are enabled. (Low = Off, High = On)
int ledEnabled0 = LOW;
int ledEnabled1 = LOW;
int ledEnabled2 = LOW;
int ledEnabled3 = LOW;
int ledEnabled4 = LOW;
int ledEnabled5 = LOW;
int ledEnabled6 = LOW;
int ledEnabled7 = LOW;
int ledEnabled8 = LOW;
int ledEnabled9 = LOW;
int ledEnabled10 = LOW;
int ledEnabled11 = LOW;
int ledEnabled12 = LOW;
int ledEnabled13 = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;  // will store last time LED was updated

// constants won't change :
const long interval = 500;  // interval at which to blink (milliseconds)

void setup() {
  // Get a random seed from analog 0
  randomSeed(analogRead(0));
  // set the digital pin as output:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  // This is the light test section, we will run though all of the different
  // functions here.

  // Chase both on and off.
  Chase(starttime, HIGH);
  Chase(starttime, LOW);

  Blink(10, starttime);  // Blink 10 times.
}

void loop() {
  randNumber = random(0, 14);  // Random number to generate what pin should be
                               // on/off. Add 1 to your final number. Eg. 13
                               // pins would be a total of 14.

  // Used for timed events.
  if (NumberCounter >
      1000)  // Resets the number counter if it is larger then 1000.
  {
    NumberCounter == 0;
  } else if ((NumberCounter == 100) || (NumberCounter == 300) ||
             (NumberCounter == 500) || (NumberCounter == 700) ||
             (NumberCounter == 900)) {
    LightsOff();
    Chase(starttime, HIGH);
    Chase(starttime, LOW);
  } else if ((NumberCounter == 200) || (NumberCounter == 400) ||
             (NumberCounter == 600) || (NumberCounter == 800) ||
             (NumberCounter == 1000)) {
    LightsOff();
    Blink(5, 1000);
  }
  NumberCounter++;  // Add one to the number counter.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // set the LED with the ledState of the variable:
    RandomLight();
  }
}

void RandomLight() {
  if ((randNumber == 0) && (ledEnabled0 == HIGH)) {
    if (ledState0 == LOW) {
      ledState0 = HIGH;
    } else {
      ledState0 = LOW;
    }
    digitalWrite(0, ledState0);
    return 1;
  }

  if ((randNumber == 1) && (ledEnabled1 == HIGH)) {
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    digitalWrite(1, ledState1);
    return 1;
  }

  if ((randNumber == 2) && (ledEnabled2 == HIGH)) {
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(2, ledState2);
    return 1;
  }

  if ((randNumber == 3) && (ledEnabled3 == HIGH)) {
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(3, ledState3);
    return 1;
  }

  if ((randNumber == 4) && (ledEnabled4 == HIGH)) {
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(4, ledState4);
    return 1;
  }

  if ((randNumber == 5) && (ledEnabled5 == HIGH)) {
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(5, ledState5);
    return 1;
  }

  if ((randNumber == 6) && (ledEnabled6 == HIGH)) {
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(6, ledState6);
    return 1;
  }

  if ((randNumber == 7) && (ledEnabled7 == HIGH)) {
    if (ledState7 == LOW) {
      ledState7 = HIGH;
    } else {
      ledState7 = LOW;
    }
    digitalWrite(7, ledState7);
    return 1;
  }

  if ((randNumber == 8) && (ledEnabled8 == HIGH)) {
    if (ledState8 == LOW) {
      ledState8 = HIGH;
    } else {
      ledState8 = LOW;
    }
    digitalWrite(8, ledState8);
    return 1;
  }

  if ((randNumber == 9) && (ledEnabled9 == HIGH)) {
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(9, ledState9);
    return 1;
  }

  if ((randNumber == 10) && (ledEnabled10 == HIGH)) {
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    }
    digitalWrite(10, ledState10);
    return 1;
  }

  if ((randNumber == 11) && (ledEnabled11 == HIGH)) {
    if (ledState11 == LOW) {
      ledState11 = HIGH;
    } else {
      ledState11 = LOW;
    }
    digitalWrite(11, ledState11);
    return 1;
  }

  if ((randNumber == 12) && (ledEnabled12 == HIGH)) {
    if (ledState12 == LOW) {
      ledState12 = HIGH;
    } else {
      ledState12 = LOW;
    }
    digitalWrite(12, ledState12);
    return 1;
  }

  if ((randNumber == 13) && (ledEnabled13 == HIGH)) {
    if (ledState13 == LOW) {
      ledState13 = HIGH;
    } else {
      ledState13 = LOW;
    }
    digitalWrite(13, ledState13);
    return 1;
  }
}

void LightsOn()  // Turns all pins on.
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, HIGH);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, HIGH);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, HIGH);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, HIGH);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, HIGH);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, HIGH);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, HIGH);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, HIGH);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, HIGH);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, HIGH);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, HIGH);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, HIGH);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, HIGH);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, HIGH);
  }
}

void LightsOff()  // Turns all pins off
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, LOW);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, LOW);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, LOW);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, LOW);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, LOW);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, LOW);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, LOW);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, LOW);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, LOW);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, LOW);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, LOW);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, LOW);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, LOW);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, LOW);
  }
}

void Blink(int times, int delays)  // Times = how many times the outputs should
                                   // blink, delays = how long between the
                                   // on/off
{
  int i;
  for (i = 0; i < times; i++) {
    LightsOn();
    delay(delays);
    LightsOff();
    delay(delays);
  }
}

void Chase(int delays, int type)  // Delays = How much of a delay between each
                                  // pin, type = High/Low for On/Off
{
  if (ledEnabled0 == HIGH) {
    digitalWrite(0, type);
    delay(delays);
  }
  if (ledEnabled1 == HIGH) {
    digitalWrite(1, type);
    delay(delays);
  }
  if (ledEnabled2 == HIGH) {
    digitalWrite(2, type);
    delay(delays);
  }
  if (ledEnabled3 == HIGH) {
    digitalWrite(3, type);
    delay(delays);
  }
  if (ledEnabled4 == HIGH) {
    digitalWrite(4, type);
    delay(delays);
  }
  if (ledEnabled5 == HIGH) {
    digitalWrite(5, type);
    delay(delays);
  }
  if (ledEnabled6 == HIGH) {
    digitalWrite(6, type);
    delay(delays);
  }
  if (ledEnabled7 == HIGH) {
    digitalWrite(7, type);
    delay(delays);
  }
  if (ledEnabled8 == HIGH) {
    digitalWrite(8, type);
    delay(delays);
  }
  if (ledEnabled9 == HIGH) {
    digitalWrite(9, type);
    delay(delays);
  }
  if (ledEnabled10 == HIGH) {
    digitalWrite(10, type);
    delay(delays);
  }
  if (ledEnabled11 == HIGH) {
    digitalWrite(11, type);
    delay(delays);
  }
  if (ledEnabled12 == HIGH) {
    digitalWrite(12, type);
    delay(delays);
  }
  if (ledEnabled13 == HIGH) {
    digitalWrite(13, type);
    delay(delays);
  }
}
