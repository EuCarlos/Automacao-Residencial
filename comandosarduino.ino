void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  
    digitalWrite(13, HIGH);
    delay(1000);
  
    digitalWrite(13, LOW);
    delay(1000); 
    
    digitalWrite(12, HIGH);
    delay(1000);
  
    digitalWrite(12, LOW);
    delay(1000); 

    digitalWrite(11, HIGH);
    delay(1000);
  
    digitalWrite(11, LOW);
    delay(1000); 

    digitalWrite(10, HIGH);
    delay(1000);
  
    digitalWrite(10, LOW);
    delay(1000); 
}