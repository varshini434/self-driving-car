char t;
void setup()
{
 pinMode(8,OUTPUT );
 pinMode(9,OUTPUT );
 pinMode(10,OUTPUT );
 pinMode(11, OUTPUT);
}

void loop() 
{
if(Serial.available())
{
   t = Serial.read();
}
// Forward
if(t=='f' || t=='F')
{
  Serial.println("Forward");
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
// Forward
if(t=='f' || t=='F')
{
  Serial.println("Forward");
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}


// Forward
if(t=='f' || t=='F')
{
  Serial.println("Forward");
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

// Forward
if(t=='f' || t=='F')
{
  Serial.println("Forward");
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
//Backward
if(t =='b' || t=='B')
{
  Serial.println("Backward");
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}
//Left
if(t =='l' || t=='L')
{
  Serial.println("Left");
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
//Right
if(t =='r' || t=='R')
{
  Serial.println("Left");
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}

//Stop
if(t =='s' || t=='S')
{
  Serial.println("Stop");
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
delay(300);
}
