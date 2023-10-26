#pragma once
#include <string>
#include"robot.h"

class socialRobot: public robot
{
private:
	std::string name = "";
	int workUnit;
public:
	socialRobot(std::string s);
	void sayHellow(void);
	std::string getName();
};

