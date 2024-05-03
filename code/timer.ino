/*
 Read the value of a T000140 Potentiometer connected to I0, 
 then uses the results to write the brightness on a T010111 
 LED Module connected on O0. Also prints the values 
 on the serial monitor.

 created 29 Dec. 2008
 Modified 4 Sep 2010
 by Tom Igoe
 modified 7 dec 2010
 by Davide Gomba
 modified on Ded 2011
 by Federico Vanzati
 modified on Jun 2013
 by Matteo Loglio<http://matlo.me>

 This example code is in the public domain.
 */

#include <TinkerKit.h>

TKPotentiometer pot(I0);// creating the object 'pot' that belongs to the 'TKPotentiometer' 
                        // class. Hooked up on I0

int sliderVal = 0;  // value read from the pot

boolean vicino = false;

int tempoCorrente;
int tempoTotale;
int tempoUscita;

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // read the potentiometer's value:
  sliderVal = pot.read();  

if (sliderVal > 601){
  if (vicino == false){
    Serial.println(" NO");
  } else {
    tempoUscita = millis();
    tempoTotale = tempoUscita - tempoCorrente;
    Serial.print(tempoUscita);
    Serial.print(" - ");
    Serial.print(tempoCorrente);
    Serial.print(" = ");
    Serial.print(tempoTotale);
    vicino = false;
  }  
} else {
  if (sliderVal < 100){
//    Serial.print(sliderVal);
    Serial.println(" BUZZER");
  }  

  else if (sliderVal > 101 && sliderVal < 600){
//    Serial.print(sliderVal);
    Serial.println(" OK");
    if (vicino == false) {
      tempoCorrente = millis();
      Serial.println(tempoCorrente);
      vicino = true;
    }
}
}
  
  delay(200);
                            
}
