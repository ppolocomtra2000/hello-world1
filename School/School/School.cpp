#include "School.h"

School::School()
{
	schoolName = "The Umbrella Academy";
}

School::School(string name)
{
	schoolName = name;
}
School::~School()
{

}

void School::print()
{
	cout << "School name: " << schoolName << endl;
}
