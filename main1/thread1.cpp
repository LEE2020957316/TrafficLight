 

{
 public: 	
  auto int tgSN,tgEW,t1;// t1为整体变量，子函数可以调用
  int tr,tg,ty; //timing

   while true // intialize succeed
  {
   
  redSNini();
  redEWini();
  for (tr=3,tr>0,tr--)
  {
  digitalWrite(1,1);
  digitalWrite(4, 1);
  digitalWrite(5, 1); // all red
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
  
  redEWini();
  greenSNini();
   EWsesorini(); // SN green, and EW sensortimer star 
    for(tgSN=10,tgSN>0,tgSN--)
  {
  digitalWrite(1, 1);
 digitalWrite(26, 1);
  digitalWrite(5, 1); //SN green, else red;
   }
   
   void Yellow()
   {
for (ty>=0,ty=3,ty--) // quan 
 {
  //digitalWrite(1, 1);
 digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(5, 1); //SN EW car all yellow, sides are red.
  unique_lock<mutex>locker(b_mutex);
button_cond.notify_all ();//线程等待的实现
 }
     
 void button 
 {        // thread button
    PinMode(3,OUTPUT); 
 pinMode(0,INPUT); //引脚0为BUTTON输入模式
   digitalWrite(3, LOW);  
  pullUpDnControl(0,PUD_UP); //设置0号引脚上拉,(设置成上拉输入，引脚上就加了一个上拉电阻，那么引脚就默认是高电平，当再去读取这个引脚的时候，
 //就可以检测到低电平了)

while true  {
  unique_lock<mutex>locker(b_mutex);
 button_cond.wait (unique_lock& locker, [this]{if (ty == 0);})
   return true; retuen false;
       car.lock();
     sensor.lock();
     if(digitalRead(0) == 0)// 检测到低电平
     {
        delay(20); // 延时销抖, for machine button
        if(digitalRead(0) == 0)// 检测到低电平
        {  
		
           for(tgside=10,tgside>0,tgside--)
         {
               digitalWrite(1, 1);
               digitalWrite(4, 1);
               digitalWrite(6, 1); //side green, else red
              sensor.unlock();
		  car.unlock(); 
          } 
          else 
       {
       digitalWrite(1,LOW );// no signal was checked, no light respon
       digitalWrite(4,LOW);
       digitalWrite(6,LOW);
	delay(500);	  // 
        sensor.unlock();
		  car.unlock();    
       }
   }
     }
  
