int LS=2;
int RS=3;
int LM1=4;
int LM2=5;
int RM1=6;
int RM2=7;
void setup()
{
pinMode(LS,INPUT);
pinMode(RS,INPUT);
pinMode(LM1,OUTPUT);
pinMode(LM2,OUTPUT);
pinMode(RM1,OUTPUT);
pinMode(RM2,OUTPUT);
}

void loop() {
if((digitalRead(LS)) && (digitalRead(RS)))  //STOP
{
 digitalWrite(LM1,LOW);
 digitalWrite(LM2,LOW);
 digitalWrite(RM1,LOW);
 digitalWrite(RM2,LOW);
 delay(20);
}
if(!(digitalRead(LS)) && !(digitalRead(RS)))  //FWD
{
 digitalWrite(LM1,HIGH);
 digitalWrite(LM2,LOW);
 digitalWrite(RM1,HIGH);
 digitalWrite(RM2,LOW);
 delay(20);
}
if((digitalRead(LS)) && !(digitalRead(RS)))     //TURN RIGHT
{
 digitalWrite(LM1,HIGH);
 digitalWrite(LM2,LOW);
 digitalWrite(RM1,LOW);
 digitalWrite(RM2,HIGH);
 delay(30);
}
if(!(digitalRead(LS)) && (digitalRead(RS)))  //TURN LEFT
{
 digitalWrite(LM1,LOW);
 digitalWrite(LM2,HIGH);
 digitalWrite(RM1,HIGH);
 digitalWrite(RM2,LOW);
 delay(20);
}

}  
