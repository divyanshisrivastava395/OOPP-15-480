//7- implement a program using static members and friend functions to illustrate shared data and
// controlled access.

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

    // Static data member
    static int count;

public:
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
        count++;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }

    // Friend function
    friend void display(Student s);
};

// Definition of static data member
int Student::count = 0;

// Friend function
void display(Student s)
{
    // Can access private members
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1(101, 85);
    Student s2(102, 90);
    Student s3(103, 88);

    cout << "Student 1:" << endl;
    display(s1);

    cout << "\nStudent 2:" << endl;
    display(s2);

    cout << "\nStudent 3:" << endl;
    display(s3);

    cout << endl;

    Student::showCount();

    return 0;
}