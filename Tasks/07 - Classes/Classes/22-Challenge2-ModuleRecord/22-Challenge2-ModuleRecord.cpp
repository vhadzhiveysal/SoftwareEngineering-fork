// 22-Challenge2-ModuleRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ModuleRecord.h"
using namespace std;



int main()
{
	ModuleRecord student1("student1", 1001);

	student1.moduleSummary();
	student1.totalCredits();

}
