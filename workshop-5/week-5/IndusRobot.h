#pragma once
#include<string>
#include"robot.h"

class IndusRobot: public robot
{
private:
	std::string name = "";
	int workUnit;
public:
	IndusRobot(std::string s);
	void workHarder();
};

