int motor1in1=2;
int motor1in2=3;
int motor2in1=4;
int motor2in2=5;
int ir1=9;
int ir2=8;

 

void setup()
{
   pinMode(motor1in1,OUTPUT); 
  pinMode(motor1in2,OUTPUT); 
  pinMode(motor2in1,OUTPUT); 
  pinMode(motor2in2,OUTPUT); 
  
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);

}

void loop(){

int ir1=digitalRead(9);
  int ir2=digitalRead(8);
if (ir1==LOW) 
{
 
 digitalWrite(motor1in1,HIGH);
}
 else
 {
  digitalWrite(motor1in1, LOW);
}
  if (ir2==LOW )
  {
 
   digitalWrite(motor2in1, HIGH);
  }
  else
  {
  digitalWrite(motor2in1, LOW);
  
  }

   if  (ir1==LOW && ir2==LOW)
  {
  
  digitalWrite(motor1in1, HIGH);
  digitalWrite(motor2in1, HIGH);
  
  }

 
  }




