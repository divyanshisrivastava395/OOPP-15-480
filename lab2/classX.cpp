#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    Complex(int a = 0, int b = 0): x{a}, y{b} {}
    void show()
    {
        cout << x << "," << y << endl;
    }
    Complex operator+(Complex c){
        int r=x+c.x;
int  i=y+c.y;

   }
};

int main()
{
Complex c1{3,4},c2{12,23},c3;
// c3=c1+c2;
c1.show();
c2.show();
c3.show();
    return 0;
}