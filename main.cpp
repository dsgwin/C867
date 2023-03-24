// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
using namespace std;

// Define studentData Input Array 

const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Duncan,Gwin,dsgwin@gmail.com,34,25,33,42,SOFTWARE" };


int main()
{   

	// Output course title, programming language, student ID, and name

	cout << "WGU C867 Scripting and Programming - Applications  -- C++ -- ID:008698673 -- Duncan Gwin" << endl;

	// Create instance of roster class called classRoster

	Roster classRoster;

	// Add each student in studentData to classRoster

	for (int i = 0; i < Roster::NUM_STUDENTS; i++) {
		classRoster.index = i;
		classRoster.parse(studentData[i]);
	}

	// Print all students in classRoster

	classRoster.printAll();

	// Print Invalid E-mail Address 

	for (int i = 0; i < Roster::NUM_STUDENTS; i++) {
		string studentId = classRoster.classRosterArray[i]->GetStudentId();
		classRoster.printAverageDaysInCourse(studentId);
	}



	return 0;
}
