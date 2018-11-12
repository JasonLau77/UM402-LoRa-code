//Woon Jun Shen
//UM402 (433 MHz UART)
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); //TX, RX
// gnd SET_A and SET_B for Normal Mode (Send and Receive)

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
 
}

void loop() {
  if (mySerial.available() > 1) {//Read from UM402 and send to serial monitor
    String input1 = mySerial.readString();
    String input2 = mySerial.readString();
    Serial.println(input1);
    Serial.println(input2);    
  }
  delay(20);
}
