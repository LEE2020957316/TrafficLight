void sensortimer()
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int timer=0;
do
{
t=t+0.01;
sleep(0.01);
}while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
    t=0;
   digitalWrite (23,1);    //operate timer digitalwrite(int pin, int value)// if value != 0 == high)
}

 
if(t<=1)
  {
    
  }
    else if(t>=1&& t<=2)
    {
      
    }
       else if(t>=1&& t<=2)
  {
 
  }


Struct Time
{ 
char Time[2];
int num;
} time[3]={ {“S”,15 },{“M”, 20}, {“L”, 25}};


