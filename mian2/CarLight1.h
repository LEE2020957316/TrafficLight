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
  
  virtual void CounterGR()// EW绿灯亮 
    {
      greenEWini();
  redSNini();
  SNsensorini();
    tgEW=tg;
  for(tgEW=10,tgEW>0,tgEW--)//EW green, and SN sensortimer star 
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
     tgEW= CarLightEW::tg;
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(1, 1);
 digitalWrite(26, 1);
  digitalWrite(27, 1); //SN green, else red;
   }

  virtual void CounterGR() //黄灯亮
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
    
/*   void yellowSNL()
{
  //yelloeSNini();// already
    redSNini();
  greenSNini();// other initialize in direction of SN
PinMode(2,OUTPUT);
digitalWrite(2, 1);
}  
