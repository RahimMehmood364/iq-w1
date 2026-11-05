// 6152filebackup.cpp : This file contains the 'main' function. Program execution begins and ends there.

// personalisation number: 6152

#include <iostream>
#include <string>
using namespace std;

int globalCount = 6152;


// function declaration
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7(string name, int marks);
void task8();
void task9();
double computeAverage();
void task10();


// main function
int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7("Rahim", 52);

    cout << "\nTask 8: Static Local Variables" << endl;
    task8();
    task8();
    task8();
    task8();
    task8();

    task9();

    task10();
    task10();

    return 0;
}
// Task 1 - Integer Variables and Display

// Stores two integer values and displays their total.

// Personalisation: Takes the second digit (1) and final digit (2)
// from the number 6152.

// Error 1: The program uses fixed values instead of asking the user.

void task1()
{
    int a = 1;
    int b = 2;

    cout << "Variables and Output" << endl;
    cout << "Sum: " << a + b << endl;
}
