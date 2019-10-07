#include "Student.h"

int main()
{
	School* hcmus = new School("VNU-HCMUS");
	Semester* summer2019 = new Semester("Summer 2019", hcmus);
	Course* oop = new Course("OOP", "CTT06", 100, summer2019);
	Course* integral2 = new Course("Integral 2", "MTH00006", 90, summer2019);
	Course* linear = new Course("Linear Algebra", "MTH00008", 80, summer2019);
	Course* physics1 = new Course("Physics 1", "PHY00005", 70, summer2019);

	Student* nttai = new Student("18120542", "Nguyen Tien Tai", hcmus);
	nttai->enrollACourse(oop);
	nttai->enrollACourse(integral2);
	nttai->enrollACourse(physics1);
	nttai->enrollACourse(linear);
	return 0;
}