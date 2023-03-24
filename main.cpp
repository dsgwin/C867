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


int main()
{
	for (int i = 0; i < 5; i++) {
		parse(studentData[i]);
		// cout << studentData[i] << endl;
	}


	return 0;
}
