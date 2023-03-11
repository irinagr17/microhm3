int motorRight1 = 4;       // Правый мотор (5 скорость)
int motorRight2 = 5;
int motorLeft1 = 6;        // Левый мотор (6 скорость)
int motorLeft2 = 7;
int pin_trig = 9;
int pin_echo = 10;
long duration = 0;
long distance_forward = 0;
long distance_left = 0;
float constL = 20;
float constF = 30;
bool rotate_right = false;
bool rotate_left = false;
bool forward = false;
bool stop = false;

int IPin = A0;
int control;               // Управление двигателями.
int motorSpeed;            // Управление скоростью.

void setup() {
  pinMode (motorRight1, OUTPUT);
  pinMode (motorRight2, OUTPUT);

  pinMode (motorLeft1, OUTPUT);
  pinMode (motorLeft2, OUTPUT);

  pinMode(pin_trig, OUTPUT);
  pinMode(pin_echo, INPUT);

  Serial.begin (9600);
}

void loop()
{
  float volts = analogRead(IPin)*0.0048828125;
  float distance_left = 32*pow(volts,-1.10);

  digitalWrite(pin_trig, LOW);
  delayMicroseconds(5);
  digitalWrite(pin_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin_trig, LOW);
  duration = pulseIn(pin_echo, HIGH);
  distance_forward = (duration / 2) / 29.1;
  delay(250);

  update_state();
  direction();

  delay(500);
}

void direction()
{
  if (forward)
  {
    digitalWrite (motorLeft2, HIGH);
    analogWrite (motorLeft1, 250);
    digitalWrite (motorRight1, HIGH);
    analogWrite (motorRight2, 250);
  }

  else if (rotate_right)
  {
    digitalWrite (motorLeft2, HIGH);
    analogWrite (motorLeft1, 250);
    digitalWrite (motorRight1, LOW);
    analogWrite (motorRight2, 150);
  }

  else if (rotate_left)
  {
    digitalWrite (motorLeft2, LOW);
    analogWrite (motorLeft1, 150);
    digitalWrite (motorRight1, HIGH);
    analogWrite (motorRight2, 250);
  }

  else if (stop)
  {
    digitalWrite (motorLeft2, HIGH);
    analogWrite (motorLeft1, 0);
    digitalWrite (motorRight1, HIGH);
    analogWrite (motorRight2, 0);
  }
}

void update_state()
{
  if (distance_forward < constF ) 
  {
    if (distance_left < constL)
    {
      stop = false;
      rotate_right = true;
      rotate_left = false;
      forward = false;
    }
  }

  else if (distance_left > constL)
  {
    stop = false;
    rotate_right = false;
    rotate_left = true;
    forward = false;
  }

  else if (distance_left < constL && distance_forward > constF )
  {
    stop = false;
    rotate_right = false;
    rotate_left = false;
    forward = true;
  }

  else
  {
    stop = true;
    rotate_right = false;
    rotate_left = false;
    forward = false;
  }
}
