// Class Time having hh, mm and ss

#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1, t2;
    int h, m, s;

    cout << "Enter time for object 1: ";
    cin >> h >> m >> s;
    t1.input(h, m, s);

    cout << "Enter time for object 2: ";
    cin >> h >> m >> s;
    t2.input(h, m, s);

    cout << "\nTime 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}