// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
using namespace std;

// Define studentData Input Array with Strings to Parse

const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Duncan,Gwin,dsgwin@gmail.com,34,25,33,42,SOFTWARE" };


int main()
{   

	// F1 Output course title, programming language, student ID, and name

	cout << "WGU C867 Scripting and Programming - Applications  -- C++ -- ID:008698673 -- Duncan Gwin" << endl << endl;

	// F2 Create instance of roster class called classRoster

	Roster classRoster;

	// F3 Add each student in studentData to classRoster

	for (int i = 0; i < Roster::NUM_STUDENTS; i++) {
		classRoster.index = i;
		classRoster.parse(studentData[i]);
	}

	// F4.a Print all students in classRoster

	classRoster.printAll();

	// F4.b Print Invalid E-mail Addresses 

	classRoster.printInvalidEmails();

	// F4.c Print Average days for each student
	for (int i = 0; i < Roster::NUM_STUDENTS; i++) {
		string studentId = classRoster.classRosterArray[i]->GetStudentId();
		classRoster.printAverageDaysInCourse(studentId);
	}
	cout << endl;

	// F4.d Print Students by Degree Program
	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

	// F4.e Remove Student with ID 'A3'
	classRoster.remove("A3");

	// F4.f Print all students to verify A3 is gone
	classRoster.printAll();

	// F4.g Try to remove A3, should output error not found
	classRoster.remove("A3");

    // F5 Destructor called on main function exit
	return 0;
}
