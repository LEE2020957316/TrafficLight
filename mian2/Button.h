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
    int CheckB()
     {b.CheckB();}
  void WLighting()
   { 
     tw=CheckB();//digitalWrite(18, GPIO.HIGH); // all side greenlight lighting
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
