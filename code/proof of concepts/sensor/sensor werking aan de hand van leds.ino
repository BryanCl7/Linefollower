int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;
int led6 = 12;

int pin1 = A0;
int pin2 = A1;
int pin3 = A2;
int pin4 = A3;
int pin5 = A4;
int pin6 = A5;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue1 = analogRead(pin1);
  int sensorValue2 = analogRead(pin2); 
  int sensorValue3 = analogRead(pin3); 
  int sensorValue4 = analogRead(pin4); 
  int sensorValue5 = analogRead(pin5); 
  int sensorValue6 = analogRead(pin6); 
  Serial.println(sensorValue1);
  Serial.println(sensorValue2);
  Serial.println(sensorValue3);
  Serial.println(sensorValue4);
  Serial.println(sensorValue5);
  Serial.println(sensorValue6);
  
  if (sensorValue1 > 400) {
  digitalWrite(led1, HIGH); //ZWART sensor 1
  }
  if(sensorValue1 < 400){
  digitalWrite(led1, LOW);//WIT sensor 1
  }
  if (sensorValue2 > 400) {
  digitalWrite(led2, HIGH); //ZWART sensor 2
  }
  if(sensorValue2 < 400){
  digitalWrite(led2, LOW);//WIT sensor 2
  }
   if (sensorValue3 > 400) {
  digitalWrite(led3, HIGH); //ZWART sensor 3
  }
  if(sensorValue3 < 400){
  digitalWrite(led3, LOW);//WIT sensor 3
  }
   if (sensorValue4 > 400) {
  digitalWrite(led4, HIGH); //ZWART sensor 4
  }
  if(sensorValue4 < 400){
  digitalWrite(led4, LOW);//WIT sensor 4
  }
   if (sensorValue5 > 400) {
  digitalWrite(led5, HIGH); //ZWART sensor 5
  }
  if(sensorValue5 < 400){
  digitalWrite(led5, LOW);//WIT sensor 5
  }
   if (sensorValue6 > 400) {
  digitalWrite(led6, HIGH); //ZWART sensor 6
  }
  if(sensorValue6 < 400){
  digitalWrite(led6, LOW);//WIT sensor 6
  }
}
