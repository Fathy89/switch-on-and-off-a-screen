// C++ code
//
int y;
int x=-1; 
void setup()
{
  pinMode(2, OUTPUT);  
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);  
  pinMode(5, OUTPUT);  


}

void loop()
{
  y=digitalRead(3); 
  if(y==1){
    if(x==-1)
    {digitalWrite(2,1); 
     x=~x; 
    }
    else{
    digitalWrite(2,0); 
      x=~x; 
    }
    
  }

}