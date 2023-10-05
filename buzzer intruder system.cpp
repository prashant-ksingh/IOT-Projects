// Install header files if you want to run this code other than tinkercad 
// link for this project is- https://www.tinkercad.com/things/9AwNhYT18j4?sharecode=wn1SSpXgO9aDyET4dKsXkhjvFgWxoAK1of_-DmqMD7E
// Pin Diagram is avilable in Readme.md File
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}