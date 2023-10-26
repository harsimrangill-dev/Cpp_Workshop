#include"IndusRobot.h"
#include"socialRobot.h"
#include"robot.h"
#include"tri.h"
#include"rec.h"
#include<iostream>
#include"autoCar.h"
//main function
//for task 4 we needded three classes c1, c2, child class;
int main() {
	robot r{ "robot!" };
	IndusRobot s("robot2");
	socialRobot i("Robot3");
	r.whoAmI();
	s.workHarder();
	s.whoAmI();

	tri t(10, 6);
	rec re(20, 10);
	t.printArea();
	re.printArea();

	autoCar c("car");
	c.work();
	c.updateLocation(20, 2);
	c.newLoaction(10, 10);
}