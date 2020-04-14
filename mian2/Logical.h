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
    
