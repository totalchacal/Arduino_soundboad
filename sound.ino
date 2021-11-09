#include "Keyboard.h"

const int buttonPin_1 = 2;
const int buttonPin_2 = 3;
const int buttonPin_3 = 4;
const int buttonPin_4 = 5;
const int buttonPin_5 = 6;
const int buttonPin_6 = 7;
const int buttonPin_7 = 8;
const int buttonPin_8 = 9;
const int buttonPin_9 = 10;
const int buttonPin_10 = 11;
const int buttonPin_11 = 12;
const int buttonPin_12 = 13;// the number of the pushbutton pin
//const int ledPin =  13;      // the number of the LED pin

int buttonState_1 = 0;
int buttonState_2 = 0;
int buttonState_3 = 0;
int buttonState_4 = 0;
int buttonState_5 = 0;
int buttonState_6 = 0;
int buttonState_7 = 0;
int buttonState_8 = 0;
int buttonState_9 = 0;
int buttonState_10 = 0;
int buttonState_11 = 0;
int buttonState_12 = 0;
  
  void setup() {
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);
  // initialize  the pushbutton pin as an input:
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);
  pinMode(buttonPin_4, INPUT);
  pinMode(buttonPin_5, INPUT);
  pinMode(buttonPin_6, INPUT);
  pinMode(buttonPin_7, INPUT);
  pinMode(buttonPin_8, INPUT);
  pinMode(buttonPin_9, INPUT);
  pinMode(buttonPin_10, INPUT);
  pinMode(buttonPin_11, INPUT);
  pinMode(buttonPin_12, INPUT);
  Serial.println("soundoard uploaded");
}
  
void loop() {
  //Serial.println("soundoard uploaded");
  // read the state of the pushbutton value:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);
  buttonState_3 = digitalRead(buttonPin_3);
  buttonState_4 = digitalRead(buttonPin_4);
  buttonState_5 = digitalRead(buttonPin_5);
  buttonState_6 = digitalRead(buttonPin_6);
  buttonState_7 = digitalRead(buttonPin_7);
  buttonState_8 = digitalRead(buttonPin_8);
  buttonState_9 = digitalRead(buttonPin_9);
  buttonState_10 = digitalRead(buttonPin_10);
  buttonState_11 = digitalRead(buttonPin_11);
  buttonState_12 = digitalRead(buttonPin_12);
  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState_1 == HIGH) {
      Serial.println("Button ALT N");
    // turn LED on:
  //  digitalWrite(ledPin, HIGH);
      //Keyboard.press(KEY_LEFT_ALT);
      //Keyboard.press('X');
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('N');
      Keyboard.releaseAll();
      Serial.println("btton1");
      //delay(500);
  }
  if (buttonState_2 == HIGH) {
    // turn LED on:
    //digitalWrite(ledPin, HIGH);
      Serial.println("Button LALT F");
      Serial.println("btton2");
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('f');
      Keyboard.releaseAll();
      //delay(500);
  }
  if (buttonState_3 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Serial.println("btton3");
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('P');
      Keyboard.releaseAll();
      //delay(500);
  }
  if (buttonState_4 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Serial.println("btton4");
      Keyboard.press(KEY_F2);
      Keyboard.releaseAll();
      //delay(500);
  }
  if (buttonState_5 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_F3);
      Keyboard.releaseAll();
      Serial.println("btton5");
      //delay(500);
  }
  if (buttonState_6 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press('L');
      Keyboard.press('O');
      Keyboard.releaseAll();
      Serial.println("btton6");
      //delay(500);
  }
  if (buttonState_7 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press('L');
      Keyboard.press('P');
      Keyboard.releaseAll();
      Serial.println("btton7");
      //delay(500);
  }
  if (buttonState_8 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('x');
      Keyboard.releaseAll();
      Serial.println("btton8");
      //delay(500);
  }
  if (buttonState_9 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('c');
      Keyboard.releaseAll();
      Serial.println("btton9");
      //delay(500);
  }
  if (buttonState_10 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('i');
      Keyboard.releaseAll();
      Serial.println("btton10");
      //delay(500);
  }
  if (buttonState_11 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('v');
      Keyboard.releaseAll();
      Serial.println("btton11");
      //delay(500);
  }
  if (buttonState_12 == HIGH) {
    // turn LED on:
   // digitalWrite(ledPin, HIGH);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('b');
      Keyboard.releaseAll();
      Serial.println("btton12");
      //delay(500);
  }
}
