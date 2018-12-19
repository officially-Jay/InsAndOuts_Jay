//(counter game)"WHO GETS THE CLOSEST?" by jay

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
  
  Serial.begin(9600);
  
  pinMode(8, INPUT);
  digitalWrite(8, HIGH);
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);
}
double i = 0;
double a = millis();
double c ;

void loop()
{
lcd.clear();
lcd.print("press start");
delay(100);
  
 if(digitalRead(8) == LOW)
 {

    lcd.clear();
 a = millis();
   while(digitalRead(9) == HIGH)
   {
   
     c = millis();
   i = (c - a) / 1000;
   lcd.print(i);
   lcd.setCursor(7,0);
   lcd.print("release");
   lcd.setCursor(0,0);
   Serial.println(c);
   Serial.println(a);
   Serial.println(i);
   Serial.println("......");
   delay(100);
   }
   
   if(digitalRead(9) == LOW)
   {
     while(digitalRead(8) == HIGH)
     {
       lcd.setCursor(0,0);
       lcd.print(i);
       lcd.setCursor(11,0);
       lcd.print("");
       lcd.setCursor(0,0);
       delay(100);
     }
   }
 }
}
