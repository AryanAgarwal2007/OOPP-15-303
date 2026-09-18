#include <iostream>
using namespace std;

class comp
{
    int real, img;

public:
    comp(int x = 0, int i = 0) : real{x}, img{i}
    {
    }

    void show()
    {
        cout << real << " , " << img << endl;
    }
};

int main()
{
    comp c1(5, 10);
    comp c2;
   // comp c3 = c1 + c2;   ERROR
    c1.show();
    c2.show();
   // c3.show();
}