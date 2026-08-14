#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() : x{0}, y{0} {}

    // Parameterized constructor
    Point(int p, int q) : x{p}, y{q} {}

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);

    p1.display();
    p2.display();

    return 0;
}