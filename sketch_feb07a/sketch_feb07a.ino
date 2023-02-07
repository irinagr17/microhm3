#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6

void setup() {
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);

}
void turnOff(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, LOW);
}
void oneLight(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void twoLight(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void threeLight(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}
void fourLight(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}
void oneTwoLight(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
}
void threeFourLight(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
}
void oneThreeLight(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);
}
void twoFourLight(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, HIGH);
}

void loop() {
  oneLight();
  delay(1000);
  turnOff();
  delay(500);
  twoLight();
  delay(1000);
  turnOff();
  delay(500);
  threeLight();
  delay(1000);
  turnOff();
  delay(500);
  fourLight();
  delay(1000);
  turnOff();
  delay(500);
  oneTwoLight();
  delay(1000);
  turnOff();
  delay(500);
  threeFourLight();
  delay(1000);
  turnOff();
  delay(500);
  oneThreeLight();
  delay(1000);
  turnOff();
  delay(500);
  twoFourLight();
  delay(1000);
  turnOff();
  delay(500);

}
