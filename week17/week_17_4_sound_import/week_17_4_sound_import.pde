import processing.sound.*;
int a;
PImage img;
SoundFile sound;

void setup(){
  size(200,200);
  sound=new SoundFile(this,"vibraphon.aiff");
  sound.loop();
}
void draw(){

}
