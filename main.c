int tipkaGor=2;
int tipkaDol=4;
int tipkaStop=3;
int motorGor=5;
int motorDol=6;
int tipke=0;
boolean gor=false;
boolean dol=false;
boolean stop=true;


void setup() {
  // put your setup code here, to run once:
  pinMode(tipkaGor,INPUT);
  pinMode(tipkaDol,INPUT);
  pinMode(tipkaStop,INPUT);
  pinMode(motorGor.OUTPUT);
  pinMode(motorDol,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(tipkaStop)==1){
    tipke=0;
  }else if(digitalRead(tipkaGor)==1){
    tipke=1;
  }else if(digitalRead(tipkaDol)==1){
    tipke=-1;
  }
  if(tipke==0){
    digitalWrite(motorGor,0);
    digitalWrite(motorDol,0);
    Serial.println("Motor ustavljen);
  }else if(tipke==1){
    digitalWrite(motorGor,1);
    digitalWrite(motorDol,0);
    Serial.println("Motor se pomika navzgor);
  }else if(tipke==-1){
    digitalWrite(motorGor,0);
    digitalWrite(motorDol,1);
    Serial.println("Motor se pomika navzdol);
  }
}
