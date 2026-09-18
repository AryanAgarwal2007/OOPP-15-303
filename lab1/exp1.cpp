#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    string branch;
};

int main()
{
    Student s[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll No: ";
        cin >> s[i].roll;
        cout << "Branch: ";
        cin >> s[i].branch;
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << s[i].name << "\n";
        cout << "Roll No: " << s[i].roll << "\n";
        cout << "Branch: " << s[i].branch << "\n";
    }

    return 0;
}