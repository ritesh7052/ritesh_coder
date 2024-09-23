int led1=8;
int led2=7;
int led
int IR1=9;
int IR2=10;
int IR3=11; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int IR1=digitalRead(9);
  int IR2=digitalRead(10);
  int IR3=digitalRead(11);
 
 if (IR1==LOW && IR2==LOW && IR3==LOW)
 {
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
                   
 } 
 else if(IR1==LOW && IR2==LOW && IR3==HIGH)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
 }
 else if(IR1==LOW && IR2==HIGH && IR3==LOW)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
 }
 else if(IR1==LOW && IR2==HIGH && IR3==HIGH)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
 }
 else if(IR1==HIGH && IR2==LOW && IR3==LOW)
  {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
 }
 else if(IR1==HIGH && IR2==LOW && IR3==HIGH)
  {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
 }
 else if(IR1==HIGH && IR2==HIGH && IR3==LOW)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
 }
 else if(IR1==HIGH && IR2==HIGH && IR3==HIGH)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
 }
}

 


  
 
