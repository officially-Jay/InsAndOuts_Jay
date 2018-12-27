//(counter game)"WHO GETS THE CLOSEST?" by Jay
//*RULES* 2 OR MORE PLAYERS- ROLL THE DICE OR SIMPLY CHOOSE A NUMBER, PRESS THE (A)BUTTON TO START THE COUNTER. 
//PRESS THE (B)BUTTON TO STOP THE COUNTER AS CLOSE TO THE NUMBER AS POSSIBLE.
//WHOEVER GETS CLOSEST TO THE NUMBER, WITHOUT GOING OVER WINS.

//*CREDITS* "Maker Tutor - Aduino Counter with LCD display and push button tutorial" https://youtu.be/1cg9mXA2XRE
//Arduino Library List - "LiquidCrystal I2C" by Frank de Brabander

//Add LiquidCrystal I2C Library for I2C LCD Displays
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{
  lcd.begin(16, 2);                  //Start LCD
  lcd.clear();                       //Clears Screen
  Serial.begin(9600);                //Set Data Rate at 9600 bits per secponds
  
  pinMode(8, INPUT);                 //Set Digital Pin 8 as Input
  digitalWrite(8, HIGH);             // Enable Pin 8
  pinMode(9, INPUT);                 //Set Digital Pin 9 as Input
  digitalWrite(9, HIGH);             // Enable Pin 9
}
//Set float variables
float i = 0;                
float a = millis();                  //Returns the # of milliseconds
float c ;

void loop()
{
lcd.clear();                              //Clear Screen
lcd.setCursor(1,0);                       //Start Position of Top Row Text
lcd.print("Press A Button");               //Print Top Row Text on LCD
lcd.setCursor(4,1);                        //Start Position of Bottom Row Text   
lcd.print("To Start");                     //Print Bottom Row Text on LCD
delay(1000);                               //Waits 1 second
  
 if(digitalRead(8) == LOW)                //Reads Input 8 as off
 {

    lcd.clear();     
 a = millis();                           //The Time The Counter Was Activated
   while(digitalRead(9) == HIGH)
   {
   
     c = millis();                       //Current Time in Milliseconds
   i = (c - a) / 1000;                  //The Time in Between Button Presses
   lcd.print(i);                        //Print The Time in Between Button Presses to LCD
   lcd.setCursor(7,0);                 //Position of Top Row Text on LCD
   lcd.print("B to stop");             //Print Top Row Text on LCD
   lcd.setCursor(0,0);
   Serial.println(c);                //Print time of 1st Button Press to Serial Port
   Serial.println(a);                //Print time of 2nd Button Press to Serial Port
   Serial.println(i);                //Print time in between Button Presses to Serial Port
   Serial.println("......");          //Print a dotted line under (i) value to Serial Port
   delay(100);
   lcd.clear();
   }
   
   if(digitalRead(9) == LOW)                         //Read Pin 9 as Disabled
   {
     while(digitalRead(8) == HIGH)                   //Read Pin 8 as Enabled
     {
       lcd.setCursor(0,0);
       lcd.print("Your # is -");            //Print Top Row Text on LCD
       lcd.setCursor(12,0);
       lcd.print(i);                       //Print time in between Button Presses to LCD
       lcd.setCursor(0,1);
       lcd.print("A = RESTART");                //Print Bottom Row Text on LCD
       delay(100);
     }
   }
 }
}
