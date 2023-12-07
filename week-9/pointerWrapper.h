#pragma once
#include<iostream>

//wrapper class definition

class pointerWrapper
{
public :
	//constructor
	pointerWrapper(int);

	//destructor
	~pointerWrapper();
	void print();
private:
	int* p;
};

