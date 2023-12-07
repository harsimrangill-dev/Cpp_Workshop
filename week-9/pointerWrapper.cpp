#include "pointerWrapper.h"


//constructor
pointerWrapper::pointerWrapper(int value) {
	//allocation heap memory
	std::cout << "Allocating memory for the int pointer" << std::endl;
	p = new int(value);
}


//destructor
pointerWrapper::~pointerWrapper() {
	//deleting the poinmter
	std::cout << "Releasing memory from the pointer" << std::endl;
	delete p;
}

//print method
void pointerWrapper::print() {
	std::cout << "Hi, I am a Wrapper pointer with value : " << *p << std::endl;
}