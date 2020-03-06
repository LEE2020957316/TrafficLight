void SNsensorini()
 {
PinMode(12,GPIO.INPUT)
PinMode(18,GPIO.INPUT)
PinMode(2,GPIO.INPUT)
PinMode(3,GPIO.INPUT)
 GetnewtEW();//EW green, and SN sensortimer star (SN RED)
 }

  void EWsesorini()
{
PinMode(23,GPIO.INPUT)
PinMode(25,GPIO.INPUT)
PinMode(4,GPIO.INPUT)
PinMode(5,GPIO.INPUT)
 GetnewtSN();//SN  green, and EW sensortimer star (EW RED)
 }

void redEWini()
{
PinMode(1,GPIO.OUTPUT);
digitalWrite(1, GPIO.LOW);
 redSNini();
  greenEWini();
   greenSNini();
   yellowEWini();
   yellowSNini();
}

void redSNini()
{
PinMode(4,GPIO.OUTPUT);
digitalWrite(4, GPIO.LOW);
  greenEWini();
   greenSNini();
   yellowEWini();
   yellowSNini();
}

void greenEWini()
{
PinMode(25,GPIO.OUTPUT);
digitalWrite(23, GPIO.LOW);
  redEWini();
 redSNini();
   yellowEWini();
   yellowSNini();
}

void greenSNini()
{
PinMode(26,GPIO.OUTPUT);
digitalWrite(26, GPIO.LOW);
  redEWini();
 redSNini();
   yellowEWini();
   yellowSNini();
}

void yellowEWini()
{
PinMode(2,GPIO.OUTPUT);
digitalWrite(2, GPIO.LOW);
  redEWini();
 redSNini();
  greenEWini();
   greenSNini();
}

void yellowSNini()
{
PinMode(3,GPIO.OUTPUT);
digitalWrite(3, GPIO.LOW);
  redEWini();
 redSNini();
  greenEWini();
   greenSNini();
}

void Button()// check the button
{
  pinMode(11,GPIO.INPUT); //引脚0为BUTTON输入模式
  pullUpDnControl(11,PUD_UP); //设置0号引脚上拉,(设置成上拉输入，引脚上就加了一个上拉电阻，那么引脚就默认是高电平，当再去读取这个引脚的时候，
 //就可以检测到低电平了)
}
