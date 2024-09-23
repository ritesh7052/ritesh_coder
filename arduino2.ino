int led=8;
int button=5;

void setup()
{
  Serial.begin(9600);
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
 
}

void loop(){
  if (digitalRead(button)==LOW)
  {
    digitalWrite(led,HIGH);
  }

  else 
  {
    digitalWrite(led,LOW);
  
  }
}

 


  
 