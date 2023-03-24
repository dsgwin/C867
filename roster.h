#include <string>
#include <iostream>
#define ROSTER_H
#include "student.h"
using namespace std;


class Roster {

    public:
		// Index for creating student objects

		int index;

	    // Declare constant value for size of the array

	    static const int NUM_STUDENTS = 5;

	    // Declare an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

	    Student* classRosterArray[NUM_STUDENTS];

		// Default Contstructor

		Roster();

		// Declare parse() function to reformat studentDataTable strings and convert them to student objects

		void parse(string studentDataString);

	    // Declare Add function that sets the instance variables from part D1 and updates the roster
		
	    void add(int index, string studentID, string firstName, string lastName, string emailAddress, int age, 
			int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

		// Declare remove function that removes students from the roster by student ID. 
		// If the student ID does not exist, the function prints an error message indicating that the student was not found.

		void remove(string studentId);

		// Declare printAll() function

		void printAll(); 

		// Declare printAverageDaysInCourse() function

		void printAverageDaysInCourse(string studentId);

		// Declare printInvalidEmails() function

		void printInvalidEmails();

		// Declare printByDegreeProgram() function

		void printByDegreeProgram(DegreeProgram degree);

		// Declare Destructor

		~Roster();


	

};