unsigned long previousMilis_Led = 0;
const long interval_Led = 1000 ;
int ledPin = 13 ;

void setup () {
  Serial.begin(9600);
  pinMode (ledPin , OUTPUT);
}

void loop() {
  unsigned long currentMillis_Led = millis ();
   if(currentMillis_Led - previousMilis_Led >= interval_Led ) {
     previousMilis_Led = currentMillis_Led ;
      int ledState = digitalRead (ledPin);
        if ( ledState == HIGH) {
          digitalWrite (ledPin,LOW);
        }
        else  {
          digitalWrite(ledPin, HIGH);
        }
   }
}