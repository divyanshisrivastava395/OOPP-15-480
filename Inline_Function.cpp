// 3. Inline Function, Default Arguments & Function Overloading

#include <iostream>
using namespace std;

// Inline Function
inline int square(int n)
{
    return n * n;
}

// Function with Default Arguments
int add(int a, int b = 10)
{
    return a + b;
}

// Function Overloading
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Inline Function
    cout << "\nSquare of " << num << " = " << square(num) << endl;

    // Default Arguments
    cout << "\nUsing Default Argument:" << endl;
    cout << "add(" << num << ") = " << add(num) << endl;
    cout << "add(" << num << ", 20) = " << add(num, 20) << endl;

    // Function Overloading
    cout << "\nFunction Overloading:" << endl;
    cout << "multiply(4, 5) = " << multiply(4, 5) << endl;
    cout << "multiply(2.5, 3.2) = " << multiply(2.5, 3.2) << endl;
    cout << "multiply(2, 3, 4) = " << multiply(2, 3, 4) << endl;

    return 0;
}