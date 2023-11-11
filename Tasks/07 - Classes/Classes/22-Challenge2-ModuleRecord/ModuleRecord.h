#pragma once
#include <iostream>
#include <string>
using namespace std;


class ModuleRecord
{

private:
	string name;
	string subjectArea = "COMP";
	unsigned int code;
	unsigned int semesterCredits = 20;
	unsigned int semesters = 1;


public:

	ModuleRecord(string inputName, unsigned int inputCode) {
		name = inputName;
		code = inputCode;

	}

	void moduleSummary() {
		cout << "Module Name: " << subjectArea << code << endl << "No# of semesters: " << semesters << endl << "Semester Credits: " << semesterCredits << endl;
	}

	void totalCredits() {
		int total = semesterCredits * semesters;
		cout << "Total number of credits: " << total << endl;
	}
};

