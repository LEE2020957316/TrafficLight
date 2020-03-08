auto int tgSN tgEW;

void sensortimer()
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t=0;
do
{
t=t+0.01;
sleep(0.01);
    if(tgEW=tgEW-5 ||tgSN=tgSN-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
     t=0;
}

 void GetnewtEW()
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

tgEW=(t<=1)? 15:15+(t-1)*10;// 2 or more chooses

 
void GetnewtSN()
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



tgSN=(t<=1)? 15:15+(t-1)*10;// 2 or more chooses


/*Struct Time
{ 
char Car[10];
int num;
} time[3]={{"small",15 },{"normal", 20}, {"large", 25}};


//BUTTON TEST  (GPIO 0)
#include<iostream>
  #include <siringPi.h>
  #include<stdio.h>
  #include<stdlib.h>
  import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setup(18,GPIO.OUT)


 */
 
  
  pinMode(0,INPUT); //引脚0为输入模式
  pullUpDnControl(0,PUD_UP); //设置0号引脚上拉
  
  //注册中断程序
  if(wiringPiISR(0,INT_EDGE_FALLING,&button)<0) //设置引脚下降沿触发
  {
     printf("unable ISR\n");   
  }
 
  while(1)
  {
     if(flag)
{
while(digitalRead(0)==LOW); //检测按键是否松开，没有松开的话，一直等待
  GPIO.output(18, GPIO.HIGH);
flag=0;
}

void button()
{
flag=1;
}

      
      
class GutNT{
 private:
 mutex car_SN_,  mutex car_EW_,  mutex side_,
 public:
