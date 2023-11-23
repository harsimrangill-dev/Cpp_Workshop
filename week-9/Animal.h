#pragma once
#include<iostream>
class Animal
{
public:
	virtual void speak(void) = 0;
	virtual ~Animal() {
		std::cout << "Animal is destroyed" << std::endl << std::endl;
		
	}
};


