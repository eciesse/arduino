int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
int photocellReading;     // the analog reading from the sensor divider
int LEDpin = 9;          // connect Red LED to pin 11 (PWM pin)
int LEDbrightness;        //
int LEDnight; 

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
  //pinMode(LEDpin, INPUT_PULLUP);
}
 
void loop(void) {
  photocellReading = analogRead(photocellPin);  
 
  Serial.print("ledbrightness = ");
 // Serial.println(photocellReading);     // the raw analog reading
 
  // LED gets brighter the darker it is at the sensor
  // that means we have to -invert- the reading from 0-1023 back to 1023-0
  //photocellReading = 500 - photocellReading;
  //now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
  LEDbrightness = map(photocellReading, 0, 400, 0, 255);
  LEDnight=255-LEDbrightness;
  if(LEDnight <80)LEDnight=0;
  analogWrite(LEDpin, LEDnight);
  Serial.println(LEDbrightness);
 
  delay(100);
}
