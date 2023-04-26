int p = 11;

void setup() {
  for(int i  = 0; i < 8; i++)
  {
    for(int j = i; j >= 0; j = j/2)
    {
      if(j%2 == 1)
      digitalWrite(p++, HIGH);
      else
      digitalWrite(p++, LOW);
    }
  }

}

void loop() {}
