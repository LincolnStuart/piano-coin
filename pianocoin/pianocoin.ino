#include <ReadPin.h>

int pinSpeaker = 13;
int pinC = 12;
int pinD = 9;
int pinE = 7;
int pinF = 2;
int pinG = 3;
int pinA = 4;
int pinB = 10;
ReadPin read;

void setup(){
  pinMode(pinSpeaker, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop(){
  
  if(read.readCapacitivePin(pinC)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1915);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1915);
    }
  } 
  
  if(read.readCapacitivePin(pinD)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1700);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1700);
    }
  }
  
  if(read.readCapacitivePin(pinE)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1519);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1519);
    }
  }
  
  if(read.readCapacitivePin(pinF)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1432);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1432);
    }
  }
  
  if(read.readCapacitivePin(pinG)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1275);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1275);
    }
  }
  
  if(read.readCapacitivePin(pinA)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1136);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1136);
    }
  } 
  
  if(read.readCapacitivePin(pinB)>1){
    for (int i = 0; i < 100; i += 3) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(1014);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(1014);
    }
  }  
}

