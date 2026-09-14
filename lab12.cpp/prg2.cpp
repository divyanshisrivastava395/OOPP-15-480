#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x = 0, int y = 0) : x{x}, y{y} {}
    void show()
    {
        cout << x << "," << y << endl;
    }
    // Friend Function Operator

    point operator+(point p1){
        return point(p1.x + x, p1.y +y);
    }
    point operator+(int a){
        return point(a+ x, a*2 +y);
    }
};


int main()
{
    point p1(10, 5);
    point p2(-1, 6);
    p1.show();
    p2.show();
    p1 = p1 + p2;// IF WE PRINT SIMPLY P3 THEN NOT PRINT THATS WHY WE CREATE FRIEND FUNCTION FOR OVERLOAD
    p1.show();
    p2 = p1+5;
}



