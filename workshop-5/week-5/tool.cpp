#include "tool.h"
void tool::setStr(int s) {
	str = s;
}

void tool::fight(tool& t1, tool& t2) {
	if (t1.type == 'r') {
		if (t2.type == 'r') {
			return;
		}
		else if (t2.type == 'p') {
			t1.str /= 2;
			t2.str *= 2;
			return;
		}
		else if (t2.type == 's') {
			t1.str *= 2;
			t2.str /= 2;
			return;
		}
	}
}