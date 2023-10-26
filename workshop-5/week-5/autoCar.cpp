#include "autoCar.h"
#include<iostream>
#include<cmath>
autoCar::autoCar(std::string s ): robot(s){}

void autoCar::updateLocation(int d, int angle) {
	double y = d * sin(angle);
	double x = d * cos(angle);
	autoCar::currentLoc.x += x;
	currentLoc.y += y;
	std::cout << "the current location is updated. Current:\t" << currentLoc.x << "\t" << currentLoc.y << std::endl;
}
void autoCar::newLoaction(int x, int y) {
	currentLoc.x = x;
	currentLoc.y = y;
}

void autoCar::work() {
	std::cout << "Car doesn't work it drives" << std::endl;
}