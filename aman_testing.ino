int trigPin1 = 9;    // Trigger
int echoPin1 = 10;    // Echo

int trigPin2 = 3;    // Trigger
int echoPin2 = 4;    // Echo

int trigPin3 = 5;    // Trigger
int echoPin3 = 6;    // Echo

int trigPin4 = 7;    // Trigger
int echoPin4 = 8;    // Echo

long duration1,duration2,duration3,duration4,cm1,cm2,cm3,cm4;

int led1=12,led2=13,led3=A0,led4=A1,led5=A2,led6=A3,led7=A4,led8=A5;
int i;
char incomingByte[13];
char a[13] = {' ','1','A','0','0','0','3','D','2','B','7','7','C'};
int bs;
int M1=1,M2=2;
void setup()
{
  Serial.begin(19200);
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  pinMode(echoPin4, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(11,INPUT);
  pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT);
}

void loop()
{
  bs=digitalRead(11);
  if (Serial.available() > 0 || bs==0)
{
                  digitalWrite(M1,1);
                  digitalWrite(M2,0);
                  Serial.end();
                  digitalWrite(led1,LOW); //Green
                  digitalWrite(led2,HIGH);  //Red
                  digitalWrite(led3,LOW); //Green
                  digitalWrite(led4,HIGH); //Red
                  digitalWrite(led5,LOW); //Green
                  digitalWrite(led6,HIGH); //Red
                  digitalWrite(led7,LOW); // Green
                  digitalWrite(led8,HIGH); //Red
                  delay(5000);
                   digitalWrite(M2,1);
                  digitalWrite(M1,0);
                    delay(1000);
                  Serial.begin(19200);
                
}             


  digitalWrite(trigPin1, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  pinMode(echoPin1, INPUT);
  duration1 = pulseIn(echoPin1, HIGH);
  cm1 = (duration1/2) / 29.1;     

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  pinMode(echoPin2, INPUT);
  duration2 = pulseIn(echoPin2, HIGH);
  cm2 = (duration2/2) / 29.1;    

  digitalWrite(trigPin3, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  pinMode(echoPin3, INPUT);
  duration3 = pulseIn(echoPin3, HIGH);
  cm3 = (duration3/2) / 29.1;    


  digitalWrite(trigPin4, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);
  pinMode(echoPin4, INPUT);
  duration4 = pulseIn(echoPin4, HIGH);
  cm4 = (duration4/2) / 29.1;    

  if(cm1>10 && cm2>10 && cm3>10 && cm4>10)
  {
    digitalWrite(led1,HIGH); //Green
    digitalWrite(led2,LOW);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(1000);
    digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,HIGH); //Green
    digitalWrite(led4,LOW); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(1000);
    digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,HIGH); //Green
    digitalWrite(led6,LOW); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(1000);
    digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,HIGH); // Green
    digitalWrite(led8,LOW); //Red
    delay(1000);
  } 
  if(cm1<10 && cm2>10 && cm3>10 && cm4>10)
  {
    digitalWrite(led1,HIGH); //Green
    digitalWrite(led2,LOW);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(6000);
  }
   if(cm1>10 && cm2<10 && cm3>10 && cm4>10)
  {
   digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,HIGH); //Green
    digitalWrite(led4,LOW); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(6000);
  }
   if(cm1>10 && cm2>10 && cm3<10 && cm4>10)
  {
     digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,HIGH); //Green
    digitalWrite(led6,LOW); //Red
    digitalWrite(led7,LOW); // Green
    digitalWrite(led8,HIGH); //Red
    delay(6000);
  }
   if(cm1>10 && cm2>10 && cm3>10 && cm4<10)
  {
    digitalWrite(led1,LOW); //Green
    digitalWrite(led2,HIGH);  //Red
    digitalWrite(led3,LOW); //Green
    digitalWrite(led4,HIGH); //Red
    digitalWrite(led5,LOW); //Green
    digitalWrite(led6,HIGH); //Red
    digitalWrite(led7,HIGH); // Green
    digitalWrite(led8,LOW); //Red
    delay(6000);
  }

}
