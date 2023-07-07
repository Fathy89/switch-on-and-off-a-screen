// C++ code
//
int button= 3; 
int led= 5;
int read= digitalRead(button);
void setup()
{pinMode(button,INPUT);
 pinMode(led,OUTPUT); 
}

void loop()
{
  if(read==1)
    digitalWrite(led,read); 
  
}