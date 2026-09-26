// Input and show function outside class as inline function

#include <iostream>
using namespace std;

class Number
{
    int x, y;

public:
    inline void input();
    inline void show();
};

inline void Number::input()
{
    cout << "Enter two values: ";
    cin >> x >> y;
}

inline void Number::show()
{
    cout << "x = " << x << endl;
    cout << "y = " << y ;
}

int main()
{
    Number n;

    n.input();
    n.show();

    return 0;
}