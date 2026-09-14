// Student Record System using Class and Objects

#include <iostream>
using namespace std;

class Student {
    string name, branch;
    int roll;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].input();
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1;
        s[i].display();
    }

    return 0;
}