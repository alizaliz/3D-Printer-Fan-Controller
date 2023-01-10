
int fanAPin = 3; 
int fanBPin = 5;

int ledAPin = 6; 
int ledBPin = 9; 

int sensorAPin = A1; 
int sensorBPin = A0;

int sensorAValue = 0;
int sensorBValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(fanAPin, OUTPUT);
  pinMode(ledAPin, OUTPUT);
  
  pinMode(fanBPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorAValue = analogRead(sensorAPin);
  float speedA = sensorAValue * ( 255.0 / 1023.0);
  
  analogWrite(fanAPin, speedA);
  analogWrite(ledAPin, speedA);

  sensorBValue = analogRead(sensorBPin);
  float speedB = sensorBValue * ( 255.0 / 1023.0);
  
  analogWrite(fanBPin, speedB);
  analogWrite(ledBPin, speedB);

}
