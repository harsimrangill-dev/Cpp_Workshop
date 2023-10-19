//this is the header file for reg.cpp

//io stream 
#include <iostream>
//string 
#include <string>

//namespace
namespace reg {
	//class to keep track of registration
	class Registration
	{
		//public members of the class

	public:
		bool input();    // function to get input form the user
		void output();		//function to display output
		void setRecord(bool index);		//update the record if the user has attenede the session
		int getCode();			//getting the code as the code is private
		//Returns the input code
	private:
		bool checkCode(); //to check the input matches the access code
		int code;			//variabel to store users input
		std::string attend;		//record of if the user has attend that session or not
	};
}


//class functions

//using extern beacuse of double declaration