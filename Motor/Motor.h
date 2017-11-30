/*
* Library to control a Motor with L293D
* Developed by Salim Khazem
*/

#ifndef Motor_h
#define Motor_h
#include <Arduino.h>
class Motor
{
public:
  Motor(int pin1, int pin2, int pinP); // Constructor
  void affectation(); // Affectation method (turn on OUTPUT the pins )
  void forward(int vit); //Method to run the motor forward direction
  void rearward(int vit);  // Method to drive the motor to the rearward direction
  void turnOff();         // method to turn off the motor

private:
  /*
  * Private attributs
  */
  int m_pin1;
  int m_pin2;
  int m_pinP;
  int m_dir;
  int m_speed;

};


#endif
