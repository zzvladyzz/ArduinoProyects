void setup() 
{
 Serial.begin(9600);
 //Serial.setTimeout(100);
 pinMode(13,OUTPUT);
}
 void loop() 
{
  char caracter=0;
  if(Serial.available()>0)
  {
    delay(20);
    String str="";  
    while(Serial.available()>0)
    {
      caracter=(char)Serial.read();
      if(caracter!='\n' && caracter!='\r')
      {
      str=str+caracter;
      }
    }
    int16_t datos=str.toInt(); //para convertir de str a int solo numeron no letras
    
    Serial.println(str);
    if(str=="encender")
    {
      digitalWrite(13,1);
    }
    else if(str=="apagar")
    {
      digitalWrite(13,0);
    }
  }
}
