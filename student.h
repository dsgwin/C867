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
    void SetStudenId(string studentId);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmailAddress(string emailAddress);
    void SetAge(int age);
    void SetDaysToComplete(int course, int days);
    void SetDegreeProgram(enum degreeProgram);

    // Accessor Functions to Get Private Variables

    string GetFirstName();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    int GetDaysToComplete();
    enum GetDegreeProgram();

private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    enum degreeProgram;


};
