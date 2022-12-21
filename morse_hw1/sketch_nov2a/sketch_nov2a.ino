#define DATA_PIN 2
#define DATA_LEVEL LOW
#define SPACE_LEVEL HIGH
#define SPACE false //красное
#define DATA true
#define DASH_DURATION 3
#define DOT_DURATION 1
#define LETTER_DURATION 3
#define WORD_DURATION 7	
#define TU 100

long start_data, start_space;
long duration[20];
bool color[20];
long duration_space[20]; //добавлено
int index = 0;
int previous = SPACE_LEVEL;
String CODES[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
char LETTERS[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// String CODES[] = {".-", "--.."};
// char LETTERS[] = {'A', 'Z'};
int NLETTERS = 27; 
String message = "";
bool isEndWord = false;
void setup() {
  Serial.begin(9600);
  pinMode(DATA_PIN, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  fill_arrays();
  decode_letter();
  
}


void decode_letter(){ 
  for(int i=0; i < index; i++){ 
    bool isEditing = false;
    if (duration[i] == DASH_DURATION and color[i] == SPACE){ 
      String code = ""; 
      for (int j=0; j < i; j++){ 
          if (duration[j] == DASH_DURATION and color[j] == DATA){ 
            code += '-'; 
          } 
          if (duration[j] == DOT_DURATION and color[j] == DATA){ 
            code += '.'; 
          } 
          duration[j] = 0; 
      } 
      duration[i] = 0; 
      for (int iletter=0; iletter < NLETTERS; iletter++){ 
        if (code == CODES[iletter]){ 
            isEditing = true;
            message += LETTERS[iletter];
            Serial.print(message);
        } 
      } 
    }
    if (isEditing && isEndWord)	
    {
      Serial.print("\n");	
      index = 0;	
      isEndWord = false;	
    }
  
  if (isEditing)	
  {
  	index = 0;
    message = "";
  } }
}


void fill_arrays(){ 
  int current = digitalRead(DATA_PIN); 
  if (current == DATA_LEVEL and previous == SPACE_LEVEL){ 
    start_data = millis(); 
    duration[index] = int((millis() - start_space + 0.5 * TU) / TU); 
    color[index] = SPACE; 
    index++; 
  } 
  else if (current == SPACE_LEVEL and previous == DATA_LEVEL){ 
    isEndWord = false;
    start_space = millis(); 
    duration[index] = int((millis() - start_data + 0.5 * TU) / TU); 
    color[index] = DATA; 
    index++; 
  } 
  else if (isEndWord == false && current == SPACE_LEVEL && previous == SPACE_LEVEL){	// Условие для обнаружения паузы (конца передачи данных) после передачи данных
    long temp = millis() - start_space;	// фиксируем время
    if (temp > TU * WORD_DURATION)	// Если время больше, чем длительность паузы
    {
    	isEndWord = true;
    	duration[index] = WORD_DURATION;
      	index++;	//  Сдвиг буфера, чтобы вывести последнюю букву
  	}
  }
  previous = current; 
}
