
#include <CapacitiveSensor.h>
 
#define speaker 11

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);     
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);      
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);         
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);  
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2,A0);
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2,A1);
CapacitiveSensor   cs_2_13 = CapacitiveSensor(2,A2);
CapacitiveSensor   cs_2_14 = CapacitiveSensor(2,A3);
CapacitiveSensor   cs_2_15 = CapacitiveSensor(2,A4);
CapacitiveSensor   cs_2_16 = CapacitiveSensor(2,A5);
CapacitiveSensor   cs_2_17 = CapacitiveSensor(2,A6);
CapacitiveSensor   cs_2_18 = CapacitiveSensor(2,A7);
CapacitiveSensor   cs_2_19 = CapacitiveSensor(2,A8);
CapacitiveSensor   cs_2_20 = CapacitiveSensor(2,A9);
CapacitiveSensor   cs_2_21 = CapacitiveSensor(2,A10);
CapacitiveSensor   cs_2_22 = CapacitiveSensor(2,A11);
CapacitiveSensor   cs_2_23 = CapacitiveSensor(2,A12);
CapacitiveSensor   cs_2_24 = CapacitiveSensor(2,A13);
CapacitiveSensor   cs_2_25 = CapacitiveSensor(2,A14);
CapacitiveSensor   cs_2_26 = CapacitiveSensor(2,A15);     


void setup()                    
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  
  Serial.begin(9600);
}

void loop()                    
{
  
  long start = millis();
  
  long total1 =  cs_2_3.capacitiveSensor(3000);
  long total2 =  cs_2_4.capacitiveSensor(3000);
  long total3 =  cs_2_5.capacitiveSensor(3000);
  long total4 =  cs_2_6.capacitiveSensor(3000);
  long total5 =  cs_2_7.capacitiveSensor(3000);
  long total6 =  cs_2_8.capacitiveSensor(3000);
  long total7 =  cs_2_9.capacitiveSensor(3000);
  long total8 =  cs_2_10.capacitiveSensor(3000);
  long total9 =  cs_2_11.capacitiveSensor(3000);
  long total10 =  cs_2_12.capacitiveSensor(3000);
  long total11 =  cs_2_13.capacitiveSensor(3000);
  long total12 =  cs_2_14.capacitiveSensor(3000);
  long total13 =  cs_2_15.capacitiveSensor(3000);
  long total14 =  cs_2_16.capacitiveSensor(3000);
  long total15 =  cs_2_17.capacitiveSensor(3000);
  long total16 =  cs_2_18.capacitiveSensor(3000);
  long total17 =  cs_2_19.capacitiveSensor(3000);
  long total18 =  cs_2_20.capacitiveSensor(3000);
  long total19 =  cs_2_21.capacitiveSensor(3000);
  long total20 =  cs_2_22.capacitiveSensor(3000);
  long total21 =  cs_2_23.capacitiveSensor(3000);
  long total22 =  cs_2_24.capacitiveSensor(3000);
  long total23 =  cs_2_25.capacitiveSensor(3000);
  long total24 =  cs_2_26.capacitiveSensor(3000);
  
  //Serial.print(millis() - start);        // check on performance in milliseconds
  
  
  
     //FRECUENCIA EN HZ
     
  if (total1 > 500) {tone(speaker,130.81);
  Serial.println("DO");
  };
  if (total2 > 500){ tone(speaker,138.59);
  Serial.println("DO#");
  }
  if (total3 > 500){ tone(speaker,146.83);
  Serial.println("RE");
  }
  if (total4 > 500){ tone(speaker,155.56);
  Serial.println("RE#");
  }
  if (total5 > 500){ tone(speaker,164.81);
  Serial.println("MI");
  }
  if (total6 > 500) {tone(speaker,174.61);
  Serial.println("FA");
  }
  if (total7 > 500) {tone(speaker,185);
  Serial.println("FA#");
  }
  if (total8 > 500) {tone(speaker,196);
  Serial.println("SOL");
  }
  if (total9 > 500) {tone(speaker,207.65);
  Serial.println("SOL#");
  }
  if (total10 > 500){ tone(speaker,220);
  Serial.println("LA");
  }
  if (total11 > 500){ tone(speaker,233.08);
  Serial.println("LA#");
  }
  if (total12 > 500){ tone(speaker,246.94);
  Serial.println("SI");
  }
  if (total13 > 500){ tone(speaker,261.63);
  Serial.println("DO");
  }
  if (total14 > 500){ tone(speaker,277.18);
  Serial.println("DO#");
  }
  if (total15 > 500){ tone(speaker,293.66);
  Serial.println("RE");
  }
  if (total16 > 500){ tone(speaker,311.13);
  Serial.println("RE#");
  }
  if (total17 > 500){ tone(speaker,329.63);
  Serial.println("MI");
  }
  if (total18 > 500){ tone(speaker,349.23);
  Serial.println("FA");
  }
  if (total19 > 500){ tone(speaker,369.99);
  Serial.println("FA#");
  }
  if (total20 > 500){ tone(speaker,392);
  Serial.println("SOL");
  }
  if (total21 > 500){ tone(speaker,415.3);
  Serial.println("SOL#");
  }
  if (total22 > 500){ tone(speaker,440);
  Serial.println("LA");
  }
  if (total23 > 500){ tone(speaker,466);
  Serial.println("LA#");
  }
  if (total24 > 500){ tone(speaker,493.88);
  Serial.println("SI");
  }
  
  if (total1<=500  &  total2<=500  &  total3<=500 & total4<=500  &  total5<=500  &  total6<=500 &  total7<=500 &  total8<=500 &  total9<=500 &  total10<=500 &
    total11<=500 &  total12<=500 &  total13<=500 &  total14<=500 &  total15<=500 &  total16<=500 &  total17<=500 &  total18<=500 &  total19<=500
    &  total20<=500 &  total21<=500 &  total22<=500 &  total23<=500 &  total24<=500)
    noTone(speaker);

  delay(10);                             // arbitrary delay to limit data to serial port 
}
