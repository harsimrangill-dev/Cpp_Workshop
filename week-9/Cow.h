#pragma once
#include"Animal.h"
class Cow : public Animal
{
public:
	void speak(void);
	virtual ~Cow() {
		std::cout << "Cow is destroyed" << std::endl;
	}

};


