class Button{
  if(digitalRead(0) == 0)// 检测到低电平
     {
        delay(20); // 延时销抖, for machine button 
        if(digitalRead(0) == 0)// 检测到低电平
        { 
 goto  walk_light;
     }
   else 
       {
       digitalWrite(1, LOW);// no signal was checked, no light respon
       digitalWrite(4, LOW);
       digitalWrite(6, LOW);
        }
 
  walk_light:
   //digitalWrite(18, GPIO.HIGH); // all side greenlight lighting
    for(tgside=10,tgside>0,tgside--)
  {
  digitalWrite(1, 1);
  digitalWrite(4, 1);
  digitalWrite(6, 1); //side green, else red
    }
 return 0;
 }
