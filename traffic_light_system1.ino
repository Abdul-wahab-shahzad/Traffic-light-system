// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
    
}

void loop()
{
   digitalWrite(4, HIGH);
  delay(8000);
  for(int i=0;i<3;i++){
   digitalWrite(4, LOW);
    delay(1000);
   digitalWrite(4, HIGH);
    delay(2000);
  }
  delay(1000);
   digitalWrite(4, LOW);
   digitalWrite(2, HIGH);
   delay(8000);
  for(int i=0;i<3;i++){
   digitalWrite(2, LOW);
    delay(1000);
   digitalWrite(2, HIGH);
    delay(1000);
  }
  delay(1000);
   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
     delay(8000);
  for(int i=0;i<3;i++){
   digitalWrite(3, LOW);
    delay(1000);
   digitalWrite(3, HIGH);
    delay(1000);
  }
  delay(8000);
   digitalWrite(3, LOW);
  
}