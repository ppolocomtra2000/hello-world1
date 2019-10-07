#include "Semester.h"

Semester::Semester()
{
	name = "";
	school = NULL;
}

Semester::Semester(string iname, School* ischool)
{
	name = iname;
	school = ischool;
}
Semester::~Semester()
{
}

void Semester::print()
{
	cout << "Semester name:" << name << endl;
	if (school != NULL)
		school->print();
}