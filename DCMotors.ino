int IN1 = 5;
int IN2 = 4;
int EN1 = 3;
int IN3 = 8;
int IN4 = 7;
int EN2 = 9;

int forwardDt = 7*1000;
int backwardDt = 10*1000;
int rotationDt = 5*1000;


void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
}

void loop() 
{
  forward();
  delay(forwardDt);

  backward();
  delay(backwardDt);

  for (int i = 0; i < 6; i++)
  {
    right();
    delay(rotationDt);
    left();
    delay(rotationDt);
  }
}


void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(EN1, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(EN2, HIGH); 
}


void backward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(EN1, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(EN2, HIGH);   
}


void right()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(EN1, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(EN2, HIGH);  
}


void left()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(EN1, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(EN2, HIGH);
}
