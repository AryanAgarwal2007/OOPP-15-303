#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    // Constructor
    Student() : roll(0) {}

    // Method to take input
    void inputDetails()
    {
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Roll No: ";
        cin >> roll;
        cout << "Branch: ";
        cin >> branch;
    }

    // Method to display details
    void displayDetails() const
    {
        cout << "\nName: " << name
             << "\nRoll No: " << roll
             << "\nBranch: " << branch << "\n";
    }

    // Getter (useful for searching/sorting later)
    int getRoll() const { return roll; }
    string getName() const { return name; }
};

class StudentRecordSystem
{
private:
    vector<Student> students;

public:
    void addStudent()
    {
        Student s;
        cout << "\nEnter details of student " << students.size() + 1 << ":\n";
        s.inputDetails();
        students.push_back(s);
    }

    void showAll() const
    {
        cout << "\n--- All Student Records ---\n";
        for (size_t i = 0; i < students.size(); i++)
        {
            cout << "\nStudent " << i + 1 << ":";
            students[i].displayDetails();
        }
    }

    int count() const
    {
        return students.size();
    }
};

int main()
{
    StudentRecordSystem system;
    int n;

    cout << "How many students to add? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        system.addStudent();
    }

    system.showAll();

    return 0;
}