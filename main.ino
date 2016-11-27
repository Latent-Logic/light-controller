// constants won't change. Used here to set a pin number :
const int starttime = 100;    // the amount of time that each delay is going to have on the startup script.
long randNumber;
// Variables will change :
int ledState0 = LOW;             // ledState used to set the LED
int ledState1 = LOW;             // ledState used to set the LED
int ledState2 = LOW;             // ledState used to set the LED
int ledState3 = LOW;             // ledState used to set the LED
int ledState4 = LOW;             // ledState used to set the LED
int ledState5 = LOW;             // ledState used to set the LED
int ledState6 = LOW;             // ledState used to set the LED
int ledState7 = LOW;             // ledState used to set the LED
int ledState8 = LOW;             // ledState used to set the LED
int ledState9 = LOW;             // ledState used to set the LED
int ledState10 = LOW;             // ledState used to set the LED
int ledState11 = LOW;             // ledState used to set the LED
int ledState12 = LOW;             // ledState used to set the LED
int ledState13 = LOW;             // ledState used to set the LED


// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 500;           // interval at which to blink (milliseconds)

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

//This is the light test section.

        digitalWrite(0, HIGH);
        delay(starttime);
        digitalWrite(1, HIGH);
        delay(starttime);
        digitalWrite(2, HIGH);
        delay(starttime);
        digitalWrite(3, HIGH);
        delay(starttime);
        digitalWrite(4, HIGH);
        delay(starttime);
        digitalWrite(5, HIGH);
        delay(starttime);
        digitalWrite(6, HIGH);
        delay(starttime);
        digitalWrite(7, HIGH);
        delay(starttime);
        digitalWrite(8, HIGH);
        delay(starttime);
        digitalWrite(9, HIGH);
        delay(starttime);
        digitalWrite(10, HIGH);
        delay(starttime);
        digitalWrite(11, HIGH);
        delay(starttime);
        digitalWrite(12, HIGH);
        delay(starttime);
        digitalWrite(13, HIGH);
        delay(starttime);
//Turn the lights back off now
        digitalWrite(0, LOW);
        delay(starttime);
        digitalWrite(1, LOW);
        delay(starttime);
        digitalWrite(2, LOW);
        delay(starttime);
        digitalWrite(3, LOW);
        delay(starttime);
        digitalWrite(4, LOW);
        delay(starttime);
        digitalWrite(5, LOW);
        delay(starttime);
        digitalWrite(6, LOW);
        delay(starttime);
        digitalWrite(7, LOW);
        delay(starttime);
        digitalWrite(8, LOW);
        delay(starttime);
        digitalWrite(9, LOW);
        delay(starttime);
        digitalWrite(10, LOW);
        delay(starttime);
        digitalWrite(11, LOW);
        delay(starttime);
        digitalWrite(12, LOW);
        delay(starttime);
        digitalWrite(13, LOW);
        delay(starttime);

        Blink(20,starttime);
}

void loop() {
randNumber = random(0,3); //What pins per row are going to be enabled for the random? Take your max pins and add 1.

  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:


    // set the LED with the ledState of the variable:
     RandomLight();
  }
}

void RandomLight()
{
    if (randNumber == 0){
    if (ledState0 == LOW) {
      ledState0 = HIGH;
    } else {
      ledState0 = LOW;
    }
    digitalWrite(0, ledState0);
    }

    if (randNumber == 1){
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
        digitalWrite(1, ledState1);
    }


    if (randNumber == 2){
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(2, ledState2);
    }

    if (randNumber == 3){
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(3, ledState3);
    }

    if (randNumber == 4){
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(4, ledState4);
    }


    if (randNumber == 5){
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(5, ledState5);
    }


    if (randNumber == 6){
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(6, ledState6);
    }


    if (randNumber == 7){
    if (ledState7 == LOW) {
      ledState7 = HIGH;
    } else {
      ledState7 = LOW;
    }
    digitalWrite(7, ledState7);
    }


    if (randNumber == 8){
    if (ledState8 == LOW) {
      ledState8 = HIGH;
    } else {
      ledState8 = LOW;
    }
    digitalWrite(8, ledState8);
    }

    if (randNumber == 9){
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(9, ledState9);
    }

    if (randNumber == 10){
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    }
    digitalWrite(10, ledState10);
    }


    if (randNumber == 11){
    if (ledState11 == LOW) {
      ledState11 = HIGH;
    } else {
      ledState11 = LOW;
    }
    digitalWrite(11, ledState11);
    }


    if (randNumber == 12){
    if (ledState12 == LOW) {
      ledState12 = HIGH;
    } else {
      ledState12 = LOW;
    }
    digitalWrite(12, ledState12);
    }


    if (randNumber == 13){
    if (ledState13 == LOW) {
      ledState13 = HIGH;
    } else {
      ledState13 = LOW;
    }
    digitalWrite(13, ledState13);
    }
}

void LightsOn()
{
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(13, HIGH);
}

void LightsOff()
{
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
}

void Blink(int times, int delays)
{
  int i;
  for (i = 0; i < times; i++){
    LightsOn();
    delay(delays);
    LightsOff();
    delay(delays);
  }
}

