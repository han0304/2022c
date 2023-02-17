PImage img;
void setup(){
  size(400,400);
  img=loadImage("image.png");
}
void draw(){
  background(255,0,0);
  image(img, 0, 0);
}
