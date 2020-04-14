class CarLightEW
{
public: 
  CarLightEW(int tgEW=0, int tg=0)
  { 
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
  protected: 
  static int tg;
  private:
  int tgEW;
  
 class CarLightSN: public CarLightEW
 {
     CarLightSN(int tgEW=0, int tg=0, int tgSN=0 ):CarLightEW(tgEW, tg)
     { 
       this->tgSN= tgSN;
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
    private:
  int tgSN;

  virtual void CounterGR()
  {
    
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
