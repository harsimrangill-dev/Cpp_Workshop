#pragma once
#include <string>

/// <summary>
/// this is a base class robot 
/// has simple methods 
/// </summary>
class robot
{
protected:
	std::string name = "";
	int workUnit;
public:
	robot(std::string);
	void whoAmI(void);
	void work(void);
};

