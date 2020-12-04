int iterations=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(12)==LOW){
    iterations=iterations+1;
  	
    if(iterations>=5){
    	digitalWrite(13, HIGH);	
    }else{
    	digitalWrite(13, LOW);
    }
  }else{
    iterations=0;
  	digitalWrite(13, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}
