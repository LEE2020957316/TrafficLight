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
    
