//6- Develop a program to demonstrate different types of constructors and destructor behavior in object
// lifecycle management.


#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name    : " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    // Default Constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized Constructor
    Student s2(101, "Divyanshi");
    s2.display();

    cout << endl;

    // Copy Constructor
    Student s3 = s2;
    s3.display();

    return 0;
}