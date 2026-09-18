//write a program to take input for any student like name branch roll number and marks of 5 subjects . find out the total and percentage of marks with the help of modular programming


#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name, branch;
    int roll;
    int marks[5];
    int total;
    float percentage;
};

// Function to take input
void inputStudent(Student &s)
{
    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Branch: ";
    getline(cin, s.branch);

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Marks of 5 Subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
}

// Function to calculate total and percentage
void calculate(Student &s)
{
    s.total = 0;

    for (int i = 0; i < 5; i++)
    {
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;
}

// Function to display student details
void displayStudent(const Student &s)
{
    cout << "\n------ Student Details ------\n";
    cout << "Name       : " << s.name << endl;
    cout << "Branch     : " << s.branch << endl;
    cout << "Roll No.   : " << s.roll << endl;

    cout << "Marks      : ";
    for (int i = 0; i < 5; i++)
    {
        cout << s.marks[i] << " ";
    }

    cout << "\nTotal Marks: " << s.total << endl;
    cout << "Percentage : " << s.percentage << "%" << endl;
}

int main()
{
    Student s;

    inputStudent(s);
    calculate(s);
    displayStudent(s);

    return 0;
}