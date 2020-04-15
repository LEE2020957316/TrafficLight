#program once
#include"SensorES.h"
#include"SensorWN.h"
class CarLightEW
{
public: 
  CarLightEW(int tgEW=0, int tyEW=3)
  { 
    redEWini();
    greenEWini();
    yellowEWini();
    this->tgEW= tgEW;
    this->tg= tg;
   }
 public:
  void redEWini()
{
PinMode(1,OUTPUT);
digitalWrite(1, LOW);
}

void greenEWini()
{
PinMode(6,OUTPUT);
digitalWrite(6, LOW);
}

void yellowEWini()
{
PinMode(3,OUTPUT);
digitalWrite(3, LOW);
}
 void GNewtg(Logical & logical, SensorES & Obj1, SensorWN & Obj2)//时间比较后所得
    {
    tg=logical.Gettg(Obj1,Obj2);
    }
  
  virtual void CounterGR()// EW绿灯亮 
    {
    greenEWini();
  redSNini();
  //SNsensorini();
   for(tgEW=tg,tgEW>0,tgEW--)//EW green, and SN sensortimer star 
{
   digitalWrite(6, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1); //EW green, else red
     tg--;
   //sensortimer();
}
 virtual void CounterY() 
 {
 yellowEWini();
 //redSNini();
for(tyEW=3,tyEW>0,tyEW--)
 {
 digitalWrite(2, 1);
  //digitalWrite(4, 1);
  //digitalWrite(5, 1); //EW yellow, else red(不用）
  }
  public: 
  static int tg;
  private:
  int tgEW;
   int tyEW;
  }
  int CarLightEW::tg=0;//tg initialize.

  class CarLightSN: public CarLightEW
 {
     CarLightSN(int tgEW=0, int tyEW=3, int tySN=3, int tgSN=0 ): CarLightEW(tgEW, tyEW)
     { 
      redSNini();
      greenSNini();
      yellowSNini();
       this->tgSN= tgSN;
       this->tySN= tySN;
     }
   void redSNini()
{
PinMode(4,OUTPUT);
digitalWrite(4, LOW);
}
   void greenSNini()
{
PinMode(26,OUTPUT);
digitalWrite(26, LOW);
}
void yellowSNini()
{
PinMode(2,OUTPUT);
digitalWrite(2, LOW);
} 
 void GNewtg(Logical & logical, SensorES & Obj1, SensorWN & Obj2)//时间比较后所得
    {
   CarLightEW::tg=logical.Gettg(Obj1,Obj2);
    }
  virtual void CounterGR()// SN绿灯亮
    {
   redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
     tgEW= CarLightEW::tg;
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(1, 1);
 digitalWrite(26, 1);
  digitalWrite(27, 1); //SN green, else red;
      CarLightEW::tg--;
   }

  virtual void CounterY() //黄灯亮
  {
  yelloeSNini();
//redEWini();
for(tySN=3,tySN>0,tySN--)
 {
  //digitalWrite(1, 1);
  digitalWrite(3, 1);
  //digitalWrite(5, 1); //SN yellow, else red
   sensortimer();
 }
  private:
     int tgSN;
     int tySN;
    
     void YellowLight(CarLightEW*YL)
    { YL->CounterY();}
    YellowLight(&CEW);
     YellowLight(&CSN);
     
     void GRLight(CarLightEW*GRL)
     {GRL->CounterGR();}
    GRLight(&CEW);
     GRLight(&CSN); 
     
   int Newtg(SensorES & Ts)
   {
  if(Ts.outputT()<1)
  {
   return 10;//Tc.Gettg()= Tc.Gettg();// 3 chooses
  }
     else if(Ts.outputT()>=1 && Ts.outputT()<=2)
    {
      return 15//Tc.Gettg()+=5; 
    }
       else if(Ts.outputT()>=2)
  {
    return 20;//Tc.Gettg()+=10;
  }
 }// 以上为四个sensor线程需要的全部过程：输出时间并计算
 
void Gettg(CarLightEW*pt, SensorES & Obj1, SensorWN & Obj2)// 作比较 输入对象（同一个类的不同对象），(加锁)
{
  int pt->tg=0;//局部变量
  //SensorES tes; SensorWN twn;
  if(Newtg(Obj1)>=Newtg(Obj2))
  { 
    pt->tg=Newtg(Obj1);
  }
  else {pt->tg=Newtg(Obj2);
    }
 } 
    
/*  int Gettg(SensorES & Obj1, SensorWN & Obj2)// 作比较 输入对象（同一个类的不同对象），(加锁)
{
  int tg=0;
  //SensorES tes; SensorWN twn;
  if(Newtg(Obj1)>=Newtg(Obj2))
  { 
    tg=Newtg(Obj1);
  }
  else {tg=Newtg(Obj2);}
  return tg;
 }
 
void yellowSNL()
{
  //yelloeSNini();// already
    redSNini();
  greenSNini();// other initialize in direction of SN
PinMode(2,OUTPUT);
digitalWrite(2, 1);
}  
