// Store details of any two students

#include <iostream>
using namespace std;

class Student {
public:
    string name, branch;
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }

    void show() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main() {
    Student s1, s2, s3;

    cout << "Enter details of Student 1\n";
    s1.input();

    cout << "\nEnter details of Student 2\n";
    s2.input();

    cout << "\nStudent 1 Details";
    s1.show();

    cout << "\nStudent 2 Details";
    s2.show();

    return 0;
}