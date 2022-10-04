#define sensor_pin A2 
#define led_pin 3

void setup() {
// put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}
void loop() {
// put your setup code here, to run once:
  int val = analogRead(sensor_pin);
  Serial.println(val);
  if( val < 700)
  {
    digitalWrite(led_pin, HIGH);  
  }       
  else{
     digitalWrite(led_pin, LOW);   
  }  
 
}