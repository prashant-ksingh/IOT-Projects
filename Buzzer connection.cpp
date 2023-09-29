// C++ code
// Install header files if you want to run this code other than tinkercad 
// link for this project is-https://www.tinkercad.com/things/gyStyJ7r0ql?sharecode=MK7SLs7wHL65Xi555TC66agDbfLCBoiObDjOKJtYQ_c
void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(3,OUTPUT);
}
void loop()
{
  int buttonState = digitalRead(4);
  Serial.println(buttonState);
  if(buttonState == 0)
  {
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(3,LOW);
  }
  delay(500);
}