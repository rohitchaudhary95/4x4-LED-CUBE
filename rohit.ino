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


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
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
int n;
void loop() {
  // put your main code here, to run repeatedly:
n = Serial.read();
Serial.println(n);
delay(1000);

//zero

if(n==0)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c4,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(b3,LOW);
digitalWrite(c3,HIGH);
digitalWrite(b2,LOW);
delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}

n = n - 48;
//1

if(n==1)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,LOW);
digitalWrite(b1,HIGH);
digitalWrite(c1,LOW);
digitalWrite(c2,LOW);
digitalWrite(c3,LOW);
digitalWrite(b3,HIGH);
digitalWrite(a3,LOW);
digitalWrite(a2,LOW);
digitalWrite(b2,HIGH);
digitalWrite(a4,LOW);
digitalWrite(b4,HIGH);
digitalWrite(c4,LOW);
delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}
//2
if(n==2)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
digitalWrite(c3,LOW);
digitalWrite(c1,LOW);
//delay(400);
digitalWrite(b1,HIGH);
delay(400);
digitalWrite(a1,HIGH);
delay(400);
digitalWrite(a3,HIGH);
delay(400);
digitalWrite(b3,HIGH);
delay(400);

digitalWrite(c3,HIGH);
delay(400);
digitalWrite(c4,HIGH);
delay(400);
digitalWrite(b4,HIGH);
delay(400);
digitalWrite(a4,HIGH);
delay(400);
delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);

digitalWrite(b1,LOW);
digitalWrite(a1,LOW);
digitalWrite(a3,LOW);
digitalWrite(b3,LOW);
digitalWrite(c2,LOW);
digitalWrite(c3,LOW);
digitalWrite(c4,LOW);
digitalWrite(b4,LOW);
digitalWrite(a4,LOW);
digitalWrite(c1,LOW);

digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
//digitalWrite(c1,HIGH);
//delay(400);
digitalWrite(b1,HIGH);
delay(400);
digitalWrite(a1,HIGH);
delay(400);
digitalWrite(a2,HIGH);
delay(400);
digitalWrite(a3,HIGH);
delay(400);
digitalWrite(b3,HIGH);
delay(400);
digitalWrite(c3,HIGH);
delay(400);
digitalWrite(c4,HIGH);
delay(400);
digitalWrite(b4,HIGH);
delay(400);
digitalWrite(a4,HIGH);
delay(400);

delay(1000);
}
//3
if(n==3)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,LOW);
digitalWrite(c3,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(a4,LOW);
digitalWrite(b4,LOW);
digitalWrite(c4,LOW);
delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}

//4
if(n==4)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,LOW);
digitalWrite(b2,HIGH);
digitalWrite(b3,LOW);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,LOW);
digitalWrite(b4,LOW);
digitalWrite(c4,LOW);
delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}
//5
if(n==5)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,LOW);
digitalWrite(b4,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,LOW);
digitalWrite(c4,HIGH);

delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}
//6
if(n==6)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,LOW);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,HIGH);
digitalWrite(c4,HIGH);

delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}


//7
if(n==7)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3,LOW);
digitalWrite(b4,LOW);
digitalWrite(c1,HIGH);
digitalWrite(c2,LOW);
digitalWrite(c3,LOW);
digitalWrite(c4,LOW);

delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}
//8
if(n==8)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,LOW);
digitalWrite(b4,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,HIGH);
digitalWrite(c4,HIGH);

delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}
//9
if(n==9)
{
digitalWrite(l4,HIGH);
digitalWrite(l3,HIGH);
digitalWrite(l2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,LOW);
digitalWrite(b4,HIGH);
digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,LOW);
digitalWrite(c4,HIGH);

delay(250);
digitalWrite(l2,LOW);
digitalWrite(l1,LOW);
delay(250);
digitalWrite(l3,LOW);
digitalWrite(l2,HIGH);
delay(250);
digitalWrite(l4,LOW);
digitalWrite(l3,HIGH);
delay(1000);
}

}
