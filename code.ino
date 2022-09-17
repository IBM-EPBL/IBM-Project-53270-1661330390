int moisture_data=0; 
void setup()
{ 
  pinMode(A0,INPUT);
  Serial.begin(9600); 
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop()
{
moisture_data= analogRead(A0);
Serial.println(moisture_data);

if(moisture_data<22){
  digitalWrite(8,HIGH); 
  digitalWrite(4,HIGH);

}

else{ 
  digitalWrite(8, LOW); 
  digitalWrite(4, LOW);

} 
  delay(5);
}