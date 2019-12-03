#include <iostream>
#include <fstream>

using namespace std;
float grade(float &test1, float &test2, float &assignment1 float &assignment)
{
//	float test1,test2, assignment1,assignment2, total_mark;
	string grades;
	
	total_mark=((test1+test2)/100*0.20+(assignment1+assignment2/100*0.30);
	if (total_mark>=40)
	grades= "A";
	else if (total_mark>=30)
	grades= "B";
	else if (total_mark>=25)
	grades= "C";
	else if (total_mark>=20)
	grades= "D";
	else if (total_mark>=0)
	grades= "F";
	return grades;	
}
