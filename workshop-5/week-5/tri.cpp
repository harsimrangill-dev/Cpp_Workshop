#include "tri.h"
#include<iostream>
tri::tri(int h, int w): shape(h,w){
}
int tri::area() {
	return(0.5 * height * width);
}
void tri::printArea() {
	std::cout << "Area of triangle is:\t" << tri::area() << std::endl;
}