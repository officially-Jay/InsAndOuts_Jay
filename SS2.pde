//purple  by Jay

int r=255; 
int g=150;
int b=230; 
void setup (){
  size(800,800);
}
void draw(){
  background(100);
  fill (75,165,85);
rect(245,355, 200, 165);
stroke(100);
fill (r,g,b);
rect(245,355, 200, 165);
triangle(130, 275, 258, 220, 386, 275);
}

void mousePressed(){
r= r+15;
g= g-127;
b= b+5;

}
