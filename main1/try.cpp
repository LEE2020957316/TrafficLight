#include<WiringPi.h>
#include<stdio.h>
#include<stdlib.h>//?

#define redEW 18 // Pin 12
#define redSN 23 // Pin 16
#define greenEW 25 // Pin 22
#define greenSN 12 // Pin 32
#define yellowEW 2// Pin 3
#define yellowSN 3 // Pin 5
#define sider 5// Pin 29 BCM !!!
#define sideg 6// Pin 31 BCM !!!
#define extrasensor1 4//Pin 16
#define extrasensor2 5 //Pin 18


void SNsensorini()
 {
PinMode(12,GPIO.INPUT)
PinMode(18,GPIO.INPUT)
PinMode(2,GPIO.INPUT)
PinMode(3,GPIO.INPUT)
 GetnewtEW();//EW green, and SN sensortimer star (SN RED)
 }

  void EWsesorini()
{
PinMode(23,GPIO.INPUT)
PinMode(25,GPIO.INPUT)
PinMode(4,GPIO.INPUT)
PinMode(5,GPIO.INPUT)
 GetnewtSN();//SN  green, and EW sensortimer star (EW RED)
 }

void redEWini()
{
PinMode(18,GPIO.OUTPUT);
digitalWrite(18, GPIO.LOW);
}

void redSNini()
{
PinMode(23,GPIO.OUTPUT);
digitalWrite(23, GPIO.LOW);
}

void greenEWini()
{
PinMode(25,GPIO.OUTPUT);
digitalWrite(23, GPIO.LOW);
}

void greenSNini()
{
PinMode(12,GPIO.OUTPUT);
digitalWrite(12, GPIO.LOW);
}

void yellowEWini()
{
PinMode(2,GPIO.OUTPUT);
digitalWrite(2, GPIO.LOW);
}

void yellowSNini()
{
PinMode(3,GPIO.OUTPUT);
digitalWrite(3, GPIO.LOW);
}
     
void button()// check the button
{
 flag=1;
}

/*1.void sensortimer()
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int timer=0;
do
{
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
  if(t>=1)// counterv t can not exceed 1 minutes?
  {
   t=0;
   digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
  }
}
while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
}

2.void sensortimer()
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t1,t=0;
t1=tgEW;
do
{
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=tgEW-5 ||tgSN=tgSN-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
     t=0;
}

 */void GetnewtEW()
 {
  if(t<=1)
   tgEW=tgEW;// 3 chooses
    
  }
    else if(t>=1 && t<=2)
    {
      tgEW+=5; 
    }
       else if(t>=2)
  {
   tgEW+=10;
  }
  t1=tgEW;
 }

/*tgEW=(t<=1)? 15:15+(t-1)*10;// 2 or more chooses

 */void GetnewtSN()
 {
  if(t<=1)
   tgSN=tgSN; // 3 chooses
    
  }
    else if(t>=1 && t<=2)
    {
   tgSN+=5;
    }
       else if(t>=2)
  {
     tgSN+=10; 
  }
  t1=tgSN;
 }

/*tgSN=(t<=1)? 15:15+(t-1)*10;// 2 or more chooses


*/int main()
  {
 
  auto int tgSN,tgEW,t1;// t1为整体变量，子函数可以调用
 
  int tr,tg,ty; //timing

  if(WiringPiSetup() == -1) //initialize wiringpi store fail or not
 {
  printf("you set up wiringpi failed"); //failed
  return 1;
 }

PinMode(18,GPIO.OUTPUT);
PinMode(23,GPIO.OUTPUT);
PinMode(25,GPIO.OUTPUT);
PinMode(12,GPIO.OUTPUT);
PinMode(2,GPIO.OUTPUT);
PinMode(3,GPIO.OUTPUT);

  digitalWrite(18, GPIO.LOW); //Initialize
  digitalWrite(23, GPIO.LOW);
  digitalWrite(25, GPIO.LOW);
  digitalWrite(12, GPIO.LOW);
  digitalWrite(2, GPIO.LOW);
  digitalWrite(3, GPIO.LOW);
  
 
   while true // intialize succeed
  {
   
  redSNini();
  redEWini();
  for (tr=3,tr>0,tr--)
  {
  digitalWrite(18,1);
  digitalWrite(23, 1);
  digitalWrite(5, 1); // all red
  }
  
  greenEWini();
  redSNini();
  SNsensorini(); //EW green, and SN sensortimer star 
  for(tgEW=10,tgEW>0,tgEW--)
{
   digitalWrite(25, 1);
  digitalWrite(23, 1);
  digitalWrite(5, 1); //EW green, else red
   sensortimer();
}

 redSNini();
for(tyEW=3,tyEW>0,tyEW--)
 {
 digitalWrite(2, 1);
  digitalWrite(23, 1);
  digitalWrite(5, 1); //EW yellow, else red
  }
  
  redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(18, 1);
 digitalWrite(12, 1);
  digitalWrite(5, 1); //SN green, else red;
   }
   
   redEWini();
for(tySN=3,tySN>0,tySN--)
 {
  digitalWrite(18, 1);
  digitalWrite(3, 1);
  digitalWrite(5, 1); //SN yellow, else red
   sensortimer();
 }
    
  if(button())
     {
 goto  walk_light;
     }
    return 0;
 }
       
walk_light:
 digitalWrite(18, GPIO.HIGH);
 delay(1000);//sleep(1)? 一秒
    for(tgside=10,tgEW>0,tgEW--)
  {
  digitalWrite(18, 1);
  digitalWrite(23, 1);
  digitalWrite(6, 1); //side green, else red
    }
  digitalWrite(18, GPIO.LOW);
  delay(1000);//sleep(1)? 延长一秒等于1000毫秒
 flag=0;
 return 0;
 }
   


 
 
 
 //  while(1)
  {
     //if(flag)
//{
//while(digitalRead(0)==LOW); //检测按键是否松开，没有松开的话，一直等待
 // GPIO.output(18, GPIO.HIGH);
//flag=0;
//}


