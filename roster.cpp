#include <string>
#include <iostream>
#include "roster.h"
#include <iomanip>
#include <regex>

using namespace std;

// Define default constructor
Roster::Roster() {
	Student* classRosterArray[NUM_STUDENTS];

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
		degree = DegreeProgram::NETWORK;
	}

	else if (strDegree == "SOFTWARE") {
		degree = DegreeProgram::SOFTWARE;
	}

	add(index, id, fName, lName, email, studentAge, days1, days2, days3, degree);

};

// Define Add function that sets the instance variables from part D1 and updates the roster

void Roster::add(int index, string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {

	this->classRosterArray[index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

};

// Define remove function that removes students from the roster by student ID. 
// If the student ID does not exist, the function prints an error message indicating that the student was not found.

void Roster::remove(string studentId) {

	bool searchResult = false;

	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (classRosterArray[i] == nullptr) {
			continue;
		}
		else if (studentId == classRosterArray[i]->GetStudentId()) {
			searchResult = true;
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			break;
		}
	};

	if (searchResult == true) {
		cout << "Student ID \"" << studentId << "\" found. Successfully removed." << endl << endl;
		}
    else {
		cout << "Error: Student ID \"" << studentId << "\" not found" << endl << endl;
		}
	
};


// Define printAll() function

void Roster::printAll() {

	cout << "Current Students:" << endl;

	for (int i = 0; i < NUM_STUDENTS; ++i) {

		if (classRosterArray[i] == nullptr) {
			continue;
		}
		
		else {
		    classRosterArray[i]->print();
		    cout << endl;
	    }
	}
	cout << endl;

};

// Define printAverageDaysInCourse() function

void Roster::printAverageDaysInCourse(string studentId) {
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (studentId == classRosterArray[i]->GetStudentId()) {
			double sum = 0;
			for (int j = 0; j < classRosterArray[i]->NUM_COURSES; ++j) {
				sum = sum + (classRosterArray[i]->GetDaysToComplete(j));
			}
			double avg = (sum / classRosterArray[i]->NUM_COURSES);
			cout << fixed << setprecision(1);
			cout << "Average Days in Course for Student ID \"" << studentId << "\": " << avg << endl;
		}
	}

};

// Define printInvalidEmails() function

void Roster::printInvalidEmails() {
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		string email = classRosterArray[i]->GetEmailAddress();
		bool validEmail = true;
		regex reg_space(" ");
		regex reg_at("@");
		regex reg_dot("\\.");

		if (!regex_search(email, reg_dot)) {
			validEmail = false;
		}

		else if (!regex_search(email, reg_at)) {
			validEmail = false;
		}

		else if (regex_search(email, reg_space)) {
			validEmail = false;
		}

		else {
			validEmail = true;
		}

		if (validEmail == false) {
			
			cout << "Student ID " << classRosterArray[i]->GetStudentId() << "'s e-mail address \"" << email << "\" is invalid." << endl;
		}
	}
	cout << endl;
};

// Define printByDegreeProgram() function

void Roster::printByDegreeProgram(DegreeProgram degree) {
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (classRosterArray[i]->GetDegreeProgram() != degree) {
			continue;
		}
		else if (classRosterArray[i]->GetDegreeProgram() == degree) {
			classRosterArray[i]->print();
			cout << endl;
		}
	}
	cout << endl;
};


// Define destructor

Roster::~Roster() {
	cout << endl << endl;
	cout << "Destroying roster object and freeing memory..." << endl << endl;
	cout << "DONE!" << endl;

};