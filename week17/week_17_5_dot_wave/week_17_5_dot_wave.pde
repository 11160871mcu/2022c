import processing.sound.*;
SoundFile sound;
void setup(){
  size(200,200);
  sound=new SoundFile(this,"dot.wav");
}
void draw(){
  if(keyPressed)  background(255,0,0);
  else  background(#FFFFF2);
}
void keyPressed(){
  sound.play();
}
