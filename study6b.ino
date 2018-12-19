//flashin' by jay
int blue = 11;
int green = 10;
int red = 9;
int yellow = 6;
int potpin = 3; //  potentiometer 
int button = 2; //  button

// variables
int potval = 0; // adjusts for magnitude and rate
int choice = 0; // mode selection

void setup() {
  // run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(button,INPUT);
analogWrite(red,255);
analogWrite(green,255);
analogWrite(blue,255);
analogWrite(yellow,255);
// random number generator
randomSeed(100);
}
void loop() {
 // read the pushbutton 
int val;
val = digitalRead(button);
// val = HIGH means the button has been pushed
if(val==HIGH){
choice = choice + 1;
analogWrite(blue,255);
analogWrite(green,255);
analogWrite(red,255);
analogWrite(yellow,255);
delay(500);
// indicate mode transition with blue flashes
for(int i = 0; i<5; i++){
analogWrite(blue,125);
delay(20);
analogWrite(blue,255);
delay(40);
}
delay(500);
if (choice == 12){
choice = 0;
}
}
//LIFT BUTTON for debounce
while (val == HIGH){
delay(100);
val = digitalRead(button);
}
// read the potentiometer value
potval = analogRead(potpin);
// OFF
if(choice==0){
analogWrite(red,255);
analogWrite(green,255);
analogWrite(blue,255);
analogWrite(yellow,255);
}
// CANDLE FLAME
if(choice==1){
flicker();
}
// RED
if(choice==2){
analogWrite(red,255 - potval/4);
analogWrite(green,255);
analogWrite(blue,255);
analogWrite(yellow,255);
}
// GREEN
if(choice==3){
analogWrite(red,255);
analogWrite(green,255 - potval/4);
analogWrite(blue,255);
analogWrite(yellow,255);
}
// BLUE
if(choice==4){
analogWrite(red,255);
analogWrite(green,255);
analogWrite(blue,255 - potval/4);
analogWrite(yellow,255);
}
// yellow
if(choice==5){
analogWrite(red,255);
analogWrite(blue,255);
analogWrite(green,255);
analogWrite(yellow,255 - potval/4);
delay(1000);
}
}
void flicker(){
// makes a flickering candle light
int k = random(0,100);
potval = analogRead(potpin);
float p = float(potval)/1023;
int rmag = 255 - (15 + 155 * k/100)*p;
int gmag = 255 - (10 + 55 * k/100)*p;
analogWrite(red,rmag);
analogWrite(green,gmag);
int d = 50+300 * random(0,100)/300;
delay(d);


}
