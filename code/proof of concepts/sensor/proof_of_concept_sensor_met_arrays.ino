const byte interruptPin = 2;  // Pin waarop de schakelaar is aangeslotenvolatile bool isRobotRunning = trye;  // Variabele om de status van de robot bij te houden
volatile byte isRobotRunning = LOW;
int pin1 = A0;
int pin2 = A1;
int pin3 = A2;
int pin4 = A3;
int pin5 = A4;
int pin6 = A5;

int led = 4;
const int numReadings = 50;  // Aantal te lezen waarden
int sensorValue1[numReadings]; // Array voor de sensorwaarden
int sensorValue2[numReadings];
int sensorValue3[numReadings];
int sensorValue4[numReadings];
int sensorValue5[numReadings];
int sensorValue6[numReadings];
void setup() { 
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);  // Zet de schakelaar-pin als input met pull-up weerstand
  attachInterrupt(digitalPinToInterrupt(interruptPin), interrupt, RISING); // Stel een interrupt in voor de schakelaar op de rising edge
  pinMode(led, OUTPUT);
}

void loop() {
if (isRobotRunning){ 
    
  // Lees zes waarden in de array
  for (int i = 0; i < numReadings; i++) {
    sensorValue1[i] = analogRead(pin1); // Bijvoorbeeld van analoge pin A0, pas dit aan naar je behoeften
    sensorValue2[i] = analogRead(pin2);
    sensorValue3[i] = analogRead(pin3);
    sensorValue4[i] = analogRead(pin4);
    sensorValue5[i] = analogRead(pin5);
    sensorValue6[i] = analogRead(pin6);
  }

  // Bereken het gemiddelde van de waarden in de array
  int sum1 = 0;
  int sum2 = 0;
  int sum3 = 0;
  int sum4 = 0;
  int sum5 = 0;
  int sum6 = 0;
  for (int i = 0; i < numReadings; i++) {
    sum1 += sensorValue1[i];
    sum2 += sensorValue2[i];
    sum3 += sensorValue3[i];
    sum4 += sensorValue4[i];
    sum5 += sensorValue5[i];
    sum6 += sensorValue6[i];
  }
  float average1 = sum1 / (float)numReadings; // Bereken het gemiddelde
  float average2 = sum2 / (float)numReadings;
  float average3 = sum3 / (float)numReadings;
  float average4 = sum4 / (float)numReadings;
  float average5 = sum5 / (float)numReadings;
  float average6 = sum6 / (float)numReadings;

  // Stuur het gemiddelde naar de seriële monitor, gescheiden door spaties
  Serial.print(average1); // Stuur het gemiddelde
  Serial.print(" "); // Voeg een spatie toe tussen de waarden
  Serial.print(average2);
  Serial.print(" ");
  Serial.print(average3);
  Serial.print(" ");
  Serial.print(average4);
  Serial.print(" ");
  Serial.print(average5);
  Serial.print(" ");
  Serial.println(average6);
  }
 else{
  digitalWrite (led, HIGH);
 }
}
void interrupt() {
   static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 200) 
  {
    isRobotRunning = !isRobotRunning;
  }
  last_interrupt_time = interrupt_time;
  }
