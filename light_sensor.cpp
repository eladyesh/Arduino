// Arduino and KY-018 module
// light sensor of A0 enterence
void setup() {
  Serial.begin(9600); // initialize serial monitor
  Serial.println("A0       A1");
}

void loop() {
   // send analog input to serial monitor
  int a0 = analogRead(A0);
  Serial.print(a0);
  Serial.print("\t");

  int a1 = analogRead(A1);
  Serial.print(a1);
  Serial.println();

  if (a0 < 30){
    if (a1 < 30){
      Serial.println("==================Laser==================");
      char message[50];
      sprintf(message, "a0 = %d, a1 = %d", a0, a1);
      Serial.println(message);
      Serial.println("==================Laser==================");
    }
  }
  delay(1000);
}
