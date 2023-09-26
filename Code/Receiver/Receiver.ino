#include <Wire.h>                    
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define ledPin1 2
#define ledPin2 3
#define ledPin3 4
#define ledPin4 5

char state;
int tt1, tt2, tt3, tt4;

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("D1 TAT ");
  lcd.setCursor(0, 1);
  lcd.print("D2 TAT ");
  lcd.setCursor(9, 0);
  lcd.print("D3 TAT ");
  lcd.setCursor(9, 1);
  lcd.print("D4 TAT ");


  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  
}

void loop()
{
  if(Serial.available())
  {
    state = Serial.read();
    if(state == '1')
    {
      digitalWrite(ledPin1,HIGH);
      lcd.setCursor(0, 0);
      lcd.print("D1 SANG");
    }
    if(state == '2')
    {
      digitalWrite(ledPin2,HIGH);
      lcd.setCursor(0, 1);
      lcd.print("D2 SANG");
    }
    if(state == '3')
    {
      digitalWrite(ledPin3,HIGH);
      lcd.setCursor(9, 0);
      lcd.print("D3 SANG");
    }
    if(state == '4')
    {
      digitalWrite(ledPin4,HIGH);
      lcd.setCursor(9, 1);
      lcd.print("D4 SANG");
    }
    

    if(state == '9')
    {
      digitalWrite(ledPin1,LOW);
      lcd.setCursor(0, 0);
      lcd.print("D1 TAT ");
    }
    if(state == '8')
    {
      digitalWrite(ledPin2,LOW);
      lcd.setCursor(0, 1);
      lcd.print("D2 TAT ");
    }
    if(state == '7')
    {
      digitalWrite(ledPin3,LOW);
      lcd.setCursor(9, 0);
      lcd.print("D3 TAT ");
    }
    if(state == '6')
    {
      digitalWrite(ledPin4,LOW);
      lcd.setCursor(9, 1);
      lcd.print("D4 TAT ");
    }
  }
}













