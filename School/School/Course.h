#pragma once
#include "Semester.h"
#include "Student.h"
class Course
{
private:
	string code;
	string name;
	int nStudents;
	int maxStudents;
	Semester* semester;
	vector<Student*> enrolledStudents;
public:
	Course();
	Course(string iname, string icode, int imaxStudents, Semester* isemester);
	~Course();
	void print();
	bool isAllowedToEnroll(Student* student);
	string getCode();
	bool enrollAStudent(Student* student);
};

