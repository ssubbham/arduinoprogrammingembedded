// C++ code
// 
int timer=20;
void setup()
{
  for(int thisPin=3;thisPin<=5;thisPin++){
    pinMode(thisPin,OUTPUT);
  }
}

void loop()
{
  for(int thisPin=3;thisPin<=5;thisPin++){
  digitalWrite(thisPin,HIGH);
  delay(timer);
  digitalWrite(thisPin,LOW);
  }
   for(int thisPin=6;thisPin>=3;thisPin--){
  digitalWrite(thisPin,HIGH);
  delay(timer);
  digitalWrite(thisPin,LOW);
  }
}