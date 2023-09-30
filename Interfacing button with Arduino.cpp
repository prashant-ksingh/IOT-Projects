//be sure to add header file before execution if you are running this code in other than tinker cad
// link of the project - https://www.tinkercad.com/things/kb5RoZgA5o8?sharecode=wBqzJUSGnh0Ykfs0pZ7xFn0G5vXzw1L-ixCGvZriYG4
// Pin Diagram is avilable in Readme.md File
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