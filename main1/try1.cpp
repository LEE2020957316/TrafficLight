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


