#define BTN1 2
#define BTN2 3
#define BTN3 4
#define BTN4 5
#define LED1 6
#define LED2 7
#define LED3 8
#define LED4 9

int tt1 = 0, tt2 = 0; 
int tt3 = 0, tt4 = 0;
int tong = 0;

void setup() {
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(!digitalRead(BTN1))
  {
    delay(20);
    if(!digitalRead(BTN1)){
    tt1++;
    if(tt1 > 2) tt1 =1;
    if(tt1 == 1) 
    {
      Serial.println('1'); 
      digitalWrite(LED1,HIGH);
    }
    if(tt1 == 2) 
    {
      Serial.println('9'); 
      digitalWrite(LED1,LOW);
    }
    while(!digitalRead(BTN1));
    }
  }
  if(!digitalRead(BTN2))
  {
    delay(20);
    if(!digitalRead(BTN2)){
    tt2++;
    if(tt2 > 2) tt2 =1;
    if(tt2 == 1) 
    {
      Serial.println('2'); 
      digitalWrite(LED2,HIGH);
    }
    if(tt2 == 2) 
    {
      Serial.println('8'); 
      digitalWrite(LED2,LOW);
    }
    while(!digitalRead(BTN2));
    }
  }
  if(!digitalRead(BTN3))
  {
    delay(20);
    if(!digitalRead(BTN3)){
    tt3++;
    if(tt3 > 2) tt3 =1;
    if(tt3 == 1) 
    {
      Serial.println('3'); 
      digitalWrite(LED3,HIGH);
    }
    if(tt3 == 2) 
    {
      Serial.println('7'); 
      digitalWrite(LED3,LOW);
    }
    while(!digitalRead(BTN3));
    }
  }
  if(!digitalRead(BTN4)){
    delay(20);
    if(!digitalRead(BTN4)){
    tt4++;
    if(tt4 > 2) tt4 =1;
    if(tt4 == 1) 
    {
      Serial.println('4'); 
      digitalWrite(LED4,HIGH);
      }
    if(tt4 == 2) 
    {
      Serial.println('6'); 
      digitalWrite(LED4,LOW);
      }
    while(!digitalRead(BTN4));
    }
  }
}













