#include <iostream>
using namespace std;

//++ OPERATOR

class point
{
    int x, y;

public:
    point(int x = 0, int y = 0) : x{x}, y{y} {}
    void show()
    {
        cout << x << "," << y << endl;
    }
    friend point operator++(point &p, int);
     point operator+(int n)
    {
        return point (x+n,y+n);
    }
};

int main()
{
    point p1(10, 5);
    point p2=p1+4;
    p2.show();

}