#pragma once
#include"shape.h"
class tri: private shape
{
public:
	tri(int, int);
	int area();
	void printArea();
};

