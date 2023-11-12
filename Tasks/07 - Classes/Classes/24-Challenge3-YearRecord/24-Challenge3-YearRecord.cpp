// 24-Challenge3-YearRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "YearRecord.h"
#include <vector>

using namespace std;

int chooseOption(YearRecord Year);

int main()
{
	/*YearRecord Year1("Paul Paulington", "COMP1000");

	Year1.addModule("COMP1001");
	Year1.addStudent("James Jameson");
	Year1.addStudent("Thomas Thompson");

	Year1.display();

	string studentName = "James Jameson";
	Year1.checkStudent(studentName);
	
	studentName = "Jack Jackson";
	Year1.checkStudent(studentName);*/

	string studentName, moduleName;

	cout << "Create a YearRecord, inserting first student and first module." << endl 
		<< "Enter student name:" << endl;
	getline(cin, studentName);
	
	cout << endl << "Enter Module Name:" << endl;
	getline(cin, moduleName);
	
	
	YearRecord Year1(studentName, moduleName);

	int value;

	do {
		value = chooseOption(Year1);
		cout << endl;
	} while (value != 5);



	return 0;
}

int chooseOption(YearRecord Year) {
	cout << "Choose Year Record options:" << endl
		<< "1. Add student" << endl
		<< "2. Add module" << endl
		<< "3. Display Year Record" << endl
		<< "4. Check student record" << endl
		<< "5. Leave program" << endl;

	string studentNamer, moduleNamer;

	int choice;
	cin >> choice;

	cin.ignore();


	switch (choice) {
	case 1:
		cout << "Enter student name:" << endl;
		getline(cin, studentNamer);
		Year.addStudent(studentNamer);
		break;
	case 2:
		cout << "Enter module name:" << endl;
		getline(cin, moduleNamer);
		Year.addModule(moduleNamer);
		break;
	case 3:
		Year.display();
		break;
	case 4:
		cout << "Enter student name:" << endl;
		getline(cin, studentNamer);
		Year.checkStudent(studentNamer);
		break;
	case 5:
		cout << "Leaving program";
		break;
	default:
		break;
	}
	return choice;
}