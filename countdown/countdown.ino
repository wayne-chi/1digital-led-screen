//all the led negative terminal should be connected to a 10kilo ohm resistor. in parrallel
// top 2 terminals are connected, side two termianls are connected , bottom two terminals are connected
//left bottom left and bottom right terminals are connected, top left and top right terminals are conneted two each leaving 6 terminals
//? the center terminal is connected altogethert seven

int top =2;
int tr =3;
int center =4;
int br =6;
int bottom =7;
int bl =8;
int tl =9;
int push = 12;
int num = 4 ;
int i = 6;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode (top,OUTPUT);
  pinMode (tr,OUTPUT);
  pinMode (center,OUTPUT);
  pinMode (br,OUTPUT);
  pinMode (bottom,OUTPUT);
  pinMode (bl,OUTPUT);
  pinMode (tl,OUTPUT);
 
  pinMode (push, INPUT );
}

  // put your setup code here, to run once:
 
 

void loop() {
  // put your main code here, to run repeatedly:
//its for 0
 if (num == 0){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, HIGH);
digitalWrite(tr, HIGH);
digitalWrite(bl, HIGH);
digitalWrite(br, HIGH);
digitalWrite(center, LOW);
}

//its for 1
else if (num == 1){
digitalWrite(bottom, LOW);
digitalWrite(top, LOW);
digitalWrite(tl, LOW);
digitalWrite(tr, HIGH);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, LOW);
}
  
//its for 2
else if (num == 2){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, LOW);
digitalWrite(tr, HIGH);
digitalWrite(bl, HIGH);
digitalWrite(br, LOW);
digitalWrite(center, HIGH);
}
//its for 3
else if (num == 3){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, LOW);
digitalWrite(tr, HIGH);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}
//for 4
else if (num == 4){
digitalWrite(bottom, LOW);
digitalWrite(top, LOW);
digitalWrite(tl, HIGH);
digitalWrite(tr, HIGH);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}

// FOR 5
else if (num == 5){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, HIGH);
digitalWrite(tr, LOW);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}
//for 6
else if (num == 6){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, HIGH);
digitalWrite(tr, LOW);
digitalWrite(bl, HIGH);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}


// FOR 7 
else if (num == 7){
digitalWrite(bottom, LOW);
digitalWrite(top, HIGH);
digitalWrite(tl, LOW);
digitalWrite(tr, HIGH);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}
//for 8
else if (num == 8){
digitalWrite(bottom, HIGH);
digitalWrite(top, HIGH);
digitalWrite(tl, HIGH);
digitalWrite(tr, HIGH);
digitalWrite(bl, HIGH);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}

//hmm
else {
digitalWrite(bottom, LOW);
digitalWrite(top, HIGH);
digitalWrite(tl, HIGH);
digitalWrite(tr, HIGH);
digitalWrite(bl, LOW);
digitalWrite(br, HIGH);
digitalWrite(center, HIGH);
}
delay(2500);
num--;
if (num<0){num=9;}
digitalWrite(bottom, LOW);
digitalWrite(top, LOW);
digitalWrite(tl, LOW);
digitalWrite(tr, LOW);
digitalWrite(bl, LOW);
digitalWrite(br, LOW);
digitalWrite(center, LOW);
Serial.println(num);
delay(400);
}
