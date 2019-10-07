#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Semester.h"
#include "Course.h"
#include "Student.h"
using namespace std;

class School
{
private:
	string schoolName;
	vector<Semester*> sems;
public:
	School();
	School(string name);
	~School();
	void print();
};

