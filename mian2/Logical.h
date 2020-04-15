class Logical{
  public:
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
   int Gettg(SensorES & Obj1, SensorWN & Obj2)// 作比较 输入对象（同一个类的不同对象），(加锁)
{
     int tg=0; //SensorES tes; SensorWN twn;
  if(Newtg(Obj1)>=Newtg(Obj2))
  { 
    tg=Newtg(Obj1);
  }
  else {tg=Newtg(Obj2);}
  return tg;
 }
   void YellowLight(CarLightEW*YL)
    { YL->CounterY();}
    YellowLight(&CEW);
     YellowLight(&CSN);
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
  void sensor(){}
  void carlight(){}
  void walklight(){}
  private:
  lock
   CarLightEW CEW;
  CarLightSN CSN;
  SensorES SE, SS; 
  SensorWN SW, SN;
  
  
class SensorES{

    public:
  //void Counter()
  void GetT()
  {
    t0= CarLight::tg;// ？！ 此处应该有锁！
  if(t0 =5)// counterv t can not exceed 1 minutes?  用 wait 等待 
  {
   do
    {
   t=t+0.01;
   ds delay(10);  //sleep(0.01)=10ms
  }while(digitalRead(12)==(1) && t0>=0);// has input signals 被遮挡
    }
  virtual int outputT()
    { 
    digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
    reture t; }
  private: 
  int t;
    int t0;

class SensorWN: punlic SensorES 
{

  public:
  //void Counter()
    void GetT()
    {
    t1= CarLight::tg;
    if(t1=5)// counterv t can not exceed 1 minutes?
    {
   do
    {
   t2=t2+0.01;
   ds delay(10);  //sleep(0.01)=10ms
  }while(digitalRead(18==(1))&& t0>=0);// has input signals
    }
  virtual int outputT()
    {  
    digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
    reture t0; 
  }
  private: 
  int t2;
  int t1;
      
      
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
    
   
/* 1. public: 
  SensorES(){
     t=0;//初始化
    t0=0;
    PinMode(23,OUTPUT);
     }// pinmode (int pin, int mode), computer control it by 23
public: 
  SensorES()
  {  
  t2=0
    t1=0
    PinMode(23,OUTPUT);
     }// pinmode (int pin, int mode), computer control it by 23// 初始化 对象已经调用
    
