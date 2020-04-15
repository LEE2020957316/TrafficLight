class CarLightEW
{
public: 
  void Gettg(CarLightEW*, SensorES &, SensorWN & );
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
    greenEWini();
  redSNini();
  SNsensorini(); //EW green, and SN sensortimer star 
  for(tgEW=10,tgEW>0,tgEW--)
{
   digitalWrite(6, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1); //EW green, else red
   sensortimer();
}

 yellowEWini();
 //redSNini();
for(tyEW=3,tyEW>0,tyEW--)
 {
 digitalWrite(2, 1);
  //digitalWrite(4, 1);
  //digitalWrite(5, 1); //EW yellow, else red
  }
  protected: 
  static int tg;
  private:
  int tgEW;
  }
  int CarLightEW::tg=0;//tg initialize.

  class CarLightSN: public CarLightEW
 {
     CarLightSN(int tgEW=0, int tyEW=3, int tySN=3, int tgSN=0 ):CarLightEW(tgEW, tyEW)
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
   void redSNL()
{
yellowSNini();
PinMode(4,OUTPUT);
digitalWrite(4, 1);
}
   void greenSNini()
{
PinMode(26,OUTPUT);
digitalWrite(26, LOW);
}
void greenSNL()
{
  PinMode(26,OUTPUT);
digitalWrite(26, 1)
}
void yellowSNini()
{
PinMode(2,OUTPUT);
digitalWrite(2, LOW);
} 
   void yellowSNL()
{
  //yelloeSNini();// already
    redSNini();
  greenSNini();// other initialize in direction of SN
PinMode(2,OUTPUT);
digitalWrite(2, 1);
}  

  redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(1, 1);
 digitalWrite(26, 1);
  digitalWrite(27, 1); //SN green, else red;
   }
 
//redEWini();
      virtual void CounterGR() // 黄灯亮
  {
for(tySN=3,tySN>0,tySN--)
 {
   yellowSNL();
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
  /*void SNsensorini()
 {
PinMode(5,INPUT);
PinMode(6,INPUT);
PinMode(4,INPUT);
PinMode(21,INPUT);
 GetnewtEW();//EW green, and SN sensortimer star (SN RED)
 }

  void EWsesorini()
{
PinMode(27,INPUT);
PinMode(26,INPUT);
PinMode(1,INPUT);
PinMode(21,INPUT);
 GetnewtSN();//SN  green, and EW sensortimer star (EW RED)
 }
redSNini();
  redEWini();
  for (tr=3,tr>0,tr--)
  {
  digitalWrite(1,1);
  digitalWrite(4, 1);
  digitalWrite(21, 1); // all red
  }
  
