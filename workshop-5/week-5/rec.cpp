#include "rec.h"
#include<iostream>
rec::rec(int h , int w) : shape(h,w){}
int rec::area() {
	return( height * width);
}
void rec::printArea() {
	
	std::cout << "Area of triangle is:\t" << rec::area() << std::endl;
}