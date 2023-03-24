#include <string>
#include <iostream>
#include "student.h"
using namespace std;

// Default constructor
Student::Student() {
	studentId = "unassigned";
	firstName = "unassigned";
	lastName = "unassigned";
	emailAddress = "unassigned";
	age = -1;
	this->daysToComplete[0] = 0;
	this->daysToComplete[1] = 0;
	this->daysToComplete[2] = 0;
	degreeProgram = DegreeProgram::SECURITY;
}

// Constructor to pass all student data and build object
Student::Student(string id, string fName, string lName, string email, int studentAge, int days1, int days2, int days3, DegreeProgram degree) {
	this->studentId = id;
	this->firstName = fName;
	this->lastName = lName;
	this->emailAddress = email;
	this->age = studentAge;
	this->daysToComplete[0] = days1;
	this->daysToComplete[1] = days2;
	this->daysToComplete[2] = days3;
	this->degreeProgram = degree;

}

// Print function to print all student data 

/* void Student::print() {
	// Print Tab Seperated Student Data
	cout << this->studentId << '\t' << this->firstName << '\t' << this->lastName << '\t' << this->emailAddress << '\t' << this->age << '\t';

	// Iterate through daysToComplete array to print comma separated values
	for (int i = 0; i < NUM_COURSES; i++) {
		if (i < NUM_COURSES - 1) {
			cout << this->daysToComplete[i] << ", ";
		}
		else {
			cout << this->daysToComplete[i];
		}
	}
	cout << '\t';
    // Print Degree Program

    cout << this->degreeProgram;
} */

// Mutator Functions to Set Private Variables

void Student::SetStudentId(string id) {
	this->studentId = id;
}

void Student::SetFirstName(string fName) {
	this->firstName = fName;
}
void Student::SetLastName(string lName) {
	this->lastName = lName;

}
void Student::SetEmailAddress(string email) {
	this->emailAddress = email;
}
void Student::SetAge(int studentAge) {
	this->age = studentAge;

}
void Student::SetDaysToComplete(int days[]) {
	for (int i = 0; i < NUM_COURSES; i++) {
		this->daysToComplete[i] = days[i];
	}
}
void Student::SetDegreeProgram(DegreeProgram degree) {
	this->degreeProgram = degree;

}

// Accessor Functions to Get Private Variables

string Student::GetStudentId() {
	return this->studentId;
}

string Student::GetFirstName() {
	return this->firstName;
}

string Student::GetLastName() {
	return this->lastName;
}

string Student::GetEmailAddress() {
	return this->emailAddress;
}

int Student::GetAge() {
	return this->age;
}
int* Student::GetDaysToComplete() {
	return this->daysToComplete;
}
DegreeProgram Student::GetDegreeProgram() {
	return this->degreeProgram;
}

