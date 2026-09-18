#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    int age;
    string course;
    float marks;

public:
    void inputDetails() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void calculateGrade() {
        cout << "Grade: ";
        if (marks >= 90)
            cout << "A";
        else if (marks >= 75)
            cout << "B";
        else if (marks >= 60)
            cout << "C";
        else if (marks >= 50)
            cout << "D";
        else
            cout << "F";
        cout << endl;
    }

    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        calculateGrade();
    }

    void updateDetails() {
        cout << "\nEnter New Course: ";
        cin.ignore();
        getline(cin, course);

        cout << "Enter New Marks: ";
        cin >> marks;
    }
};

int main() {
    Student s;

    s.inputDetails();
    s.displayDetails();

    cout << "\nUpdating Student Record...\n";
    s.updateDetails();

    cout << "\nUpdated Record:\n";
    s.displayDetails();

    return 0;
}