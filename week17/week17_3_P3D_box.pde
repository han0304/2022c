void setup(){
  size(400,400,P3D);
}
void draw(){
  background(#EAFF0D);
  translate(width/2,height/2);
  rotateY( radians(frameCount) );
  box(100);
}
