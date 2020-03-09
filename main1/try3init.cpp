
void SNsensorini()//SN sensor IO bound?
 {
PinMode(12,GPIO.INPUT)
PinMode(18,GPIO.INPUT)
PinMode(2,GPIO.INPUT)
PinMode(3,GPIO.INPUT)
 GetnewtEW();//EW green, and SN sensortimer star (SN RED)
 }

  void EWsesorini()//EW sensor IO bound? multiple th process at same time?
{
PinMode(23,GPIO.INPUT)
PinMode(25,GPIO.INPUT)
PinMode(4,GPIO.INPUT)
PinMode(5,GPIO.INPUT)
 GetnewtSN();//SN  green, and EW sensortimer star (EW RED)
 }

void redEWini()
{
PinMode(1,GPIO.OUTPUT);
digitalWrite(1, GPIO.LOW);
  redSNini();
  greenEWini();
   yellowSNini();
   greenSNini();
   yellowEWini();
}
 
void redSNini()
{
PinMode(4,GPIO.OUTPUT);
digitalWrite(4, GPIO.LOW);
  greenEWini();
   greenSNini();
   yellowEWini();
   yellowSNini();
}

void greenEWini()
{
PinMode(25,GPIO.OUTPUT);
digitalWrite(23, GPIO.LOW);
  redEWini();
 redSNini();
   yellowEWini();
   yellowSNini();
}

void greenSNini()
{
PinMode(26,GPIO.OUTPUT);
digitalWrite(26, GPIO.LOW);
  redEWini();
 redSNini();
   yellowEWini();
   yellowSNini();
}

void yellowEWini()
{
PinMode(2,GPIO.OUTPUT);
digitalWrite(2, GPIO.LOW);
  redEWini();
 redSNini();
  greenEWini();
   greenSNini();
}

void yellowSNini()
{
PinMode(3,GPIO.OUTPUT);
digitalWrite(3, GPIO.LOW);
  redEWini();
 redSNini();
  greenEWini();
   greenSNini();
}

void Button()// check the button
{
  pinMode(11,GPIO.INPUT); //引脚0为BUTTON输入模式
  pullUpDnControl(11,PUD_UP); //设置0号引脚上拉,(设置成上拉输入，引脚上就加了一个上拉电阻，那么引脚就默认是高电平，当再去读取这个引脚的时候，
 //就可以检测到低电平了)
}

class GetNT{
 private:mutex car_x1_,  mutex car_x2_,
public:
 GutNT():{mutex car_x2_lock();}
void sensortimer1(int& t0)
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t0=0;
do
{
t0=t0+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=t1-5 ||tgSN=t1-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(18==1));// has input signals
     mutex car_x1_lock();
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
      mutex car_x2_unlock();
     t=0;
}

void sensortimer2(int t1)
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t1=0;
do
{
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=t1-5 ||tgSN=t1-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(12==1);// has input signals
       mutex car_x2_lock();
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high). 
     t=0;
}


 void Getnewt(GetNT& get, int t3)
 {
  get.sensortimer1()
    get.sensortimer2()
  if(t<=1)
  {
   t3=t3;// 3 chooses
  }
    else if(t>=1 && t<=2)
    {
      t3+=5; 
    }
      else if(t>=2)
  {
     t3+=10;
  }
 }
 
       
      /*void GetnewtSN()
 {
  if(t<=1)
  {
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
  t1=tgSN;// change t1 every time
 } 

// private:
 //mutex car_SN_,  mutex car_EW_,
 
   t1=tgEW;// change t1 every time
