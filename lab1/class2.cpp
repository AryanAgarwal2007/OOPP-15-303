#include <iostream>
using namespace std;

class comp
{
private:
    int real, img;

public:
    comp(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    comp operator+(comp c)
    {
        int r = this->real + c.real;
        int i = this->img + c.img;
        return comp(r, i);
    }

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    comp c1(5, 10);
    comp c2;
    comp c3 = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}