#include <iostream>
#include "reg.h"


//using namespace
using namespace reg;

//main fuction
//global namespace
int main()
{
	//intilizing the class object
	reg::Registration myCode;
	std::cout << "Registration:\n";

	//call to input memeber of the object to get code input
	//if it is correct than display the code and registed message
	if (myCode.input())
	{
		std::cout << "The input code is " << myCode.getCode() << "\n";
		std::cout << "The system has been updated with ";
		myCode.output();
	}
	//else display the message that says the code is incorrect
	else
	{
		std::cout << "Your input code " << myCode.getCode() << " doesn't match the access code\n";
		std::cout << "Register unsuccessfully. \n";
	}
	return 0;
}