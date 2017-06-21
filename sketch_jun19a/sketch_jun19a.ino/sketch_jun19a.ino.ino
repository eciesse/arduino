int triggerPort = 7;
int echoPort = 8;
void setup()
{
pinMode( triggerPort, OUTPUT );
pinMode( echoPort, INPUT );
Serial.begin( 9600 );
Serial.println( "Sensore ultrasuoni: ");
}

void loop() {
//porta bassa l'uscita del trigger
digitalWrite( triggerPort, LOW );

//invia un impulso di 10microsec su trigger
digitalWrite( triggerPort, HIGH );
delayMicroseconds( 10 );
digitalWrite( triggerPort, LOW );

long duration= pulseIn(echoPort,HIGH);
float distanza= 0.00034*duration/2.0;
Serial.print ("distanza in m:");
Serial.println (distanza);
delay(1000);
}


