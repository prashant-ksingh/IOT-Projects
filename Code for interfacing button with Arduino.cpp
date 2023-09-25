// Install headers if you waant to run this code other than tinkercad 
// link for this project is- https://www.tinkercad.com/things/kJ2jHdgWc2U?sharecode=JSScIgE9j5fJHLGTuwKLdfRsfg8avgPpuynViglFoYU
void setup(){
  
  Serial.begin(9600);
  
  // setup pins
  pinMode(2, INPUT_PULLUP); //PULLUP represents on mode i.e. 1

}

void loop(){
  
  Serial.println(digitalRead(2));//digitally reading from pin 2
  
  // if button is pressed, turn led ON 
  if(digitalRead (2) == 0)
  { // Button is pressed
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  delay(100);

}