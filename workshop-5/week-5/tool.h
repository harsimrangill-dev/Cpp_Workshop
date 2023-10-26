#pragma once
class tool
{
protected:
	int str;
	char type;
public:
	void setStr(int);
	void fight(tool&, tool&);
};

