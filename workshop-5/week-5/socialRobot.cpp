#include "socialRobot.h"
#include<iostream>
#include "robot.h"
#include<iostream>
//constructor
socialRobot::socialRobot(std::string s) : robot(s){
	name = robot::name;
	workUnit = robot::workUnit;
}
void socialRobot::sayHellow() {
	std::cout << "Hello I am social robot" << std::endl;
}
//access function for string name
std::string socialRobot::getName() {
	return name;
}