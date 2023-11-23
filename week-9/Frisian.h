#pragma once
#include "Cow.h"
class Frisian : public Cow
{
public:
	void speak(void);
	virtual ~Frisian() {
		std::cout << "Frisian cow is destroyed" << std::endl;
	}
};

