#include <string>
#include <iostream>
#include "roster.h"

using namespace std;

// Define default constructor
Roster::Roster() {
	this->index = 0;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		this->classRosterArray[i] = new Student;
	}
	return;

}


// Define parse() function to reformat studentDataTable strings and convert them to student objects

void Roster::parse(string studentDataString) {
	// Get String Length
	size_t endOfString = studentDataString.length();
	
	// Get initial string containing studentId
	size_t rhs = studentDataString.find(",");
	string id = studentDataString.substr(0, rhs);

	// Move to next string containing firstName
	size_t lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	string fName = studentDataString.substr(lhs, rhs - lhs);

	// Move to next string containing lastName
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	string lName = studentDataString.substr(lhs, rhs - lhs);

	// Move to next string containing emailAddress
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	string email = studentDataString.substr(lhs, rhs - lhs);

	// Move to next string containing age
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	int studentAge = stoi(studentDataString.substr(lhs, rhs - lhs));

	// Move to next string containing daysToComplete1
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	int days1 = stoi(studentDataString.substr(lhs, rhs - lhs));

	// Move to next string containing daysToComplete2
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	int days2 = stoi(studentDataString.substr(lhs, rhs - lhs));

	// Move to next string containing daysToComplete3
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	int days3 = stoi(studentDataString.substr(lhs, rhs - lhs));

	// Move to final string containing degreeProgram enumeration
	lhs = rhs + 1;
	rhs = studentDataString.find(",", lhs);
	string strDegree = studentDataString.substr(lhs, endOfString);

	DegreeProgram degree = DegreeProgram::SECURITY;

	if (strDegree == "SECURITY") {
		degree = DegreeProgram::SECURITY;
	}

	else if (strDegree == "NETWORK") {
		degree = DegreeProgram::SECURITY;
	}

	else if (strDegree == "SOFTWARE") {
		degree = DegreeProgram::SECURITY;
	}

	

}

// Define Add function that sets the instance variables from part D1 and updates the roster

void Roster::add(int index, string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {

	classRosterArray[index] = new Student(studentID, firstName, lastName, emailAddress, age,
		daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

};

// Define remove function that removes students from the roster by student ID. 
// If the student ID does not exist, the function prints an error message indicating that the student was not found.

void Roster::remove(string studentId) {

};

// Define printAll() function

void Roster::printAll() {

	cout << "All current students: " << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (classRosterArray[i] == nullptr)
		{
			continue;
		}
		else {
			classRosterArray[i]->print();
		}
	}
	cout << endl;

};

// Define printAverageDaysInCourse() function

void Roster::printAverageDaysInCourse(string studentId) {

};

// Define printInvalidEmails() function

void Roster::printInvalidEmails() {

};