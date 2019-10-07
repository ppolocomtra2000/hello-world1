#include "Course.h"

Course::Course()
{
	name = "";
	code = "";
	nStudents = 0;
	maxStudents = 100;
	semester = NULL;
}
Course::Course(string iname, string icode, int imaxStudents, Semester* isemester)
{
	name = iname;
	code = icode;
	nStudents = 0;
	maxStudents = imaxStudents;
	semester = isemester;
}

Course::~Course(){}
void Course::print()
{
	cout << "Course code:" << code << endl;
	cout << "Course name:" << name << endl;
	cout << "Number of students:" << nStudents << endl;
	cout << "Max number of students allowed: " << maxStudents << endl;
	if (semester != NULL)
		semester->print();
}

bool Course::isAllowedToEnroll(Student* student)
{
	if (nStudents > maxStudents)
		return false;
	else
		return true;
}

string Course::getCode()
{
	return code;
}

bool Course::enrollAStudent(Student* student)
{
	if (isAllowedToEnroll(student))
	{
		enrolledStudents.push_back(student);
		nStudents++;
		return true;
	}
	else
		return false;
}