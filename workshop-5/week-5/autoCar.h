#pragma once
#include"robot.h"
//struct
	struct point {
		double x = 0;
		double y = 0;
	};
	class autoCar : private robot
	{
	private:
		struct point currentLoc;


	public:
		autoCar(std::string);
		void newLoaction(int, int);
		void updateLocation(int, int);
		void work();
	};

	
