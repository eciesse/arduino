/*
 * Author: SMRAZA KEEN
 * Date:2016/6/29
 * IDE V1.6.9
 * Email:TechnicSmraza@outlook.com
 * Function:
 */
long randNumber;
int BASE = 2;               
int NUM = 6;             
void setup()
{
for (int i = BASE; i < BASE + NUM; i ++)
{
pinMode(i, OUTPUT);      //set port ‘i’ as an output port 
}
}
void loop(){
/*randNumber=random(2,8 );
digitalWrite(randNumber,HIGH) ;
delay(200);
digitalWrite(randNumber,LOW);
delay(200);
}
*/

for (int i = BASE; i < BASE + NUM; i ++)
{
  for(int j =0; j<255;j+=5){
analogWrite(i, j);      
delay(40);   
  }
     
}
for (int i = BASE; i < BASE + NUM; i ++)
{
for(int j =255; j>0;j-=5){
analogWrite(i, j);      
delay(40);             
}
}
}
