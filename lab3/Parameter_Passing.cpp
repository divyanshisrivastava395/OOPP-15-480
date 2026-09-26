// Input and show function defined outside the class

#include <iostream>
using namespace std;

class Number
{
    int x, y;

public:
    void input();
    void show();
};

void Number::input()
{
    cout << "Enter two values: ";
    if (!(cin >> x >> y))
    {
        x = 0;
        y = 0;
    }
}

void Number::show()
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