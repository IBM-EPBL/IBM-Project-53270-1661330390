int moisture_data=0; 
void setup()
{
  pinMode(A0,INPUT); 
  Serial.begin(9600); 
  pinMode(12,OUTPUT); 
  pinMode(2,OUTPUT);

}

void loop() 
{
moisture_data= analogRead(A0);
  Serial.println(moisture_data);

if(moisture_data<22){ 
  digitalWrite(12,HIGH); 
  digitalWrite(2,HIGH);

}

else{ 
  digitalWrite(12,LOW); 
  digitalWrite(2,LOW);

}
  delay(5);

}
