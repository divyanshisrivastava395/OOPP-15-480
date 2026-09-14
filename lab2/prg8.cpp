// Parameter Passing Techniques

#include <iostream>
using namespace std;

void callByValue(float sal) {
    sal = sal + (sal * 0.10);
    cout << "Inside Call by Value: " << sal << endl;
}

void callByReference(float &sal) {
    sal = sal + (sal * 0.10);
    cout << "Inside Call by Reference: " << sal << endl;
}

void callByAddress(float *sal) {
    *sal = *sal+ (*sal * 0.10);
    cout << "Inside Call by Address: " << *sal<< endl;
}

int main() {
    float salary1 = 50000;
    float salary2 = 50000;
    float salary3 = 50000;

    callByValue(salary1);
    callByReference(salary2);
    callByAddress(&salary3);

    cout << "\nAfter Function Call:" << endl;
    cout << "Call by Value: " << salary1 << endl;
    cout << "Call by Reference: " << salary2 << endl;
    cout << "Call by Address: " << salary3 << endl;

    return 0;
}