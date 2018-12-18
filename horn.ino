
//Code for https://www.instructables.com/id/Bluetooth-Air-Horn/

#include <Servo.h>
#include <SoftwareSerial.h>

Servo hornServo;  // create servo object to control a servo
SoftwareSerial BT(10, 11); 
char a; // stores incoming character from other device
int pos = 0;    // variable to store the servo position


void setup() {
  
  BT.begin(9600);
  BT.println("Air Horn Active");
  hornServo.attach(9);  // attaches the servo on pin 9 to the servo object
  hornServo.write(10);  // sets the servo position

}

void loop() {

if (BT.available())
  {
    a=(BT.read());

    if (a=='1')
    {
    hornServo.write(90);              // tell servo to go to position in variable 'pos'
    delay(15);
    BT.println("");
    delay(350);
    hornServo.write(10);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
    
    if (a=='2')
    {
    hornServo.write(90);              // tell servo to go to position in variable 'pos'
    delay(15);
    BT.println("");
    delay(400);
    hornServo.write(10);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
    
    if (a=='3')
    {
    hornServo.write(90);              // tell servo to go to position in variable 'pos'
    delay(15);
    BT.println("");
    delay(500);
    hornServo.write(10);              // tell servo to go to position in variable 'pos'
    delay(15);
    }

    if (a=='4')
    {
    hornServo.write(90);              // tell servo to go to position in variable 'pos'
    delay(15);
    BT.println("");
    delay(600);
    hornServo.write(10);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
    
    if (a=='?')
    {
      BT.println("Send '1' for a sharp blast");
      BT.println("Send '2' for a longer blast");
      BT.println("Send '3' for a decent blast");
      BT.println("Send '4' for a deafening blast");
    }   
  }
}
