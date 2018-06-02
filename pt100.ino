float aA0 = 0;
float tempC= 0;

void setup() {
  Serial.begin(9600);
  pinMode( A0, INPUT );
}

void loop() {
  aA0 = analogRead(A0);
  Serial.print("  aA0=");
    Serial.print(aA0);

  //Rpt = (aA0 * R / (1024 - aA0))
  float Rpt = (aA0 * 5500 / (1024 - aA0));
Serial.print("   Rpt=");
         Serial.print(Rpt);

        tempC = ((Rpt-100) / 0.385 );
          Serial.print("  tempC=");
  Serial.println(tempC);
  delay(1000); 

}
