#include <CapacitiveSensor.h>

//Pin conectado a latch pin del 74HC595
const int latchPin = 12;
//Pin conectado a clock pin (SH_CP)
const int clockPin = 11;
////Pin conectado a Data in (DS) 
const int dataPin = 10;
const int dataPin2 = 9;
const int dataPin3 = 8;


//crear un nuevo pin para los otros leds 
#define speaker 7 // puerto de la bocina
int sensib = 200;

//CREAR LOS SENSORES
CapacitiveSensor   cs_1 = CapacitiveSensor(2,6);
CapacitiveSensor   cs_2 = CapacitiveSensor(2,5);
CapacitiveSensor   cs_3 = CapacitiveSensor(2,4);
CapacitiveSensor   cs_4 = CapacitiveSensor(2,3);
CapacitiveSensor   cs_5 = CapacitiveSensor(2,22);
CapacitiveSensor   cs_6 = CapacitiveSensor(2,23);
CapacitiveSensor   cs_7 = CapacitiveSensor(2,24);
CapacitiveSensor   cs_8 = CapacitiveSensor(2,25);
CapacitiveSensor   cs_9 = CapacitiveSensor(2,26);
CapacitiveSensor   cs_10 = CapacitiveSensor(2,27);
CapacitiveSensor   cs_11 = CapacitiveSensor(2,28);
CapacitiveSensor   cs_12 = CapacitiveSensor(2,29);
CapacitiveSensor   cs_13 = CapacitiveSensor(2,30);
CapacitiveSensor   cs_14 = CapacitiveSensor(2,31);
CapacitiveSensor   cs_15 = CapacitiveSensor(2,32);
CapacitiveSensor   cs_16 = CapacitiveSensor(2,33);
CapacitiveSensor   cs_17 = CapacitiveSensor(2,34);
CapacitiveSensor   cs_18 = CapacitiveSensor(2,35);
CapacitiveSensor   cs_19 = CapacitiveSensor(2,36);
CapacitiveSensor   cs_20 = CapacitiveSensor(2,37);
CapacitiveSensor   cs_21 = CapacitiveSensor(2,38);
CapacitiveSensor   cs_22 = CapacitiveSensor(2,39);
CapacitiveSensor   cs_23 = CapacitiveSensor(2,40);
CapacitiveSensor   cs_24 = CapacitiveSensor(2,41);

boolean noPress [] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false,};

void setup() {
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(dataPin2, OUTPUT);
  pinMode(dataPin3, OUTPUT);
}

void loop(){
  
  long start = millis();

  // Set the sensib of the sensors.
  long total[] ={cs_1.capacitiveSensor(30), cs_2.capacitiveSensor(30), cs_3.capacitiveSensor(30), cs_4.capacitiveSensor(30), cs_5.capacitiveSensor(30), cs_6.capacitiveSensor(30), cs_7.capacitiveSensor(30), cs_8.capacitiveSensor(30), 
                cs_9.capacitiveSensor(30), cs_10.capacitiveSensor(30), cs_11.capacitiveSensor(30), cs_12.capacitiveSensor(30), cs_13.capacitiveSensor(30), cs_14.capacitiveSensor(30), cs_15.capacitiveSensor(30), cs_16.capacitiveSensor(30), 
                cs_17.capacitiveSensor(30), cs_18.capacitiveSensor(30), cs_19.capacitiveSensor(30), cs_20.capacitiveSensor(30), cs_21.capacitiveSensor(30), cs_22.capacitiveSensor(30), cs_23.capacitiveSensor(30), cs_24.capacitiveSensor(30)};


//COMPARAR LOS VALORES CON LA SENSIBILIDAD Y SI ESTA PRESIONADO O NO

  if (total[0] >= sensib * 12 && noPress[0] == false) { ////////////////////////PARA LA TECLA 1
    tone(speaker, 131); //DO
    Serial.println('A');
    encender1(1); //led 1
    noPress[0] = true;
  }
  if (noPress[0] == true && total[0] <= sensib * 12) {
    apagar1();
    noPress[0] = false;
  }
  if (total[1] >= sensib * 12 && noPress[1] == false) { ////////////////////////PARA LA TECLA 2
    tone(speaker, 139);//DO#
    Serial.println('B');
    encender1(2); //led 2
    noPress[1] = true;
  }
  if (noPress[1] == true && total[1] <= sensib * 12) {
    apagar1();
    noPress[1] = false;
  }
  if (total[2] >= sensib * 12 && noPress[2] == false) { ////////////////////////PARA LA TECLA 3
    tone(speaker, 147);//RE
    Serial.println('C');
    encender1(4); //led 3
    noPress[2] = true;
  }
  if (noPress[2] == true && total[2] <= sensib * 12) {
    apagar1();
    noPress[2] = false;
  }
  if (total[3] >= sensib * 12 && noPress[3] == false) {////////////////////////PARA LA TECLA 4
    tone(speaker, 156);//RE#
    Serial.println('D');
    encender1(8); //led 4
    noPress[3] = true;
  }
  if (noPress[3] == true && total[3] <= sensib * 12) {
    apagar1();
    noPress[3] = false;
  }
  if (total[4] >= sensib * 12 && noPress[4] == false) { ////////////////////////para la tecla 5
    tone(speaker, 165);//MI
    Serial.println('E');
    encender1(16);//led 5
    noPress[4] = true;
  }
  if (noPress[4] == true && total[4] <= sensib * 12) {
    apagar1();
    noPress[4] = false;
  }
  if (total[5] >= sensib * 12 && noPress[5] == false) {//////////////////////////PARA LA TECLA 6
    tone(speaker, 175);//FA
    Serial.println('F');
    encender1(32); //led 6
    noPress[5] = true;
  }
  if (noPress[5] == true && total[5] <= sensib * 12) {
    apagar1();
    noPress[5] = false;
  }
  if (total[6] >= sensib * 12 && noPress[6] == false) {//////////////////////////PARA LA TECLA 7
    tone(speaker, 185);//FA#
    Serial.println('B');
    encender1(64); //led 7
    noPress[6] = true;
  }
  if (noPress[6] == true && total[6] <= sensib * 12) {
    apagar1();
    noPress[6] = false;
  }
  ///////////////////////////CAMBIAR NOTA Y FRECUENCIA y led/////////////////////////////////////////////////////////////////////////////////
  if (total[7] >= sensib * 12 && noPress[7] == false) {//////////////////////////PARA LA TECLA 8
    tone(speaker, 196);//SOL
    Serial.println('B');
    encender1(128); //led 8
    noPress[7] = true;
  }
  if (noPress[7] == true && total[7] <= sensib * 12) {
    apagar1();
    noPress[7] = false;
  }
  if (total[8] >= sensib * 12 && noPress[8] == false) {//////////////////////////PARA LA TECLA 9
    tone(speaker, 208);//SOL#
    Serial.println('B');
    encender2(1); //led 9
    noPress[8] = true;
  }
  if (noPress[8] == true && total[8] <= sensib * 12) {
    apagar2();
    noPress[8] = false;
  }
  if (total[9] >= sensib * 12 && noPress[9] == false) {//////////////////////////PARA LA TECLA 10
    tone(speaker, 220);//LA
    Serial.println('B');
    encender2(2);//led 10
    noPress[9] = true;
  }
  if (noPress[9] == true && total[9] <= sensib * 12) {
    apagar2();
    noPress[9] = false;
  }
  if (total[10] >= sensib * 12 && noPress[10] == false) {//////////////////////////PARA LA TECLA 11
    tone(speaker, 233.1);//LA#
    Serial.println('B');
    encender2(4);//led 11
    noPress[10] = true;
  }
  if (noPress[10] == true && total[10] <= sensib * 12) {
    apagar2();
    noPress[10] = false;
  }
  if (total[11] >= sensib * 12 && noPress[11] == false) {//////////////////////////PARA LA TECLA 12
    tone(speaker, 247);//SI
    Serial.println('B');
    encender2(8); //led 12
    noPress[11] = true;
  }
  if (noPress[11] == true && total[11] <= sensib * 12) {
    apagar2();
    noPress[11] = false;
  }
  if (total[12] >= sensib * 12 && noPress[12] == false) {//////////////////////////PARA LA TECLA 13
    tone(speaker, 262);//DO
    Serial.println('B');
    encender2(16);//led 13
    noPress[12] = true;
  }
  if (noPress[12] == true && total[12] <= sensib * 12) {
    apagar2();
    noPress[12] = false;
  }
  if (total[13] >= sensib * 12 && noPress[13] == false) {//////////////////////////PARA LA TECLA 14
    tone(speaker, 278);//DO#
    Serial.println('B');
    encender2(32); //led 14
    noPress[13] = true;
  }
  if (noPress[13] == true && total[13] <= sensib * 12) {
    apagar2();
    noPress[13] = false;
  }
  if (total[14] >= sensib * 12 && noPress[14] == false) {//////////////////////////PARA LA TECLA 15
    tone(speaker, 294);//RE
    Serial.println('B');
    encender2(64); //led 15
    noPress[14] = true;
  }
  if (noPress[14] == true && total[14] <= sensib * 12) {
    apagar2();
    noPress[14] = false;
  }
  if (total[15] >= sensib * 12 && noPress[15] == false) {//////////////////////////PARA LA TECLA 16
    tone(speaker, 312);//RE#
    Serial.println('B');
    encender2(128);//led 16
    noPress[15] = true;
  }
  if (noPress[15] == true && total[15] <= sensib * 12) {
    apagar2();
    noPress[15] = false;
  }
  if (total[16] >= sensib * 12 && noPress[16] == false) {//////////////////////////PARA LA TECLA 17
    tone(speaker, 330);//MI
    Serial.println('B');
    encender3(1); //led 17
    noPress[16] = true;
  }
  if (noPress[16] == true && total[16] <= sensib * 12) {
    apagar3();
    noPress[16] = false;
  }
  if (total[17] >= sensib * 12 && noPress[17] == false) {//////////////////////////PARA LA TECLA 18
    tone(speaker, 350);//FA
    Serial.println('B');
    encender3(2);//led 18
    noPress[17] = true;
  }
  if (noPress[17] == true && total[17] <= sensib * 12) {
    apagar3();
    noPress[17] = false;
  }
  if (total[18] >= sensib * 12 && noPress[18] == false) {//////////////////////////PARA LA TECLA 19
    tone(speaker, 370);//FA#
    Serial.println('B');
    encender3(4);//led 19
    noPress[18] = true;
  }
  if (noPress[18] == true && total[18] <= sensib * 12) {
    apagar3();
    noPress[18] = false;
  }
  if (total[19] >= sensib * 12 && noPress[19] == false) {//////////////////////////PARA LA TECLA 20
    tone(speaker, 392);//SOL
    Serial.println('B');
    encender3(8); //led 20
    noPress[19] = true;
  }
  if (noPress[19] == true && total[19] <= sensib * 12) {
    apagar3();
    noPress[19] = false;
  }
  if (total[20] >= sensib * 12 && noPress[20] == false) {//////////////////////////PARA LA TECLA 21
    tone(speaker, 416);//SOL#
    Serial.println('B');
    encender3(16);//led 21
    noPress[20] = true;
  }
  if (noPress[20] == true && total[20] <= sensib * 12) {
    apagar3();
    noPress[20] = false;
  }
  if (total[21] >= sensib * 12 && noPress[21] == false) {//////////////////////////PARA LA TECLA 22
    tone(speaker, 440);//LA
    Serial.println('B');
    encender3(32); //led 22
    noPress[21] = true;
  }
  if (noPress[21] == true && total[21] <= sensib * 12) {
    apagar3();
    noPress[21] = false;
  }
  if (total[22] >= sensib * 12 && noPress[22] == false) {//////////////////////////PARA LA TECLA 23
    tone(speaker, 466);//LA#
    Serial.println('B');
    encender3(64); //led 23
    noPress[22] = true;
  }
  if (noPress[22] == true && total[22] <= sensib * 12) {
    apagar3();
    noPress[22] = false;
  }
  if (total[23] >= sensib * 12 && noPress[23] == false) {//////////////////////////PARA LA TECLA 24
    tone(speaker, 494);//SI
    Serial.println('B');
    encender3(128); //led 24
    noPress[23] = true;
  }
  if (noPress[23] == true && total[23] <= sensib * 12) {
    apagar3();
    noPress[23] = false;
  }


  if (total[0] <= 500  &  total[1] <= 500  &  total[2] <= 500 & total[3] <= 500  &  total[4] <= 500  &  total[5] <= 500 &  total[6] <= 500 &
      total[7] <= 500  &  total[8] <= 500  &  total[9] <= 500 & total[10] <= 500  &  total[11] <= 500  &  total[12] <= 500 &  total[13] <= 500 &
      total[14] <= 500  &  total[15] <= 500  &  total[16] <= 500 & total[17] <= 500  &  total[18] <= 500  &  total[19] <= 500 &  total[20] <= 500 &
      total[21] <= 500  &  total[22] <= 500  &  total[23] <= 500)
    noTone(speaker);


  delay(5);
}


void encender1(int num) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, num);
  digitalWrite(latchPin, HIGH);
}
void apagar1() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 0);
  digitalWrite(latchPin, HIGH);
}
void encender2(int num) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin2, clockPin, MSBFIRST, num);
  digitalWrite(latchPin, HIGH);
}
void apagar2() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin2, clockPin, MSBFIRST, 0);
  digitalWrite(latchPin, HIGH);
}
void encender3(int num) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin3, clockPin, MSBFIRST, num);
  digitalWrite(latchPin, HIGH);
}
void apagar3() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin3, clockPin, MSBFIRST, 0);
  digitalWrite(latchPin, HIGH);
}
