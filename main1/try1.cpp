auto int tgSN tgEW;

void sensortimer()
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t=0;
do
{
t=t+0.01;
sleep(0.01);
    if(tgEW=tgEW-5 ||tgSN=tgSN-5)
  {
    break;
  }
}while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
     Newtime();
     t=0;
}

 void Newtime()
  if(t<=1)
   tgEW=tgEW||tgSN=tgSN
    
  }
    else if(t>=1 && t<=2)
    {
      tgEW+=5 || tgSN+=5 
    }
       else if(t>=2)
  {
   tgEW+=10 || tgSN+=10 
  }


/*Struct Time
{ 
char Car[10];
int num;
} time[3]={{"small",15 },{"normal", 20}, {"large", 25}};


