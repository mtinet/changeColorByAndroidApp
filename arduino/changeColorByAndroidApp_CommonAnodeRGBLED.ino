int pin1=9;
int pin2=10;
int pin3=11;
int plus=6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(plus,OUTPUT);
  analogWrite(plus,255);  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void serialEvent() {
  int r = Serial.parseInt();
  int g = Serial.parseInt();
  int b = Serial.parseInt();

  if(Serial.read() == '\n') {
    analogWrite(9, 255-r);
    analogWrite(10, 255-g);
    analogWrite(11, 255-b);
  }
}
