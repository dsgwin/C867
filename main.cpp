// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "roster.h"
using namespace std;

// Define studentData Input Array 

const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Duncan,Gwin,dgwin4@wgu.edu,34,25,33,42,SOFTWARE" };

/* void parse(string studentDataString) {
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

	cout << id << " " << fName << " " << lName << " " << email << " " << studentAge << " " << days1 << ", " << days2 << ", " << days3 << " " << degree << endl;

}; */

int main()
{
	for (int i = 0; i < 5; i++) {
		//parse(studentData[i]);
		cout << studentData[i] << endl;
	}


	return 0;
}
