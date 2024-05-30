
void setup()
{
Serial.begin(96000);

  pinMode(7,OUTPUT);
}

void loop()
{
  int LDR=analogRead(A0);
  Serial.println(LDR);
  if(LDR<500)
  {
    digitalWrite(7,LOW);
  }
  else
  {
    digitalWrite(7,HIGH);
  }
}
