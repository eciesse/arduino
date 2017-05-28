
int BASE=2;
int NUM=6;
void setup() {
  // put your setup code here, to run once:
  for(int i =BASE ; i<NUM+BASE ; i++){
    pinMode(i,OUTPUT);
  }

  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = analogRead(A0); 

  for(int i =BASE ; i<NUM+BASE ; i++){ 
    digitalWrite(i,HIGH);
   delay(100);
   //digitalWrite(i,LOW);
   // delay(100);
  } 
 for(int i =NUM+BASE-1 ; i>=BASE ; i--){ 
    digitalWrite(i,LOW);
   delay(100);
  } 
  int LEDbrightness ; 
  int LEDnight ;
     
  LEDbrightness = map(value, 0,700, 0, 255 );
  LEDnight=255-LEDbrightness;
  if(LEDnight <80)LEDnight=0;
  analogWrite(value, LEDnight);
  Serial.println(LEDbrightness);
 
  


}
