#pragma once
#include<string>
#include<iostream>
class A
{
public:
	//this is th constructor
	A(std::string);
	void setName(std::string);
	void printName(void);
	// this is destructor
	~A();

	//this is copy constructor
	A(const A&);

private:
	std::string Name;
	int* point;
};

