#define led_pin1 6
#define led_pin2 8
#define led_pin3 12
#define led_pin4 10
#define led_pin5 4
#define led_pin6 2
int var = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);

}

void loop() {
  
  if (Serial.available() > 1) {
      var = Serial.parseInt();
      if(var==1){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==2){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==3){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==4){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);  
      }
      if(var==5){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==6){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==7){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==8){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==12){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==13){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==14){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==23){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==34){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==56){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==15){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, LOW);
      }
      if(var==26){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, LOW);
      }
      if(var==16){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
        delay(5);
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, LOW);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
        delay(5);
      }
      if(var==123){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==134){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, LOW);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==567){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, LOW);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==678){
        digitalWrite(led_pin1, LOW);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==1234){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, HIGH);
      }
      if(var==5678){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, HIGH);
        digitalWrite(led_pin6, LOW);
      }
      if(var==12345678){
        digitalWrite(led_pin1, HIGH);
        digitalWrite(led_pin2, HIGH);
        digitalWrite(led_pin3, HIGH);
        digitalWrite(led_pin4, HIGH);
        digitalWrite(led_pin5, LOW);
        digitalWrite(led_pin6, LOW);
      }
  }
}