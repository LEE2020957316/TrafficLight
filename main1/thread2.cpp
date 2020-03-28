class TLSYS{ // because of the command sharing 
 private:
  mutex car_x1_,  mutex car_x2_, mutex cp_, mutex gnt_;
public:
TLSYS():{mutex car_x2_lock(); mutex cp_lock(); mutex gnt_lock(); mutex gnt_lock()}
void sensortimer1(int& t0)
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t0=0;
do
{
t0=t0+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=t-5 ||tgSN=t-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(18==1));// has input signals
     mutex car_x1_lock();
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high)
   mutex car_x2_unlock();
   t0=0;
}

void sensortimer2(int t1)
{
PinMode(23,GPIO.OUTPUT);// pinmode (int pin, int mode), computer control it by 23
int t1=0;
do
{
t=t+0.01;
delay(10);  //sleep(0.01)=10ms 
    if(tgEW=t-5 ||tgSN=t-5)// only check for 5 mins each time
  {
    break;
  }
}while(digitalRead(12==1);// has input signals
       mutex car_x2_lock();
    digitalWrite (23,1); //operate timer;// digitalwrite(int pin, int value)// if value != 0 == high).
       mutex cp_unlock();
     t1=0;
       
}
void comp( )
       {
        mutex cp_lock();
        if(t0>=t1){ mutex gnt_lock(); }
        else{t0=t1; 
             mutex gnt_unlock();
            }
        }
       
   void Getnewt(int& t3)
  {
  mutex gnt_lock();
  if(t0<=1)
  {
   t3=t3;// 3 chooses
  }
    else if(t0>=1 && t0<=2)
    {
      t3+=5; 
    }
      else if(t0>=2)
  {
     t3+=10;
  }
   t=t3;
 }
       
void trafficlight()
     {
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

 yellowEWini();
 //redSNini();
for(tyEW=3,tyEW>0,tyEW--)
 {
 digitalWrite(2, 1);
  //digitalWrite(4, 1);
  digitalWrite(5, 1); //EW yellow, else red
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
   
  yelloeSNini();
//redEWini();
for(tySN=3,tySN>0,tySN--)
 {
  //digitalWrite(1, 1);
  digitalWrite(3, 1);
  digitalWrite(5, 1); //SN yellow, else red
   sensortimer();
 }
    
  if(digitalRead(0) == 0)// 检测到低电平
     {
        delay(20); // 延时销抖, for machine button 
        if(digitalRead(0) == 0)// 检测到低电平
        { 
 goto  walk_light;
     }
   else 
       {
       digitalWrite(1, GPIO.LOW);// no signal was checked, no light respon
       digitalWrite(4, GPIO.LOW);
       digitalWrite(6, GPIO.LOW);
        }
 
  walk_light:
   //digitalWrite(18, GPIO.HIGH); // all side greenlight lighting
    for(tgside=10,tgside>0,tgside--)
  {
  digitalWrite(1, 1);
  digitalWrite(4, 1);
  digitalWrite(6, 1); //side green, else red
    }
        }// for void trafficlight
              }//  for TLSYS类的 
       
        std::this_thread::sleep_for(std::chrono::milliseconds(10));// make thread sleep for 3 ms(can both add in void /main after thread.
