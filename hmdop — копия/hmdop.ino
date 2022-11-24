#define sensor_pin A2
#define led_pin 3

int min = 1100;
int max = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  int val = analogRead(sensor_pin);
  Serial.println(val);
  delay(100);
  
  if (val < min)
  {
    min = val;
  }
  if (val > max)
  {
    max = val;
  }
  if (val < (max + min)/2)
  {
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }
}