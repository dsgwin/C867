#include <string>
#include <iostream>
#include "roster.h"
using namespace std;

/* // Declare parse() function to reformat studentDataTable strings and convert them to student objects

void Roster::parse(string studentDataString) {
	// Get String Length
	int endOfString = studentDataString.length();
	
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
	int days1 = studentDataString.substr(lhs, rhs - lhs));

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

	cout << id << " " << fName << " " << lName << " " << email << " " << studentAge << " " << days1 << ", " << days2 << ", " << days3 << " " << degree << endl;

}

// Define Add function that sets the instance variables from part D1 and updates the roster

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

};

// Define remove function that removes students from the roster by student ID. 
// If the student ID does not exist, the function prints an error message indicating that the student was not found.

void Roster::remove(string studentId) {

};

// Define printAll() function

void Roster::printAll() {

};

// Define printAverageDaysInCourse() function

void Roster::printAverageDaysInCourse(string studentId) {

};

// Define printInvalidEmails() function

void Roster::printInvalidEmails() {

};*/