//SS3 by jay


void setup() {
  size(800, 800);
  rectMode(CENTER);
}

void draw() {
  background(190);
  stroke(20);
  fill(0, 255, 120);
  rect(width/2, height/3, 260, 250, 10);
  fill(0, 100, 90);
  rect(280, 380, 120, 25);
  fill(20, 125, 135);
  triangle(390, 430, 455, 405, 400, 45);
}

void mousePressed() {
  if ((mouseX<350) && (mouseX>400) && (mouseY<280) && (mouseY>330)) {
    fill(0);
    ellipse(205, 180, 25, 25);
    arc(width/2, 85, 180, 180, 10, PI, OPEN);
    ellipse(415, 180, 25, 25);
    delay(100);
  } else {
    float r=random(50, 255);
    float g=random(50, 255);
    float b=random(50, 255);
    fill(r, g, b);
    textAlign(CENTER);
    textSize(150);
    text("SS3", width/2,height/2, 30);
  }
}
