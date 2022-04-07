int led1 = D0;
int led2 = D7;
int dih =  250;
int dahh = 500;

void a()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dih);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dih);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
    
    
}

void r()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dih);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dih);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dih);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dih);
}

void y()
{
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dih);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dih);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
}

void n()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dahh);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dahh);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dih);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dih);
}


void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}


void loop() {
  
  a();
  delay(1000);
  r();
  delay(1000);
  y();
  delay(1000);
  a();
  delay(1000);
  n();
  delay(1000);
}
