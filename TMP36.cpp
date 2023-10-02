// C++ code
// Install header files if you want to run this code other than tinkercad 
// link for this project is- https://www.tinkercad.com/things/arln8GPkaDS?sharecode=y7UkNQ6qHe2DeCR6Kk2gvsTnN75g31FnyVgy84GHslY
// Pin Diagram is avilable in Readme.md File

# define temp_pin A0
# define buzzer 8

void setup(){
  Serial.begin(9600);
  pinMode(temp_pin,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop(){
  int voltageReadings = analogRead(temp_pin);
  
  //rial.println(voltageReadings);
 
  // To get raw voltage
  float voltage_out = voltageReadings*(5.0/1024.0);
  
  //rial.println(voltage_out);
  
  // Formula to calculate temprature
  
  float temprature = (voltage_out - 0.5)*100;
  Serial.print("\n \n Temprature in degree celcius:");
  Serial.print(temprature);
  if(temprature>=60){
    digitalWrite(buzzer,HIGH);
  
  }else{
    digitalWrite(buzzer,LOW);
    
  }
  
  
  delay(100);
}