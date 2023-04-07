#include<IRremote.h> // import IR remote library

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

int motor_input4 = 4; 
int motor_input3 = 5;
int motor_input2 = 7; 
int motor_input1 = 6;  
  
{
  digitalWri
  irrecv.enableIRIn();
  pinMode(motor_input1,OUTPUT);    
  pinMode(motor_input2,OUTPUT);
  pinMode(motor_input3,OUTPUT);    
  pinMode(motor_input4,OUTPUT);
  Serial.begin(9600);000); // Wait for   //if some date is sent, reads it and saves in state
  if (irrecv.decode(&results)) {
    irrecv.resume();   // Receive the next value
    }
    // Go Forward 
    if (results.value == 0xFD807F) {   // VOL+ this is where you put in your IR remote button #
    digitalWrite(motor_input1,HIGH);      
    digitalWrite(motor_input2,LOW);
    digitalWrite(motor_input3,HIGH);      
    digitalWrite(motor_input4,LOW);
    {
      Serial.println("Go Forward!");
      }
    }
  
    // Go Backward
        if (results.value == 0xFD906F) {   // VOL- this is where you put in your IR remote button #
    digitalWrite(motor_input1,LOW);      
    digitalWrite(motor_input2,HIGH);
    digitalWrite(motor_input3,LOW);      
    digitalWrite(motor_input4,HIGH);
    {
      Serial.println("Go Backward!");
      }
    }
    // Turn Right
      if (results.value == 0xFD609F) {   // >>| this is where you put in your IR remote button #
    digitalWrite(motor_input1,LOW);      
    digitalWrite(motor_input2,HIGH);
    digitalWrite(motor_input3,HIGH);      
    digitalWrite(motor_input4,LOW);
    {
      Serial.println("Turn Right!");
      }
    }
    // Turn Left
        if (results.value == 0xFD20DF) {   // |<< this is where you put in your IR remote button #
    digitalWrite(motor_input1,HIGH);      
    digitalWrite(motor_input2,LOW);
    digitalWrite(motor_input3,LOW);      
    digitalWrite(motor_input4,HIGH);
    {
      Serial.println("Turn Left!");
      }
    }
   // Stop
      if (results.value == 0xFD807F) {   // FUNC STOP this is where you put in your IR remote button #
    digitalWrite(motor_input1,LOW);      
    digitalWrite(motor_input2,LOW);
    digitalWrite(motor_input3,LOW);      
    digitalWrite(motor_input4,LOW);
    {
      Serial.println("Stop!");
      }
    }
    
  