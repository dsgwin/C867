#include <string>
#include <iostream>
#define STUDENT_H
#include "degree.h"
using namespace std;

class Student {
public:
    // Default Constructor
    Student();

    // Mutator Functions to Set Private Variables
    void SetFirstName(string firstName);

    // Accessor Functions to Get Private Variables

    string GetFirstName();

private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    enum degreeProgram;


};