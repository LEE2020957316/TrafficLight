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

   while true // intialize succeed
  {
   
  redSNini();
  redEWini();
  for (tr=3,tr>0,tr--)
  {
  digitalWrite(1,1);
  digitalWrite(4, 1);
  digitalWrite(21, 1); // all red
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
  
  redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(1, 1);
 digitalWrite(26, 1);
  digitalWrite(27, 1); //SN green, else red;
   }
   
  yelloeSNini();
//redEWini();
for(tySN=3,tySN>0,tySN--)
 {
  //digitalWrite(1, 1);
  digitalWrite(3, 1);
  //digitalWrite(5, 1); //SN yellow, else red
   sensortimer();
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
