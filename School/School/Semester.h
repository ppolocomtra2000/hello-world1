#pragma once
#include "School.h"
class Semester
{
private:
	string name;
	School* school;
public:
	Semester();
	Semester(string iname, School* ischool);
	~Semester();
	void print();
};

