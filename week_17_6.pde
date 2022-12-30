import processing.sound.*;
SoundFile file;
void setup(){
  size(300,300);
  file = new SoundFile(this,"beat.aiff");
  file.loop();
}
void draw(){
  
}
