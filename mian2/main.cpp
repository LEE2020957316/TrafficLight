class CarLightEW
{
 void Gettg(CarLightEW*, SensorES &, SensorWN & );
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
  virtual void CounterGR()// EW绿灯亮 
    {
    greenEWini();
  redSNini();
  //SNsensorini();
   for(tgEW=tg;tgEW>0;tgEW--)//EW green, and SN sensortimer star 
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
for(tyEW=3;tyEW>0;tyEW--)
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

  virtual void CounterGR()// SN绿灯亮
    {
   redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
     
    for(tgEW=CarLightEW::tg; tgSN>0; tgSN--)
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
for(tySN=3;tySN>0;tySN--)
 {
  //digitalWrite(1, 1);
  digitalWrite(3, 1);
  //digitalWrite(5, 1); //SN yellow, else red
   sensortimer();
 }
  private:
     int tgSN;
     int tySN;
     
   class SensorES{
  public: 
  SensorES(int t=0){
     t=0;//初始化
    PinMode(23,OUTPUT);
     }// pinmode (int pin, int mode), computer control it by 23
    public:
  //void Counter()
  void GetT(t1=0)
  {
    t1= CarLight::tg;
    if(Tobj.CounttgEW()-5=0 ||Tobj.CounttgSN()-5=0)// counterv t can not exceed 1 minutes?
  {
   do
    {
   t=t+0.01;
   ds delay(10);  //sleep(0.01)=10ms
  }while(digitalRead(12)==(1));// has input signals 被遮挡
    }
  virtual int outputT()
    { 
    digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
    reture t; }
  private: 
  int t;

class SensorES{

    public:
  //void Counter()
  void GetT()
  {
    t0= CarLight::tg;// ？！ 此处应该有锁！
  if(t0 =5)// counterv t can not exceed 1 minutes?  用 wait 等待 
  {
   do {
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
    void GetT()
    {
    t1= CarLight::tg;
    if(t1=5)// counterv t can not exceed 1 minutes?
    {
   do{
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

class Button{
  public:
  friend class WalkLight;
  Button(){//构造函数
    pinMode(0,INPUT); //引脚0为BUTTON输入模式
  pullUpDnControl(0,PUD_UP); //设置0号引脚上拉,(设置成上拉输入，引脚上就加了一个上拉电阻，那么引脚就默认是高电平，当再去读取这个引脚的时候，
   }
 int CheckB()
  {
    if(digitalRead(0) == 0)// 检测到低电平
     {
        delay(20); // 延时销抖, for machine button 
        if(digitalRead(0) == 0)// 检测到低电平
        { return 1;}
   else 
       { return 0;}
       }
     
   class WalkLight{
    private: Button b;
     int tgside;
     int tw;
     public:
     WalkLight(int tgside=10; int tw=0)
     { 
       this->tgside= tgside;
      this->tw=tw;
     }
   void WLighting()
   { 
     tw=b.CheckB();//digitalWrite(18, GPIO.HIGH); // all side greenlight lighting
     if(tw=1){
    for(tgside=10;tgside>0;tgside--)
  {
  digitalWrite(1, 1);
  digitalWrite(4, 1);
  digitalWrite(6, 1); //side green, else red
    }
     }
     else(tw=0)
      {
digitalWrite(1, LOW);// no signal was checked, no light respon
       digitalWrite(4, LOW);
       digitalWrite(6, LOW);
        }
   }

    void YellowLight(CarLightEW*YL)
    { 
    YL->CounterY();
    }
 
     void GRLight(CarLightEW*GRL)
     {
     GRL->CounterGR();
     }
     
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
 
void Gettg(CarLightEW*pt, SensorES & Obj1, SensorWN & Obj2)// 作比较, 然后给重新给静态函数tg赋值 输入对象（同一个类的不同对象）
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


int main()
  {
   CarLightEW CEW;
  CarLightSN CSN;
  SensorES SE, SS; 
  SensorWN SW, SN;
  WalkLight WL;
  
    YellowLight(&CEW);
     YellowLight(&CSN);
    GRLight(&CEW);
     GRLight(&CSN); 

  if(WiringPiSetup() == -1) //initialize wiringpi store fail or not
 {
  printf("you set up wiringpi failed"); //failed
  return 1;
 }
  
 
