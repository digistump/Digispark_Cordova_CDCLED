#include <DigiCDC.h>
void setup() {                
  // initialize the digital pin as an output.
  SerialUSB.begin(); 
  pinMode(1,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  if (SerialUSB.available()) {
    char input = SerialUSB.read();
    if(input == '0')
      digitalWrite(1,LOW);
    else if(input == '1')
      digitalWrite(1,HIGH);
      
  }
  
   SerialUSB.delay(100);               // keep usb alive // can alos use SerialUSB.refresh();
}
