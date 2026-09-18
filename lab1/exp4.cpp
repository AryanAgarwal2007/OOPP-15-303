#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    // Method to set values via parameters
    void input(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    // Method to display time as hh:mm:ss
    void show()
    {
        cout << hh << ":" << mm << ":" << ss << "\n";
    }
};

int main()
{
    Time t1, t2;

    // Setting values for object 1
    t1.input(10, 30, 45);

    // Setting values for object 2
    t2.input(22, 15, 5);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}