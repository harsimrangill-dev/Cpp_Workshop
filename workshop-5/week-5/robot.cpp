#include "robot.h"
#include<iostream>
//constructor
robot::robot(std::string s) {
	name = s;
	workUnit = 0;
}
//who i am method that prints name memeber function
void robot::whoAmI() {
	std::cout << "my name is:\t" << name << std::endl;
}
//memeory work to incleremernt workunit
void robot::work() {
	workUnit++;
	std::cout << "new work unit:\t" << workUnit << std::endl;
}