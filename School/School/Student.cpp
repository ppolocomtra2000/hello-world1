#include "Student.h"

Student::Student()
{
	code = "";
	name = "";
	school = NULL;
}

Student::Student(string icode, string iname, School* ischool)
{
	code = icode;
	name = iname;
	school = ischool;
}

Student::~Student(){}
void Student::print()
{
	cout << "Student code:" << code << endl;
	cout << "Student name:" << name << endl;
	if (school != NULL)
		school->print();
	cout << "Number of enrolled courses:" << enrolledCourses.size() << endl;
	for (int i = 0; i < enrolledCourses.size(); i++)
	{
		enrolledCourses[i]->print();
	}
}

void Student::enrollACourse(Course* course)
{
	bool hasEnrolled = false;
	for (int i = 0; i < enrolledCourses.size(); i++)
	{
		if (enrolledCourses[i]->getCode() == course->getCode())
		{
			hasEnrolled = true;
		}
	}
	if (hasEnrolled == false)
	{
		bool ans = course->enrollAStudent(this);
		if (ans) {
			enrolledCourses.push_back(course);
			cout << "Enroll successfully" << endl;
		}
		else
		{
			cout << "Enroll failed" << endl;
		}
	}
	else
	{
		cout << "Enroll failed" << endl;
	}
}