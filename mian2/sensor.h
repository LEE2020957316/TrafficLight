class SensorES{
  public: 
  SensorES(int t=0){//初始化
    PinMode(23,OUTPUT);
     }// pinmode (int pin, int mode), computer control it by 23
    public:
  //void Counter()
  void GetT(CarLight & Tobj)
    do
    {
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
  if(tgEW=t1-5 ||tgSN=t1-5)// counterv t can not exceed 1 minutes?
  {
   t=0;
   digitalWrite (23,1);    //operate timer; digitalwrite(int pin, int value)// if value != 0 == high)
  }
}
while(digitalRead(12)==1);// has input signals
}
    virtual int outputT()
    { reture t1; }
  private: 
  int t1;



void sensortimer()
{
PinMode(23,OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t1,t=0;
do
{
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=t1-5 ||tgSN=t1-5)// only check for 5 seconds each time
  {
    break;
  }
}while(digitalRead(12==1)&&digitalRead(18==1));// has input signals
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
     t=0;
}
class SensorWN: punlic SensorES 
{
  public: SensorES( int a; int t2=0):
  {//初始化
    
    public: 
    virtual int outputT()
 void Getnewt(SensorES & Ts)
 {
  if(Ts.outputT())
  {
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
  t1=tgEW;// change t1 every time
 }
