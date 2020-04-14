  int main()
  {
 
  auto int tgSN,tgEW,t1;// t1为整体变量，子函数可以调用
  int tr,tg,ty; //timing

  if(WiringPiSetup() == -1) //initialize wiringpi store fail or not
 {
  printf("you set up wiringpi failed"); //failed
  return 1;
 }
  
 
