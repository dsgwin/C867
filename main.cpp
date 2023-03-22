// Duncan Gwin - C867.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
using namespace std;

int main()
{
	Student Duncan;

	cout << Duncan.GetFirstName() << endl;

	Duncan.SetFirstName("Duncan");

	cout << Duncan.GetFirstName() << endl;

	return 0;
}
