// Inline functions, default arguments and function overloading

#include <iostream>
using namespace std;

class Calculator
{
public:

    inline int add(int a, int b = 0)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int multiply(int a, int b = 1)
    {
        return a * b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition = " << c.add(10, 20) << endl;
    cout << "Addition with default argument = " << c.add(10) << endl;

    cout << "Multiplication = " << c.multiply(5, 4) << endl;
    cout << "Multiplication with default argument = " << c.multiply(5) << endl;

    cout << "Double addition = " << c.add(2.5, 3.5) << endl;
    cout << "Double multiplication = " << c.multiply(2.5, 4.0) << endl;

    return 0;
}