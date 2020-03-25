class A{
 private: int x, t;
  mutex car_x1_,  mutex car_x2_, mutex cp_, mutex gnt_;
  std::list<int> Counter;//容器，数组
public: 
  A(int t):{mutex car_x2_lock(); mutex cp_lock(); mutex gnt_lock();}// 构造函数
  void input()
  {
    if (digitalRead(18==(1)){
    Counter.push_back(1);// 收到的信号-> 队列
  }
    else 
      Counter.push_back(0);// with order
  }

  void output()
  {
   int order=0;
    if (!Counter.empty())
    {
     int order= Counter.front();// 按顺序从头开始取数组元素
     Counter.pop_front();//remove element
    }

   
   

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
       
   std::this_thread::sleep_for(std::chrono::milliseconds(10));    
  std::this_thread::sleep_for(std::chrono::milliseconds(10));// make thread sleep for 3 ms(can both add in void /main after thread.
       
  auto int tgSN,tgEW,t1;// t1为整体变量，子函数可以调用
  int tr,tg,ty; //timing

  if(WiringPiSetup() == -1) //initialize wiringpi store fail or not
 {
  printf("you set up wiringpi failed"); //failed
  return 1;
 }

  
int main()
  {
 A gett;
  std::thread t1(&A::input, std::ref(gett))// S OR E sensor read// IO bound, read at same time and only for join once?
   std::thread t2(&A::output, std::ref(gett))// N OR W sensor read
       t1.join();
        t2.join();
  }
