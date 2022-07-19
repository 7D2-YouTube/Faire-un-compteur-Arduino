byte i;
int bouton = 8;

void setup() {
  Serial.begin(9600);
  
  pinMode(bouton, INPUT_PULLUP);

  i=0;
}

void loop() {
  if(digitalRead(bouton) == LOW)
  {
    i=i+1;
    Serial.println(i);
    delay(1000);
  }

}
