// SETTING VARIABLES FOR THE PINS
int enA = 3;  // Speed control for motor A
int in1 = 2;
int in2 = 4;

int enB = 6;  // Speed control for motor B
int in3 = 5;
int in4 = 7;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT); 
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // Move forward for 1.5 seconds
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 20);   // Set the speed of motor A
  analogWrite(enB, 20);   // Set the speed of motor B
  delay(1500);

  // Stop for 0.5 seconds
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);    // Stop motor A
  analogWrite(enB, 0);    // Stop motor B
  delay(500); 

  // Move backward for 1.5 seconds
  digitalWrite(in1, LOW); 
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 20); 
  analogWrite(enB, 20);
  delay(1500);

  // Stop for 0.5 seconds
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(500); 

  // Turn left for 1 second
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 20);     
  analogWrite(enB, 20);
  delay(1000);

  // Stop for 0.5 seconds
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(500); 

  // Turn right for 1 second
  digitalWrite(in1, LOW); 
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 20);
  analogWrite(enB, 20);
  delay(1000);

  // Stop for 0.5 seconds
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(500); 
}
