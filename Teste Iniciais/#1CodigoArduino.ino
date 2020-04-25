void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  int intervalo1Pisca;
  int intervalo2Pisca;
  intervalo1Pisca = 100;
  intervalo2Pisca = 1000;
  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(intervalo1Pisca);
  
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(intervalo2Pisca); 
}