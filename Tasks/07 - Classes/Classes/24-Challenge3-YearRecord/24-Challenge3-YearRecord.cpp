// 24-Challenge3-YearRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "YearRecord.h"
#include <vector>

using namespace std;

int main()
{
	YearRecord Year1("Paul Paulington", "COMP1000");

	Year1.addModule("COMP1001");
	Year1.addStudent("James Jameson");
	Year1.addStudent("Thomas Thompson");

	Year1.display();

	string studentName = "James Jameson";
	Year1.checkStudent(studentName);
	
	studentName = "Jack Jackson";
	Year1.checkStudent(studentName);

}
