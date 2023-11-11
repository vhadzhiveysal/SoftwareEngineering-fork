#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Les", "Leyton", 12345);
    student1.display();
    
    //Test remaining member functions here

    string fullName = student1.getFullName();
    cout << fullName << endl;
    int studentID = student1.getID();
    cout << studentID << endl;
    
    student1.updateFirstName("Les");
    student1.updateFirstName("Paul");

    fullName = student1.getFullName();
    cout << fullName << endl;

    student1.display();

    student1.updateLastName("Leyton");
    student1.updateLastName("Paulington");

    fullName = student1.getFullName();
    cout << fullName << endl;
    
    student1.display();

}
