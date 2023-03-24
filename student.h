#include <string>
#include <iostream>
#define STUDENT_H
#include "degree.h"
using namespace std;

class Student {
  public:
    // Default Constructor
    Student();

    // Constructor to pass all student data and build object

    Student(string id, string fname, string lname, string email, int studentAge, int days1, int days2, int days3, DegreeProgram degree);

    // Print function to output all student data

    void print();

    // Mutator Functions to Set Private Variables
    void SetStudentId(string id);
    void SetFirstName(string fName);
    void SetLastName(string lName);
    void SetEmailAddress(string email);
    void SetAge(int studentAge);
    void SetDaysToComplete(int days1, int days2, int days3);
    void SetDegreeProgram(DegreeProgram degree);

    // Accessor Functions to Get Private Variables

    string GetStudentId();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    int* GetDaysToComplete();
    DegreeProgram GetDegreeProgram();

    // Define constant for number of courses to use with daysToComplete Array

    static const int NUM_COURSES = 3;


  private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[NUM_COURSES];
    DegreeProgram degreeProgram;


};
