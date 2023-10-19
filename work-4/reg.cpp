#include <iostream>
#include "reg.h"    // this is the header file 
using namespace std;

namespace reg {


		
	//defining the functions of the class
	//Uses iostream:

	/// <summary>
	/// 
	/// </summary>
	/// <returns>bool</returns>
	bool Registration::input()
	{
		//getting code form the user

		cout << "Enter the access code: ";
		cin >> code;
		// calling the check code function for checking the code
		//if correct than update the record
		if (checkCode())
		{
			//call the fucntion to change the record
			setRecord(true);

			return true;
		}
		//setting the record to false in case it does not match
		else
		{
			setRecord(false);
			return false;
		}
	}

	//output function to display what ever is the state of the attendencee
	void Registration::output()
	{
		cout << "attend = " << attend << endl;
	}

	//setting the record of the attendence depending on the input
	void Registration::setRecord(bool index)
	{
		if (index)
			 attend = "TRUE";
		else
			attend = "False";
	}

	//checking the code if it matches the access code
	bool Registration::checkCode()
	{
		//code to match against 
		int accesscode = 123456;
		if (code == accesscode)
		{
			cout << "Register successfully.\n";
			return true;
		}
		else
		{
			return false;
		}
	}

	//function to get the code as it is private
	int Registration::getCode()
	{
		return code;
	}

}
