#define CANT_VUELTAS 500

const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;
const int StepA = 12;
const int DirA = 13;

void setup() {
  Serial.begin(9600);  // Initialize hardware serial for debugging

  pinMode(StepX, OUTPUT);
  pinMode(DirX, OUTPUT);
  pinMode(StepY, OUTPUT);
  pinMode(DirY, OUTPUT);
  pinMode(StepZ, OUTPUT);
  pinMode(DirZ, OUTPUT);
  pinMode(StepA, OUTPUT);
  pinMode(DirA, OUTPUT);
}

void loop() {

  // Motor Y
  digitalWrite(DirY, LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepY, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepY, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000); // One second delay
  digitalWrite(DirY, HIGH);
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepY, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepY, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000);

  // Motor Z
  digitalWrite(DirZ, LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepZ, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepZ, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000); // One second delay
  digitalWrite(DirZ, HIGH);
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepZ, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepZ, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000);

  // Motor A
  digitalWrite(DirA, LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepA, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepA, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000); // One second delay
  digitalWrite(DirA, HIGH);
  for(int x = 0; x < CANT_VUELTAS; x++) {
    digitalWrite(StepA, HIGH); 
    delayMicroseconds(700);    // by changing this time delay between the steps we can change the rotation speed
    digitalWrite(StepA, LOW); 
    delayMicroseconds(700); 
  }
  delay(1000);
}
