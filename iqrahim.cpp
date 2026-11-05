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
    task7("Student 6152", 52);

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
// Task 2 - Multiplication

// Multiplies two numbers and displays the answer.

// Personalisation: The digits of 6152 add up to 14.
// The second number is set to 2.

// Fix: Changed addition to multiplication.

void task2()
{
    int a = 14;
    int b = 2;

    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    cout << "Result: " << a * b << endl;
}
// Task 3 - Multiplication Table

// Uses a loop to display the table of a number.

// Personalisation: N is worked out using 6152 % 10 + 1.
// The calculated value of N is 3.

void task3()
{
    int N = (6152 % 10) + 1;

    for (int i = 1; i <= N; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}
// Task 4 - Even or Odd

// Checks whether a number is even or odd.

// Personalisation: Uses the full number 6152.

// Fix: Changed != to == to check for an even number.

void task4()
{
    int number = 6152;

    if (number % 2 == 0)
    {
        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is odd" << endl;
    }
}
// Task 5 - Month Selection

// Uses a switch statement to display a month name.

// Personalisation: The month number is calculated from 6152.
// The result is 9, which represents September.

void task5()
{
    int month = (6152 % 12) + 1;

    switch (month)
    {
        case 1:  cout << "January" << endl; break;
        case 2:  cout << "February" << endl; break;
        case 3:  cout << "March" << endl; break;
        case 4:  cout << "April" << endl; break;
        case 5:  cout << "May" << endl; break;
        case 6:  cout << "June" << endl; break;
        case 7:  cout << "July" << endl; break;
        case 8:  cout << "August" << endl; break;
        case 9:  cout << "September" << endl; break;
        case 10: cout << "October" << endl; break;
        case 11: cout << "November" << endl; break;
        case 12: cout << "December" << endl; break;

        default:
            cout << "Invalid month" << endl;
    }
}
// Task 6 - Working with Arrays

// Stores five values and displays the third one.

// Personalisation: The third array value is the last digit of 6152 (2).

void task6()
{
    int numbers[5] = {10, 20, 2, 40, 50};

    // Index 2 refers to the third element.
    cout << "Third value = " << numbers[2] << endl;
}
// Task 7 - Function Parameters

// Receives a name and marks, then displays both.

// // Personalisation: Uses the student label and the last two digits of 6152 (52).

void task7(string name, int marks)
{
    cout << "Hello, welcome " << name << endl;
    cout << "Your marks are " << marks << endl;
}
// Task 8 - Static Counter

// Shows the personalisation number and counts function calls.

// Personalisation: Displays 6152 on each call.

// Fix: Added static so the counter keeps its value.

void task8()
{
    static int count = 0;

    count++;

    cout << "My personalisation number is 6152" << endl;
    cout << "Total function calls: " << count << endl;
}
// Task 9 - Calculate Average

// Reads marks until -1 is entered and calculates their average.

// Negative marks are ignored, and invalid text is handled.

// Fix 1: Only valid marks are added to the total.
// Fix 2: Only valid marks are counted.
// Fix 3: Returns 0.0 when no valid marks are entered.
// Fix 4: Uses double division for an accurate average.
// Fix 5: Handles letters or other invalid input.

double computeAverage()
{
    int total = 0;
    int marks = 0;
    int count = 0;

    do
    {
        cin >> marks;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Please enter a number:" << endl;
            marks = 0;
        }
        else if (marks >= 0)
        {
            total = total + marks;
            count++;
        }

    } while (marks != -1);

    if (count == 0)
    {
        return 0.0;
    }

    return static_cast<double>(total) / count;
}

void task9()
{
    cout << "Enter marks (enter -1 to stop):" << endl;

    double average = computeAverage();

    cout << "The average of the marks is: " << average << endl;
}
// Task 10 - Variable Scope

// Shows how global, static and local variables behave.

// Personalisation: All three variables start from 6152.

void showVariables()
{
    static int staticCount = 6152;
    int localCount = 6152;

    globalCount++;
    staticCount++;
    localCount++;

    cout << "Global: " << globalCount << endl;
    cout << "Static: " << staticCount << endl;
    cout << "Local: " << localCount << endl;

    cout << endl;
}

void task10()
{
    // Calls the function three times.
    for (int i = 0; i < 3; i++)
    {
        showVariables();
    }
}
