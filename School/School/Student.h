#pragma once
#include "Course.h"
class Student
{
private:
	string name;
	string code;
	School* school;
	vector<Course*> enrolledCourses;
public:
	Student();
	Student(string code, string name, School* school);
	~Student();
	void print();
	void enrollACourse(Course* course);
};

