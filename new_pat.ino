int a1=0;
int a2=1;
int a3=2;
int a4=3;
int b1=4;
int b2=5;
int b3=6;
int b4=7;
int c1=8;
int c2=9;
int c3=10;
int c4=11;
int d1=12;
int d2=13;
int d3=A0;
int d4=A1;
int l1=A2;
int l2=A3;
int l3=A4;
int l4=A5;
int layer[4]={A5,A4,A3,A2};
int led[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1};

 int time = 0;
 


void setup() {
  // put your setup code here, to run once:
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(a3,OUTPUT);
pinMode(a4,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);
pinMode(b3,OUTPUT);
pinMode(b4,OUTPUT);
pinMode(c1,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(c4,OUTPUT);
pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(d4,OUTPUT);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,OUTPUT);
pinMode(l4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(l4,HIGH);
//digitalWrite(,HIGH);

digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
delay(50);
digitalWrite(a2,HIGH);
delay(50);
digitalWrite(a3,HIGH);
delay(50);
digitalWrite(a4,HIGH);
delay(50);
digitalWrite(b4,HIGH);
delay(50);
digitalWrite(b3,HIGH);
delay(50);
digitalWrite(b2,HIGH);
delay(50);
digitalWrite(b1,HIGH);
delay(50);
digitalWrite(c1,HIGH);
delay(50);
digitalWrite(c2,HIGH);
delay(50);
digitalWrite(c3,HIGH);
delay(50);
digitalWrite(c4,HIGH);
delay(50);
digitalWrite(d1,HIGH);
delay(50);
digitalWrite(d2,HIGH);
delay(50);
digitalWrite(d3,HIGH);
delay(50);
digitalWrite(d4,HIGH);
delay(50);

digitalWrite(l1,HIGH);
digitalWrite(l4,HIGH);
delay(300);
//digitalWrite(l4,HIGH);
digitalWrite(l3,LOW);
digitalWrite(l2,LOW);
delay(300);

}
