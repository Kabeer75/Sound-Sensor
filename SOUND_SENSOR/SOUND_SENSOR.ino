int LightPin=13;
int SoundPin=9;
void setup (){
  pinMode (LightPin ,OUTPUT);
  pinMode (SoundPin ,INPUT);
}
void loop (){
  int SoundStatus=digitalRead (SoundPin);
  if (SoundStatus==LOW){
   digitalWrite (LightPin, HIGH); 
  }  else{
 digitalWrite (LightPin, LOW);
  }
}
