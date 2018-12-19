// mouseMove by jay

float r = 0;
float g = 0;
float b = 0;

void setup() {
  size (600, 300);
  background (225);
}

void draw() {
  noStroke();
  fill(255);

  r = 200;
  g = 150;
  b = 100;
  fill(r, g, b);
  triangle(0, 0, 100, 100, 200,0);
  rect(width/3, height/2, 110, 110);
  r = 175;
  fill(r);
  ellipse(350, 300, 100, 100);


  println(" mouseX: ", mouseX);
  println(" mouseY: ", mouseY);
}
