/*************************************** OVERALL GOAL *********************************************/
MOTOR CONTROL

GOAL = PERFORM SMOOTH MOTOR FUNCTIONS, VIA USER INPUT (TRIGGER RESPONSE), ALLOWING FOR SEEMLESS, EASE OF CONTROL OVER ROBOTIC "PROTOTYPE" MOTOR VEHICLE.

OBJECTIVES = FIX UP CODE (C++ PROGRAMMING LANGUAGE) AND GET MOTOR VEHICLE TO PERFORM DESIRED OUTPUTS.

FUTURE PLANS = AUTOMATE THE MOTOR OUTPUT ACTIONS (MACHINE LEARNING), TO ENSURE MOTOR VEHICLE OPERATES ON ITS OWN. (SENSORS) 

/*************************************** OVERALL GOAL *********************************************/
INITIAL CODE * EXPLANATIIONS
                                         
CODE SCRIPT (C++)
                                                                                          
                                                                                                 START [ INITIAL CODE ]
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                  END


EXPLANATION
                                                                                                 START  [  EXPLANATIIONS  ]
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
This code is intended to control two DC motors using an Arduino, where each motor is controlled by a pair of inputs (in1 and in2 for Motor A, in3 and in4 for Motor B) and an enable pin (enA and enB) to manage speed.

Breakdown of the Code:
Variable Declarations:

int enA = 3; and int enB = 6;: These are the pins controlling the speed of Motor A and Motor B, respectively.
int in1 = 2;, int in2 = 4;, int in3 = 5;, int in4 = 7;: These pins control the direction of the motors.
Setup Function:

pinMode() sets the motor control pins as outputs.
There's a typo in pinMode(in3, OUTPUT);z, where the letter z should be removed.
Loop Function:

The loop moves the motors forward, stops them, moves them backward, stops them, and turns them left or right based on different pin combinations.
Steps in the Loop:
Move Forward:

digitalWrite(in1, HIGH); and digitalWrite(in2, LOW);: Motor A moves forward.
digitalWrite(in3, HIGH); and digitalWrite(in4, LOW);: Motor B moves forward.
analogWrite(enA, 20); and analogWrite(enB, 20);: Motors A and B run at a low speed (20 out of 255).
The code then delays for 1.5 seconds.
Stop:

Both motors are stopped for 0.5 seconds.
Move Backward:

Motors are driven in reverse for 1.5 seconds.
Stop:

Both motors are stopped for 0.5 seconds.
Turn Left or Right:

The motors are set to turn the vehicle by controlling one motor in forward and the other in reverse.
These actions are followed by a stop.
Errors & Corrections:
Typo in setup() Function:

Error: pinMode(in3, OUTPUT);z
Correction: Remove the z to make it pinMode(in3, OUTPUT);.
Inconsistent Comments:

Issue: The comments for some analog writes and delays are inaccurate.
Correction: Update the comments to correctly describe each action:
analogWrite(enA, 0); and analogWrite(enB, 0); should be described as setting the speed to 0, not 20.
Low Speed Value:

Issue: The speed is set very low (20), which might not be enough to overcome the motor's inertia.
Correction: Increase the value to a higher number if the motors are not moving as expected.
Summary:
Once the typo and comment errors are corrected, the code will drive a vehicle or robot forward, stop, reverse, stop, and turn in different directions based on the timing provided in the delay() calls.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                  END
































































































