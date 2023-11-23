#pragma once
#include"Animal.h"

class Sheep : public Animal
{
public:
	void speak(void);
	
	virtual ~Sheep() {
		std::cout << "sheep is destroyed" << std::endl;
	}
};

