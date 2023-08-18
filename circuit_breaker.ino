int stan = 0;

void setup(){
  pinMode(4, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(7) == LOW){
    delay(200);
    stan++;
    if(stan > 1){
      stan = 0;
    }
  }
  switch(stan){
    case 0:
    digitalWrite(4, LOW);
    break;  

   case 1:
    digitalWrite(4,HIGH);
    break;
  }
}
