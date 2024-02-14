long t=0,d=0;
void setup(){
pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,INPUT);
}
void loop (){
  digitalWrite(10,LOW);
delayMicroseconds(2);
digitalWrite(10,HIGH);
delayMicroseconds(10);
digitalWrite(10,LOW);
t=pulseIn(11 ,HIGH);
d=(0.0343/2)*t;
 
  if(d>=3 && d<=50){
    analogWrite(9,d);}
  else if(d>=50 && d<=130){
    analogWrite(6,d);}
 else if(d>=130 && d<=200){
    analogWrite(5,d);}
  else if(d>=200 && d<=300){
    analogWrite(3,d);}
}