
#include<string>
#include"A1.h"
#include <iostream>

int main()
{
	A* a1 = new A("a");
	a1->setName("I am A");
	A a2 = *a1;
	delete a1;
	a2.printName();
	
	return 0;
}
