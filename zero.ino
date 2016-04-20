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
randomSeed(analogRead(10));

}
int i;
void loop() {
  // put your main code here, to run repeatedly:

  //pattern
for(i=0;i<10;i++)
{
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
digitalWrite(l3,LOW);
digitalWrite(l4,LOW);

digitalWrite(d1,LOW);
digitalWrite(d2,LOW);
digitalWrite(d3,LOW);
digitalWrite(d4,LOW);
digitalWrite(a1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(a3,HIGH);
digitalWrite(a4,HIGH);
delay(100);
digitalWrite(a1,LOW);
digitalWrite(a2,LOW);
digitalWrite(a3,LOW);
digitalWrite(a4,LOW);

digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
delay(100);
digitalWrite(b1,LOW);
digitalWrite(b2,LOW);
digitalWrite(b3,LOW);
digitalWrite(b4,LOW);

digitalWrite(c1,HIGH);
digitalWrite(c2,HIGH);
digitalWrite(c3,HIGH);
digitalWrite(c4,HIGH);
delay(100);
digitalWrite(c1,LOW);
digitalWrite(c2,LOW);
digitalWrite(c3,LOW);
digitalWrite(c4,LOW);

digitalWrite(d1,HIGH);
digitalWrite(d2,HIGH);
digitalWrite(d3,HIGH);

digitalWrite(d4,HIGH);
delay(100);
digitalWrite(d1,LOW);
digitalWrite(d2,LOW);
digitalWrite(d3,LOW);

digitalWrite(d4,LOW);

digitalWrite(a1,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(c1,HIGH);

digitalWrite(d1,HIGH);
delay(100);
digitalWrite(a1,LOW);
digitalWrite(b1,LOW);
digitalWrite(c1,LOW);

digitalWrite(d1,LOW);

digitalWrite(a2,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(c2,HIGH);

digitalWrite(d2,HIGH);
delay(100);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
digitalWrite(c2,LOW);

digitalWrite(d2,LOW);

digitalWrite(a3,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(c3,HIGH);

digitalWrite(d3,HIGH);
delay(100);
digitalWrite(a3,LOW);
digitalWrite(b3,LOW);
digitalWrite(c3,LOW);

digitalWrite(d3,LOW);

digitalWrite(a4,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(c4,HIGH);

digitalWrite(d4,HIGH);
delay(100);
digitalWrite(a4,LOW);
digitalWrite(b4,LOW);
digitalWrite(c4,LOW);

digitalWrite(d4,LOW);
}
delay(1000);
  turnEverythingOff();//turn all off
  flickerOn();
  turnEverythingOn();//turn all on
  //delay(time);
  //turnOnAndOffAllByLayerUpAndDownNotTimed();
  //layerstompUpAndDown();
  turnOnAndOffAllByColumnSideways();
  delay(time);
  aroundEdgeDown();
  turnEverythingOff();
  randomflicker();
  randomRain();
  diagonalRectangle();
  goThroughAllLedsOneAtATime();
  propeller();
  spiralInAndOut();
  flickerOff();
  turnEverythingOff();

}
void turnEverythingOff()
 {
   for(int i = 0; i<16; i++)
   {
     digitalWrite(led[i], 1);
   }
   for(int i = 0; i<4; i++)
   {
     digitalWrite(layer[i], 0);
   }
 }
 
//////////////////////////////////////////////////////////turn all on
void turnEverythingOn()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(led[i], 0);
  }
  //turning on layers
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}
///////////////////////////////////////////////////////turn columns off
void turnColumnsOff()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(led[i], 1);
  }
}
///////////////////////////////////////////////////////////flicker on
void flickerOn()
{
  int i = 150;
  while(i != 0)
  {
    turnEverythingOn();
    delay(i);
    turnEverythingOff();
    delay(i);
    i-= 5;
  }
}
///////////// turn everything on and off by layer up and down NOT TIMED
void turnOnAndOffAllByLayerUpAndDownNotTimed()
{
  int x = 75;
  for(int i = 5; i != 0; i--)
  {
    turnEverythingOn();
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(layer[i-1], 0);
      delay(x);
    }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
      for(int i = 0; i<4; i++)
    {
      digitalWrite(layer[i], 0);
      delay(x);
    }
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(layer[i-1], 1);
      delay(x);
    }
  }
}
///////////////////////turn everything on and off by column sideways
void turnOnAndOffAllByColumnSideways()
{
  int x = 75;
  turnEverythingOff();
  //turn on layers
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
  for(int y = 0; y<3; y++)
  {
    //turn on 0-3
    for(int i = 0; i<4; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 4-7
    for(int i = 4; i<8; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 8-11
    for(int i = 8; i<12; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 12-15
    for(int i = 12; i<16; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn off 0-3
    for(int i = 0; i<4; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 4-7
    for(int i = 4; i<8; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 8-11
    for(int i = 8; i<12; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 12-15
    for(int i = 12; i<16; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn on 12-15
    for(int i = 12; i<16; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 8-11
    for(int i = 8; i<12; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 4-7
    for(int i = 4; i<8; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn on 0-3
    for(int i = 0; i<4; i++)
    {
      digitalWrite(led[i], 0);
      delay(x);
    }
    //turn off 12-15
    for(int i = 12; i<16; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 8-11
    for(int i = 8; i<12; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 4-7
    for(int i = 4; i<8; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
    //turn off 0-3
    for(int i = 0; i<4; i++)
    {
      digitalWrite(led[i], 1);
      delay(x);
    }
  }
}
/////////////////////////////////////////up and down single layer stomp
void layerstompUpAndDown()
{
  int x = 75;
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 0);
  }
  for(int y = 0; y<5; y++)
  {
    for(int count = 0; count<1; count++)
    { 
      for(int i = 0; i<4; i++)
      {
        digitalWrite(layer[i], 1);
        delay(x);
        digitalWrite(layer[i], 0);
      }
      for(int i = 4; i !=0; i--)
      {
        digitalWrite(layer[i-1], 1);
        delay(x);
        digitalWrite(layer[i-1], 0);
      }
    }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(layer[i-1], 0);
      delay(x);
    }
  }
}
///////////////////////////////////////////////////////////flicker off
void flickerOff()
{
  turnEverythingOn();
  for(int i = 0; i!= 150; i+=5)
  {
    turnEverythingOff();
    delay(i+50);
    turnEverythingOn();
    delay(i);
  }
}
/////////////////////////////////////////around edge of the cube down
void aroundEdgeDown()
{
  for(int x = 200; x != 0; x -=50)
  {
    turnEverythingOff();
    for(int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i-1], 1);
      digitalWrite(led[5], 0);
      digitalWrite(led[6], 0);
      digitalWrite(led[9], 0);
      digitalWrite(led[10], 0);
      
      digitalWrite(led[0], 0);
      delay(x);
      digitalWrite(led[0], 1);
      digitalWrite(led[4], 0);
      delay(x);
      digitalWrite(led[4], 1);
      digitalWrite(led[8], 0);
      delay(x);
      digitalWrite(led[8], 1);
      digitalWrite(led[12], 0);
      delay(x);
      digitalWrite(led[12], 1);
      digitalWrite(led[13], 0);
      delay(x);
      digitalWrite(led[13], 1);
      digitalWrite(led[14], 0);
      delay(x);
      digitalWrite(led[14], 1);
      digitalWrite(led[15], 0);
      delay(x);
      digitalWrite(led[15], 1);
      digitalWrite(led[11], 0);
      delay(x);
      digitalWrite(led[11], 1);
      digitalWrite(led[7], 0);
      delay(x);
      digitalWrite(led[7], 1);
      digitalWrite(led[3], 0);
      delay(x);
      digitalWrite(led[3], 1);
      digitalWrite(led[2], 0);
      delay(x);
      digitalWrite(led[2], 1);
      digitalWrite(led[1], 0);
      delay(x);
      digitalWrite(led[1], 1);
    }
  }
}
///////////////////////////////////////////////////////random flicker
void randomflicker()
{
  turnEverythingOff();
  int x = 10;
  for(int i = 0; i !=750; i+=2)
  {
  int randomLayer = random(0,4);
  int randomLed = random(0,16);
  
  digitalWrite(layer[randomLayer], 1);
  digitalWrite(led[randomLed], 0);
  delay(x);
  digitalWrite(layer[randomLayer], 0);
  digitalWrite(led[randomLed], 1);
  delay(x); 
  }
}
//////////////////////////////////////////////////////////random rain
void randomRain()
{
  turnEverythingOff();
  int x = 100;
  for(int i = 0; i!=60; i+=2)
  {
    int randomLed = random(0,16);
    digitalWrite(led[randomLed], 0);
    digitalWrite(layer[3], 1);
    delay(x+50);
    digitalWrite(layer[3], 0);
    digitalWrite(layer[2], 1);
    delay(x);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[1], 1);
    delay(x);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[0], 1);
    delay(x+50);
    digitalWrite(layer[0], 0);
    digitalWrite(led[randomLed], 1);
  }
}
/////////////////////////////////////////////////diagonal rectangle
void diagonalRectangle()
{
  int x = 350;
  turnEverythingOff();
  for(int count = 0; count<5; count++)
  {
    //top left
    for(int i = 0; i<8; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for(int i = 4; i<12; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //bottom right
    for(int i = 8; i<16; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom middle
    for(int i = 4; i<12; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom left
    for(int i = 0; i<8; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for(int i = 4; i<12; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //top right
    for(int i = 8; i<16; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
    //top middle
    for(int i = 4; i<12; i++)
    {
      digitalWrite(led[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
  }
  //top left
  for(int i = 0; i<8; i++)
  {
    digitalWrite(led[i], 0);
  }
  digitalWrite(layer[3], 1);
  digitalWrite(layer[2], 1);
  delay(x);
  turnEverythingOff();
}
//////////////////////////////////////////////////////////propeller
void propeller()
{
  turnEverythingOff();
  int x = 90;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
      //turn on layer
      digitalWrite(layer[y-1], 1);
      //a1
      turnColumnsOff();
      digitalWrite(led[0], 0);
      digitalWrite(led[5], 0);
      digitalWrite(led[10], 0);
      digitalWrite(led[15], 0);
      delay(x);
      //b1
      turnColumnsOff();
      digitalWrite(led[4], 0);
      digitalWrite(led[5], 0);
      digitalWrite(led[10], 0);
      digitalWrite(led[11], 0);
      delay(x);
      //c1
      turnColumnsOff();
      digitalWrite(led[6], 0);
      digitalWrite(led[7], 0);
      digitalWrite(led[8], 0);
      digitalWrite(led[9], 0);
      delay(x);
      //d1
      turnColumnsOff();
      digitalWrite(led[3], 0);
      digitalWrite(led[6], 0);
      digitalWrite(led[9], 0);
      digitalWrite(led[12], 0);
      delay(x);
      //d2
      turnColumnsOff();
      digitalWrite(led[2], 0);
      digitalWrite(led[6], 0);
      digitalWrite(led[9], 0);
      digitalWrite(led[13], 0);
      delay(x);
      //d3
      turnColumnsOff();
      digitalWrite(led[1], 0);
      digitalWrite(led[5], 0);
      digitalWrite(led[10], 0);
      digitalWrite(led[14], 0);
      delay(x);
    }
  }
  //d4
  turnColumnsOff();
  digitalWrite(led[0], 0);
  digitalWrite(led[5], 0);
  digitalWrite(led[10], 0);
  digitalWrite(led[15], 0);
  delay(x);
}
////////////////////////////////////////////////spiral in and out
void spiralInAndOut()
{
  turnEverythingOn();
  int x = 60;
  for(int i = 0; i<6; i++)
  {
    //spiral in clockwise
    digitalWrite(led[0], 1);
    delay(x);
    digitalWrite(led[1], 1);
    delay(x);
    digitalWrite(led[2], 1);
    delay(x);
    digitalWrite(led[3], 1);
    delay(x);
    digitalWrite(led[7], 1);
    delay(x);
    digitalWrite(led[11], 1);
    delay(x);
    digitalWrite(led[15], 1);
    delay(x);
    digitalWrite(led[14], 1);
    delay(x);
    digitalWrite(led[13], 1);
    delay(x);
    digitalWrite(led[12], 1);
    delay(x);
    digitalWrite(led[8], 1);
    delay(x);
    digitalWrite(led[4], 1);
    delay(x);
    digitalWrite(led[5], 1);
    delay(x);
    digitalWrite(led[6], 1);
    delay(x);
    digitalWrite(led[10], 1);
    delay(x);
    digitalWrite(led[9], 1);
    delay(x);
    //////////spiral out counter clockwise
    digitalWrite(led[9], 0);
    delay(x);
    digitalWrite(led[10], 0);
    delay(x);
    digitalWrite(led[6], 0);
    delay(x);
    digitalWrite(led[5], 0);
    delay(x);
    digitalWrite(led[4], 0);
    delay(x);
    digitalWrite(led[8], 0);
    delay(x);
    digitalWrite(led[12], 0);
    delay(x);
    digitalWrite(led[13], 0);
    delay(x);
    digitalWrite(led[14], 0);
    delay(x);
    digitalWrite(led[15], 0);
    delay(x);
    digitalWrite(led[11], 0);
    delay(x);
    digitalWrite(led[7], 0);
    delay(x);
    digitalWrite(led[3], 0);
    delay(x);
    digitalWrite(led[2], 0);
    delay(x);
    digitalWrite(led[1], 0);
    delay(x);
    digitalWrite(led[0], 0);
    delay(x);
    ///////////spiral in counter clock wise
    digitalWrite(led[0], 1);
    delay(x);
    digitalWrite(led[4], 1);
    delay(x);
    digitalWrite(led[8], 1);
    delay(x);
    digitalWrite(led[12], 1);
    delay(x);
    digitalWrite(led[13], 1);
    delay(x);
    digitalWrite(led[14], 1);
    delay(x);
    digitalWrite(led[15], 1);
    delay(x);
    digitalWrite(led[11], 1);
    delay(x);
    digitalWrite(led[7], 1);
    delay(x);
    digitalWrite(led[3], 1);
    delay(x);
    digitalWrite(led[2], 1);
    delay(x);
    digitalWrite(led[1], 1);
    delay(x);
    digitalWrite(led[5], 1);
    delay(x);
    digitalWrite(led[9], 1);
    delay(x);
    digitalWrite(led[10], 1);
    delay(x);
    digitalWrite(led[6], 1);
    delay(x);
    ///////////////////spiral out clock wise
    digitalWrite(led[6], 0);
    delay(x);
    digitalWrite(led[10], 0);
    delay(x);
    digitalWrite(led[9], 0);
    delay(x);
    digitalWrite(led[5], 0);
    delay(x);
    digitalWrite(led[1], 0);
    delay(x);
    digitalWrite(led[2], 0);
    delay(x);
    digitalWrite(led[3], 0);
    delay(x);
    digitalWrite(led[7], 0);
    delay(x);
    digitalWrite(led[11], 0);
    delay(x);
    digitalWrite(led[15], 0);
    delay(x);
    digitalWrite(led[14], 0);
    delay(x);
    digitalWrite(led[13], 0);
    delay(x);
    digitalWrite(led[12], 0);
    delay(x);
    digitalWrite(led[8], 0);
    delay(x);
    digitalWrite(led[4], 0);
    delay(x);
    digitalWrite(led[0], 0);
    delay(x);
  }
}
////////////////////////////////////go through all leds one at a time
void goThroughAllLedsOneAtATime()
{
  int x = 15;
  turnEverythingOff();
  for(int y = 0; y<5; y++)
  {
    //0-3
    for(int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count-1], 1);
      for(int i = 0; i<4; i++)
      {
        digitalWrite(led[i], 0);
        delay(x);
        digitalWrite(led[i], 1);
        delay(x);
      }
    digitalWrite(layer[count-1], 0);
    }
    //4-7
    for(int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for(int i = 4; i<8; i++)
      {
        digitalWrite(led[i], 0);
        delay(x);
        digitalWrite(led[i], 1);
        delay(x);
      }
    digitalWrite(layer[count], 0);
    }
    //8-11
    for(int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count-1], 1);
      for(int i = 8; i<12; i++)
      {
        digitalWrite(led[i], 0);
        delay(x);
        digitalWrite(led[i], 1);
        delay(x);
      }
    digitalWrite(layer[count-1], 0);
    }
    //12-15
    for(int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for(int i = 12; i<16; i++)
      {
        digitalWrite(led[i], 0);
        delay(x);
        digitalWrite(led[i], 1);
        delay(x);
      }
    digitalWrite(layer[count], 0);
    }
  }
}
