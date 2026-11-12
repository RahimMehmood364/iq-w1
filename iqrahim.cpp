//  This file contains the main function and Program starts and runs from the main function

// personalisation number: 6152
/*
E1 task 2 - used + instead of *
   fix: Changed + to * to get 28.

E2 Task 4 - used the Wrong EVEN or ODD condition.
   Fix: Changed != to ==.

E3 Task 7 - Used the wrong student name
   Fix: Changed it to "Student 6152".

E4 task 8 Counter kept resetting
   Fix: Added static and thats how problem was fixed
*/

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
// Task 1 Stores two numbers and displays their Total and personalization uses 1 and 2 from 6152
// No user input needed
void task1()
{
    int a = 1;
    int b = 2;

    cout << "Variables and Output" << endl;
    cout << "Sum: " << a + b << endl;
}
// Task 2 multiplies two numbers and displays the answer
// personalisation Uses 14 and 2 from 6152.

// Fix: Changed addition to multiplication.

void task2()
{
    int a = 14;
    int b = 2;

    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    cout << "Result: " << a * b << endl;
}
// Task 3 displays a multiplication table
// Personalisation: N is 3

void task3()
{
    int N = (6152 % 10) + 1;

    for (int i = 1; i <= N; i++)
    {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}
// Task 4 checks if a number is even or odd and personalization uses 6152
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
// Task 5 displays a month name using switch
// Personalisation: Uses 9 for September

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
// Task 6  Working with arrays

//  it Stores five values and displays the third one

// Personalisation The third array value is the last digit of 6152 which is 2

void task6()
{
    int numbers[5] = {10, 20, 2, 40, 50};

    
    cout << "Third value = " << numbers[2] << endl;
}
// Task 7 - Function Parameters

// receives a name and marks and then displays both

// Personalisation: uses the student label and the last two digits of 6152 which are 52

void task7(string name, int marks)
{
    cout << "Hello, welcome " << name << endl;
    cout << "Your marks are " << marks << endl;
}
// Task 8 Static Counter

// it displays 6152 and counts function calls
// Fixation was done by adding static to remember the count

void task8()
{
    static int count = 0;

    count++;

    cout << "My personalisation number is 6152" << endl;
    cout << "Total function calls: " << count << endl;
}
// Task 9 calculates the average of marks.
//  it stops when -1 u enter and ignores negative marks
// Invalid text is handled and asked againn
// tests cover empty Input valid marks negative marks and letters

double computeAverage()
{
    int total = 0;
    int marks = 0;
    int count = 0;

    do
    {
        cin >> marks;

        // Bug 5: Typing letters made cin fail and the loop never stopped.
        // Fix: Clear the error, remove the bad input and ask again.
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Please enter a number:" << endl;
            marks = 0;
        }
        else if (marks >= 0)
        {
            // Bug 1 was Negative marks and -1 were added to the total.
            // Fix: Only add marks that are 0 or more
            total = total + marks;

            // Bug 2  negative marks and -1 were counted.
            // Fix: only count valid marks.
            count++;
        }

    } while (marks != -1);

    // Bug 3: division by zero
// Fix: Return 0.0 if no marks are entered
    if (count == 0)
    {
        return 0.0;
    }

  // Bug 4: lost decimal part
// Fix: used double for division
    return static_cast<double>(total) / count;
}

void task9()
{
    cout << "Enter marks (enter -1 to stop):" << endl;

    double average = computeAverage();

    cout << "The average of the marks is: " << average << endl;
}
// Task 10 it us  shows global static and Local Variables.
// Personalisation all start at 6152

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
    
    for (int i = 0; i < 3; i++)
    {
        showVariables();
    }
}

