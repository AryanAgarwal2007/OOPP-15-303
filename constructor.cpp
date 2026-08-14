#include <iostream>
using namespace std;

class Pointer
{
private:
    int x;
    int y;

public:
    // Constructor
    Pointer(int a, int b)
    {
        x = a;
        y = b;
    }

    // Function to display values
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Pointer p(10, 20);

    p.display();

    return 0;
}