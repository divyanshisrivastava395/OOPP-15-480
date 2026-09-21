#include <iostream>
using namespace std;

void updateReference(float &salary) {
    salary = salary + (salary * 0.10);
}

void updatePointer(float *salary) {
    *salary = *salary + (*salary * 0.10);
}

int main() {
    float salary1 = 50000;
    float salary2 = 50000;

    updateReference(salary1);
    updatePointer(&salary2);

    cout << "Salary using reference: " << salary1 << endl;
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}