#define motor_pin6 6
#define motor_pin5 5

void setup() {
  Serial.begin(9600);
  pinMode(motor_pin5, OUTPUT);
  pinMode(motor_pin6, OUTPUT);
}

void loop() {
  motor_run(180, 6);
}

void motor_run(int velocity, int direction) {
  //5 - по часовой, 6 - против часовой
  if(direction == 5){
    analogWrite(motor_pin5, velocity);
  }
  if(direction == 6){
    analogWrite(motor_pin6, velocity);
  }
}