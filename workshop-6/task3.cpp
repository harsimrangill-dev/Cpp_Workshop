#include "task3.h"
#include<iostream>
#include<algorithm>

void type_var(int t)
{
	std::cout << t << "\t this is an integer" << std::endl;
}
void type_var(std::string t)
{
	std::cout << t << "\t this is a string" << std::endl;
}
void type_var(double t)
{
	std::cout << t << "\t this is a double" << std::endl;
}

//this is task 4

void vec_sort(std::vector <int>& v, bool b)
{
	if (b) {
		std::sort(v.begin(), v.end());
	}
	
}