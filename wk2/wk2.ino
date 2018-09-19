int ledCount=10;
int buttonPin=27;
int buttonState=1;
int num=0;
int circle=1;
int ledPins[]={26,25,33,12,13,14,15,16};

void setup() {
 Serial.begin(115200);
  // put your setup code here, to run once:

for(int thisLed=0;thisLed<ledCount;thisLed++){
  pinMode(ledPins[thisLed],OUTPUT);
  }
  digitalWrite(buttonPin,HIGH);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(buttonPin);
  if(circle==1){
    if(buttonState==HIGH){
      digitalWrite(ledPins[num],HIGH);
      num++;
      delay(200);
      if(num==10){
        circle=2;
        num=9;}
    }
  }
    else{
      if(buttonState==HIGH){
      digitalWrite(ledPins[num],LOW);
      num--;
      delay(200);     
    if(num==-1){
      circle=1;
      num=0;
      }
    }
    }
}

  
