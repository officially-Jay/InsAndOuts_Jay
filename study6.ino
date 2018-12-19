//4LED push by jay

const int potPin = A1;
const int button = 12;
int inputValue =0;
int outputValue = 0; 

int green =3 ;              //integer 
int white = 5;
int yellow = 6;
int red = 9;
int blue = 10;

int state = 0;          //integer to hold present state
int last = 0;           //integer to hold previous state
int buttonState = 0;    //integer to hold button state


void setup() {
  //setup code to run once:
 
pinMode(button, INPUT);
pinMode(green, OUTPUT);
pinMode(white, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT); 

digitalWrite(green, LOW);
digitalWrite(white, LOW);
digitalWrite(yellow, LOW);
digitalWrite(red, LOW);
digitalWrite(blue, LOW);

}

void loop() {
  //main code to run repeatedly:

}
  buttonState = digitalRead(button);
  if(buttonState == 1){
    delay(50);
    buttonState = digitalRead(button);
    if(buttonState == 0){             //0 is one press
      state = last ++;                //increase state by 1
} }
  else{                               //if button is not pressed
    delay(100);                      //delay 50 milliseconds
  }
  switch (state) {                   //react to button press and state
   case 1:                            //if state is 1
    digitalWrite(green,HIGH);          //HIGH is on
    digitalWrite(red,HIGH);         //LOW is off
    digitalWrite(yellow,HIGH);
    digitalWrite(white,HIGH);
    digitalWrite(blue,HIGH);
    last = state;                     //set last state to current state
    break;                            //Exit Case
   case 2:                            
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,HIGH);
    digitalWrite(blue,HIGH);
    delay (100);                           
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);                            
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,);HIGH
    digitalWrite(blue,HIGH);
    delay (100);                        
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,HIGH);
    digitalWrite(blue,HIGH);
    delay (100);                           
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);                            
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,);HIGH
    digitalWrite(blue,HIGH);
    delay (100);                        
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,HIGH);
    digitalWrite(blue,HIGH);
    delay (100);                           
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);                            
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(white,);HIGH
    digitalWrite(blue,HIGH);
    delay (100);                        
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(white,LOW);
    digitalWrite(blue,LOW);
    delay (100);
    last = state;
    break;
    case 3:
    digitalWrite(green,HIGH);          //HIGH is on
    digitalWrite(red,LOW);         //LOW is off
    digitalWrite(yellow,HIGH);
    digitalWrite(white,LOW);
    digitalWrite(blue,HIGH);
    last = state;
  default:                               //if state is not 1,2 or 3 
    digitalWrite(red,LOW);               // all LEDs off
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(blood,LOW);
    last = 0;                             //reset all LEDs to state 0/off
  break;
 }
}
