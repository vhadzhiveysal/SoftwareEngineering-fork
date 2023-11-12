#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class YearRecord
{
private:
	unsigned int studentNumber;
	unsigned int moduleNumber;
	vector<string> moduleRecord;
	vector<string> studentRecord;

public:
	YearRecord(string studentName, string moduleName) {
		addStudent(studentName);
		addModule(moduleName);

	}

	void addStudent(string studentName) {
		studentRecord.push_back(studentName);
		studentNumber++;
	}
	void addModule(string moduleName) {
		moduleRecord.push_back(moduleName);
		moduleNumber++;
	}
	void checkStudent(string studentName) {
		
		if (find(studentRecord.begin(), studentRecord.end(), studentName) != studentRecord.end())
		{
			cout << studentName << " is found in Student Records" << endl;
		}
		else {
			cout << studentName << " does not exist in Student Records" << endl;
		}
	}
	void display() {
		cout << studentNumber << " student(s) exist(s) in this record" << endl << "List of Students:" << endl;
		for (string x : studentRecord) {
			cout << x << endl;
		}

		cout << endl << moduleNumber << " module(s) exist(s) in this record" << endl << "List of Modules:" << endl;
		for (string x : moduleRecord) {
			cout << x << endl;
		}
		cout << endl;
	}
};