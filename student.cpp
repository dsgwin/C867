#include <string>
#include <iostream>
#include "student.h"
using namespace std;

// Default constructor
Student::Student() {
	firstName = "NoName";
}

void Student::SetFirstName(string name) {
	firstName = name;
}

string Student::GetFirstName() {
	return firstName;
}