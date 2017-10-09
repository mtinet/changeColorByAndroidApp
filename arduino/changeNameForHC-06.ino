//  HC-06 블루투스 모듈의 이름을 바꿀 때 사용하는 프로그램  
// https://goo.gl/bRhkgR 참조  


#include <SoftwareSerial.h>
 
SoftwareSerial BTSerial(2, 3);
 
void setup(){
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available())
   Serial.write(BTSerial.read());
  
  if (Serial.available())
   BTSerial.write(Serial.read());
}
