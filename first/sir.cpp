#include <iostream>
#include <string>
using namespace std;

// Function to take input
void input(string &name, string &branch, string &section, int &roll, int marks[])
{
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Section: ";
    getline(cin, section);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 5 Subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Function to calculate total and percentage
void findSum(int marks[], int &sum, float &percent)
{
    sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    percent = sum / 5.0;
}

// Function to display details
void show(string name, string branch, string section,
          int roll, int marks[], int sum, float percent)
{
    cout << "\n--------- Student Details ---------\n";
    cout << "Name       : " << name << endl;
    cout << "Branch     : " << branch << endl;
    cout << "Section    : " << section << endl;
    cout << "Roll No.   : " << roll << endl;

    cout << "Marks      : ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\nTotal Marks: " << sum << endl;
    cout << "Percentage : " << percent << "%" << endl;
}

int main()
{
    string name, branch, section;
    int roll, marks[5];
    int sum;
    float percent;

    input(name, branch, section, roll, marks);
    findSum(marks, sum, percent);
    show(name, branch, section, roll, marks, sum, percent);

    return 0;
}