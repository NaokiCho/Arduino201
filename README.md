Arduino201
==========

HCSR04 Library Methods
----------------------

.readVal(); 

Returns an integer, the distance recorded by sonar in cm

.assignPin(<integer>);

Associates the instance to the indicated pin

L298 Library Methods
--------------------

.assignPins(<integer1>, <integer2>, <integer3>);
Associates the instance to the indicated pins
Integer1 is the enable pin
Integer2 is input1
Integer3 is input2

.move(<integer>); 
Accepts an integer between -255 and 255,
moving the motor at that speed; negative 
numbers make the motor go backwards

.brake();
Stops the motor
