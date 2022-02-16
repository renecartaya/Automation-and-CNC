char userInput;

void setup()
{
  Serial.begin(9600);                        //  setup serial
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  
if(Serial.available()> 0){ 
    
    userInput = Serial.read();               // read user input
      
      if(userInput == 'H'){                
        digitalWrite(LED_BUILTIN, HIGH); 
      }
      
      if(userInput == 'L'){
       digitalWrite(LED_BUILTIN, LOW);         
      }
      
      if(userInput == 'h'){
        for(int i=0; i<10;i++){
          delay(200);
          digitalWrite(LED_BUILTIN, HIGH); 
          delay(200);
          digitalWrite(LED_BUILTIN, LOW);  
        } // Blink for loop
      }

  } // Serial.available
} // Void Loop
