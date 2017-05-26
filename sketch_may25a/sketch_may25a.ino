
int led = 9;           // the PWM pin the LED is attached to
int sens =0;

void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
 }

// the loop routine runs over and over again forever:
void loop() {
 
  int value = analogRead(A0);
 
/* 
if (value > 250){
    digitalWrite(led, LOW); //Turn led off
  delay(500);
  }
  else{
    digitalWrite(led, HIGH); //Turn led on
  delay(500);
  }
*/
  
  
  analogWrite(led, value);
  Serial.println(value);
 //delay(1000);      

}
