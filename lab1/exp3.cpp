#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Method to take input for x and y
    void input()
    {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }

    // Method to display x and y
    void show()
    {
        cout << "Point: (" << x << ", " << y << ")\n";
    }
};

int main()
{
    Point p1, p2;

    cout << "Enter details for Point 1:\n";
    p1.input();

    cout << "\nEnter details for Point 2:\n";
    p2.input();

    cout << "\n--- Point Values ---\n";
    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}