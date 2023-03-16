#define POTENTIOMETER_PIN A0
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//(LED_BUILDIN)
  pinMode(12,OUTPUT); 
  pinMode(11,OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(13,HIGH);
  // delay(1000);
  // digitalWrite(13,LOW);
  // delay(1000);
  // digitalWrite(12,HIGH);
  // delay(1000);
  // digitalWrite(12,LOW);
  // delay(1000);
  // digitalWrite(11,HIGH);
  // delay(1000);
  // digitalWrite(11,LOW);
  // delay(1000);
  
  // Traffc Light
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  // digitalWrite(12,HIGH);
  delay(1000);
  // digitalWrite(12,LOW);
  // digitalWrite(11,HIGH);
  // delay(1000);
  // digitalWrite(11,LOW);


  // for(int i=0;i<255;i++)
  // {
  //   analogWrite(11,i+5);
  //   delay(50);
  // }
  // for(int i=255;i>0;i--)
  // {
  //   analogWrite(11,i-5);
  //   delay(50);
  // }


  for(int i=0;i<255;i=i+5)
  {
    analogWrite(11,i);
    delay(50);
  }
  for(int i=255;i>0;i=i-5 )
  {
    analogWrite(11,i);
    delay(50);
  }
  // analogWrite(11,analogRead(POTENTIOMETER_PIN)/4);
  // Serial.println(analogRead(POTENTIOMETER_PIN));
  // delay(100); 
}
