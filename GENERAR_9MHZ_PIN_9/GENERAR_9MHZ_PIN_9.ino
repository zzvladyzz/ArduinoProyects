const byte CLOCKOUT=9;
void setup()
{
  pinMode(CLOCKOUT,OUTPUT);
  TCCR1A=bit(COM1A0);
  TCCR1B=bit(WGM12)|(bit(CS10));
  OCR1A=1;
}
void loop()
{
  // salida pin9
}
