/*************************************** OVERALL GOAL *********************************************/
MOTOR CONTROL

INITIAL CODE * EXPLANATIIONS

CODE SCCIPT (C++)                             START
////////////////////////////////////////////////////////////////////////////////////////////////////
9
//SETTING VARIABLES FOR THE PINS
int enA = 3; //SPEED CONTROL FOR MOTOR A 
int in1 = 2;
int in2 = 4;

int enB = 6; // Speed control for motor B
int in3 = 5;
int in4 = 7;

void setup() {
  // put your setup code here, to run once:
    pinMode(enA, OUTPUT); // set all the motor control pins to outputs
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(enB, OUTPUT);
    pinMode(in3, OUTPUT);z
    pinMode(in4, OUTPUT);

    
}
void loop() {
  digitalWrite(in1, HIGH); //move forward for 1.5s
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enA, 20);   //the speed of motor A shoukld be 20
    analogWrite(enB, 20);   //the speed of motor B shoukld be 20
    delay(1500);

   digitalWrite(in1, LOW); //STOP for 0.5s
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);     //the speed of motor A shoukld be 20
    analogWrite(enB, 0);      //the speed of motor B shoukld be 20
    delay(500); 

    digitalWrite(in1, LOW); //move backward for 1.5s
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, 20); 
    analogWrite(enB, 20);
    delay(1500);

    digitalWrite(in1, LOW); //STOP for 0.5s
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 

    digitalWrite(in1, HIGH); //Turn for 1 s
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, 20);     
    analogWrite(enB, 20);
    delay(1000);

    digitalWrite(in1, LOW); //STOP for 0.5s
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 

    digitalWrite(in1, LOW); //Turn for 1 s
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enA, 20);
    analogWrite(enB, 20);
    delay(1000);

    digitalWrite(in1, LOW); //STOP for 0.5s
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 
    
}
///////////////////////////////////////////////////////////////////////////////////////////////////
END

EXPLANATION
////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////
