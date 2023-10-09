// Install header files if you want to run this code other than tinkercad 
// link for this project is- https://www.tinkercad.com/things/7mIFUNsnXDp?sharecode=tZRe4wXr6qp5WSk2B6MxtDyiUswwOLXjd_Db0RyM_j0
// Pin Diagram is avilable in Readme.md File
// c++ code

//Pin initialisation
const int pinCols[1]={4}; //set pins for column
const int pinRows[2]={9,8};

//key mapping
char keys[2][1]=
{
  {'A'} ,
  {'B'}
 };

void setup(){
Serial.begin(9600);
  
  //it's the programmers choice,rows pin as input
   pinMode(pinCols[0], INPUT_PULLUP); // set Row pin as input
  
  //column 
  for (int i=0; i<4; i++){
    pinMode(pinRows[i], OUTPUT); // SET COLUMN PINS AS OUTPUT
    digitalWrite(pinRows[i], LOW);
  }
}

void loop(){
  readKey();
  delay(100);
}

void readKey(){
  // Discuss the logic of function
  for (int rows=0; rows<2; rows++){
    // columns
    pinMode(pinRows[rows], OUTPUT);
    
    for (int columns=0; columns<1; columns++){
    //Rows
    //Apply condition for key combination
    if(digitalRead(pinCols[columns]) == 0){
      Serial.println(keys[rows][columns]);
      delay(200);
    }
  }
  pinMode(pinRows[rows],INPUT); // To reset value of the key
  
}
}
  