#define INFRA_in 3
#define RELAY_out 13

void setup()
{
  pinMode(INFRA_in, INPUT);
  pinMode(RELAY_out, OUTPUT);
  Serial.begin(9600);
}

int iterations = 0;

void loop()
{
  if (digitalRead(INFRA_in) == LOW)
  {
    ++iterations;

    if (iterations >= 2)
    {
      digitalWrite(RELAY_out, HIGH);
    }
    else
    {
      digitalWrite(RELAY_out, LOW);
    }
  }
  else
  {
    iterations = 0;
    digitalWrite(RELAY_out, HIGH);
  }
  delay(500);
}
