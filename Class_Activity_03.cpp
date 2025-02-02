// Class_Activity_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Hello, im a program that evaluates your grade depending on your input. \n";
    cout << "So please input a grade: ";
    cin >> grade;
    if (grade > 90 )
    {
        cout << "Excellent, your grade is an A";
    }
    if (grade > 70 && grade < 89)
    {
        cout << "Good, your grade is a B";
    }
    if (grade > 60 && grade < 69 )
    {
        cout << "Pass, your grade is a C";
    }
    if (grade > 0 && grade < 60)
    {
        cout << "Pass, your grade is an F";
    }
}

