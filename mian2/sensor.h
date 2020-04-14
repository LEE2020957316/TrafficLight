class SensorES{
  public: 
  SensorES(int t=0){
     t=0;//初始化
    PinMode(23,OUTPUT);
     digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
     }// pinmode (int pin, int mode), computer control it by 23
    public:
  //void Counter()
  void GetT(CarLight & Tobj, t1=0;)
    t1=Tobj.GettgEW();
    if(Tobj.CounttgEW()-5=0 ||Tobj.CounttgSN()-5=0)// counterv t can not exceed 1 minutes?
  {
   do
    {
   t=t+0.01;
   ds delay(10);  //sleep(0.01)=10ms
  }while(digitalRead(12)==(1));// has input signals
    }
  virtual int outputT()
    { reture t; }
  private: 
  int t;

class SensorWN: punlic SensorES 
{
 public: 
  SensorES(int t0=0){
     t=0;//初始化
    PinMode(23,OUTPUT);
     digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
     }// pinmode (int pin, int mode), computer control it by 23
    public:
  //void Counter()
  void GetT(CarLight & Tobj, t1=0;)
    t1=Tobj.GettgEW();
    if(Tobj.CounttgEW()=t1-5 ||Tobj.CounttgSN=t1-5)// counterv t can not exceed 1 minutes?
  {
   do
    {
   t0=t0+0.01;
   ds delay(10);  //sleep(0.01)=10ms
  }while(digitalRead(18==(1)));// has input signals
    }
  virtual int outputT()
    { reture t0; }
  private: 
  int t0;
  
 void Getnewt(SensorES & Ts, CarLight & Tc)
 {
  if(Ts.outputT()<1)
  {
   Tc.Gettg()= Tc.Gettg();// 3 chooses
  }
    else if(Ts.outputT()>=1 && Ts.outputT()<=2)
    {
      Tc.Gettg()+=5; 
    }
       else if(Ts.outputT()>=2)
  {
    Tc.Gettg()+=10;
  }
 }
