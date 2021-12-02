#include <CapacitiveSensor.h>

//Pin conectado a latch pin del 74HC595 ST-CP
const int latchPin = 13;
//Pin conectado a clock pin (SH_CP)
const int clockPin = 12;
////Pin conectado a Data in (DS)
const int dataPin = 11;
//crear un nuevo pin para los otros leds 
#define speaker 10
int sensib = 200;

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2, 3);
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2, 4);
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2, 5);
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2, 6);
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2, 7);
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2, 8);
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2, 9);

boolean noPresionado1 = false;
boolean noPresionado2 = false;
boolean noPresionado3 = false;
boolean noPresionado4 = false;
boolean noPresionado5 = false;
boolean noPresionado6 = false;
boolean noPresionado7 = false;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop()
{
  // Set a timer.
  long start = millis();

  // Set the sensib of the sensors.
  long total1 =  cs_2_3.capacitiveSensor(30);
  long total2 =  cs_2_4.capacitiveSensor(30);
  long total3 =  cs_2_5.capacitiveSensor(30);
  long total4 =  cs_2_6.capacitiveSensor(30);
  long total5 =  cs_2_7.capacitiveSensor(30);
  long total6 =  cs_2_8.capacitiveSensor(30);
  long total7 =  cs_2_9.capacitiveSensor(30);



  if (total1 >= sensib * 12 && noPresionado1 == false) { //PARA LA TECLA 1
    tone(speaker, 131); //DO
    Serial.println('A');
    encender(1);
    noPresionado1 = true;
  }
  if (noPresionado1 == true && total1 <= sensib * 12) {
    apagar();
    noPresionado1 = false;
  }
  if (total2 >= sensib * 12 && noPresionado2 == false) { //PARA LA TECLA 2
    tone(speaker, 147);//RE
    Serial.println('B');
    encender(2);
    noPresionado2 = true;
  }
  if (noPresionado2 == true && total2 <= sensib * 12) {
    apagar();
    noPresionado2 = false;
  }
  if (total3 >= sensib * 12 && noPresionado3 == false) { //PARA LA TECLA 3
    tone(speaker, 165);//MI
    Serial.println('C');
    encender(4);
    noPresionado3 = true;
  }
  if (noPresionado3 == true && total3 <= sensib * 12) {
    apagar();
    noPresionado3 = false;
  }
  if (total4 >= sensib * 12 && noPresionado4 == false) {//PARA LA TECLA 4
    tone(speaker, 175);//FA
    Serial.println('D');
    encender(8);
    noPresionado4 = true;
  }
  if (noPresionado4 == true && total4 <= sensib * 12) {
    apagar();
    noPresionado4 = false;
  }
  if (total5 >= sensib * 12 && noPresionado5 == false) {//para la tecla 5
    tone(speaker, 196);//SOL
    Serial.println('E');
    encender(16);
    noPresionado5 = true;
  }
  if (noPresionado5 == true && total5 <= sensib * 12) {
    apagar();
    noPresionado5 = false;
  }
  if (total6 >= sensib * 12 && noPresionado6 == false) {//PARA LA TECLA 6
    tone(speaker, 220);//LA
    Serial.println('F');
    encender(32);
    noPresionado6 = true;
  }
  if (noPresionado6 == true && total6 <= sensib * 12) {
    apagar();
    noPresionado6 = false;
  }
  if (total7 >= sensib * 12 && noPresionado7 == false) {//PARA LA TECLA 7
    tone(speaker, 247);//SI
    Serial.println('B');
    encender(64);
    noPresionado7 = true;
  }
  if (noPresionado7 == true && total7 <= sensib * 12) {
    apagar();
    noPresionado7 = false;
  }


  if (total1 <= 500  &  total2 <= 500  &  total3 <= 500 & total4 <= 500  &  total5 <= 500  &  total6 <= 500 &  total7 <= 500)
    noTone(speaker);

  delay(5);
}


void encender(int num) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, num);
  digitalWrite(latchPin, HIGH);
}
void apagar() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0);
  digitalWrite(latchPin, HIGH);
}
