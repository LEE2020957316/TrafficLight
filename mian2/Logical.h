class Logical{
  public:
   int Gettg(SensorES & Obj1, SensorWN & Obj2)// 作比较 输入对象（同一个类的不同对象），(加锁)
{
  int tg=0;
  //SensorES tes; SensorWN twn;
  if(Newtg(Obj1)>=Newtg(Obj2))
  { 
    tg=Newtg(Obj1);
  }
  else {tg=Newtg(Obj2);}
  return tg;
 }
  private:
  lock
    CarLightEW C;
  CarLightSN C1;
  //Sensor... 对象名
  
