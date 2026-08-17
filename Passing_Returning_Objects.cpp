//8- Write a program to pass objects as arguments and return objects from functions to perform
// operations on user-defined data.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function that receives objects as arguments
    // and returns an object
    Complex add(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(5, 15);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Passing object c2 as argument
    // and receiving returned object
    Complex c3 = c1.add(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}