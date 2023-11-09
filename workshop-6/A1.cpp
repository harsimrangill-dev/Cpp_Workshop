#include "A1.h"
#include<string>


//constructor
//it sets the name member of the class
A::A(std::string s) {
	Name = s;
	point = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}
/// <summary>
/// this function set the name of the private memeber
/// and changes first value
/// </summary>
/// <param name="s"></param>
void A::setName(std::string s) {
	Name = s;
	point[0] = 0;
}

/// <summary>
/// this function prints the name memeber variable of the class using c out stream 
/// and also prints the array
/// </summary>
void A::printName() {
	std::cout << "The name of the class is  " << Name << std::endl;
	for (int a = 0; a < 10; a++) {
		std::cout << point[a] << "  ";
	}
	std::cout << std::endl;
}

//destructor
A::~A() {

	std::cout << "destructor is called" << std::endl;

}
//copy constructor
A::A(const A& obj) {
	Name = obj.Name;
	point = new int[10] ;
	for (int a = 0; a < 10; a++) {
		point[a] = obj.point[a];
	}
}