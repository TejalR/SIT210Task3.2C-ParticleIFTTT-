// ------------
// IFTTT Trigger
// ------------

int led1 = A5; 

int led2 = D7;

int photoresistor = A0;
int lightValue;

void setup() {


  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(photoresistor, INPUT);

}

void loop() {
  lightValue = analogRead(photoresistor);
  int j = 1;
  
  if (lightValue > j) {
      Particle.publish("Light", "Sun is Up", PRIVATE);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
  } 
  if(lightValue < j){
      Particle.publish("Light", "Sun has set", PRIVATE);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
  }
 
    delay(5000);

}

