// Install header files if you want to run this code other than tinkercad 
// link for this project is- https://www.tinkercad.com/things/hmnOWPg9taS?sharecode=IosZrIX3dsbYm3KriqcGGPpYag0rt7zA5rMyanqbAlM
// Pin Diagram is avilable in Readme.md File
// C++ code
const int red = 12;
const int yellow = 11;
const int green = 10;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(red, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(500);
  
  digitalWrite(green, LOW);
}