/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       francesca                                                 */
/*    Created:      Mon Oct 05 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

vex::brain Brain;

vex::motor RightFront = vex::motor(vex::PORT4, true); 
vex::motor LeftFront = vex::motor(vex::PORT3);
vex::motor RightBack = vex::motor(vex::PORT5); 
vex::motor LeftBack = vex::motor(vex::PORT2); 

vex::motor LeftIntake = vex::motor(vex::PORT6); 
vex::motor RightIntake = vex::motor(vex::PORT7); 
vex::motor Intake = vex::motor(vex::PORT10); // Wheely wheels

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
