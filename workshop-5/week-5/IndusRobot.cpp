#include "IndusRobot.h"
#include<iostream>
#include "robot.h"
#include<iostream>
//constructor
IndusRobot::IndusRobot(std::string s): robot(s) {
	name = robot::name;
	workUnit = robot::workUnit;
}
void IndusRobot::workHarder() {

	std::cout << "Old value:\t" << workUnit << std::endl;
	workUnit += 2;
	std::cout<< "\nNew value:\t" << workUnit << std::endl;
}