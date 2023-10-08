int trigPin = 9;      
int echoPin = 10;     
int lm1 = 4;       
int lm2 = 5;       
int rm1 = 6;      
int rm2 = 7;      

long duration, distance;

void setup() {
 
  pinMode(lm1, OUTPUT);     
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(trigPin, OUTPUT);         
  pinMode(echoPin, INPUT);          
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);   
  digitalWrite(trigPin, HIGH);     
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;   
  delay(10);
  if (distance > 19)            
  {
    digitalWrite(lm1, HIGH);                    // move forward
    digitalWrite(lm2, LOW);
    digitalWrite(rm1, HIGH);                                
    digitalWrite(rm2, LOW);
                                                          
  }

  if (distance < 18)
  {
    digitalWrite(lm1, LOW);  //Stop                
    digitalWrite(lm2, LOW);
    digitalWrite(rm1, LOW);                                
    digitalWrite(rm2, LOW);
    delay(1000);
    digitalWrite(lm1, LOW);      //movebackword         
    digitalWrite(lm2, HIGH);
    digitalWrite(rm1, LOW);                                
    digitalWrite(rm2, HIGH);
    delay(1000);
    digitalWrite(lm1, LOW);  //Stop                
    digitalWrite(lm2, LOW);
    digitalWrite(rm1, LOW);                                
    digitalWrite(rm2, LOW);  
    delay(1000);  
    digitalWrite(lm1, HIGH);       
    digitalWrite(lm2, LOW);   
    digitalWrite(rm1, LOW);                                 
    digitalWrite(rm2, LOW);  
    delay(500);
  }

}
