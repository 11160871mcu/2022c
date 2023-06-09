PImage jjaltoon,meow;
void setup(){
  size(600,600);
  jjaltoon=loadImage("jjaltoon.jpg");
  meow=loadImage("meow.jpg");
}
void draw(){
  background(225);
  image(jjaltoon,0,80,595,591);
  image(meow,x,y);
}
float x=300,y=0;
void mouseDragged(){
  x+=(mouseX-pmouseX);
  y+=(mouseY-pmouseY);
}
