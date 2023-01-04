char t;
void setup()
{
 pinMode(13,OUTPUT );
 
}

void loop() 
{
if(Serial.available())
{
   t = Serial.read();
}
// Forward
if(t=='h' || t=='H')
{
  Serial.println("ON");
  digitalWrite(13,HIGH);
  
}
if(t=='l' || t=='L')
{
  Serial.println("Off");
  digitalWrite(13,LOW);
}
delay(300);
}
