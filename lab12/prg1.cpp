#include <iostream>
using namespace std;

// class point{
// int x,y;
//     public:

// point(int x = 0, int y = 0) : x{x}, y{y} {}

//     friend void operator<<(ostream &os,point p);
//     point operator+(point t){
//         return point(x+t.x,y+t.y);
//     }
// };
// void operator<<(ostream&os,point t){
//        cout << t.x << "," << t.y << endl;
// }
// int main(){
//     point p1(10, 5);
//     point p2(-1, 6);
//  point p3 = p1 + p2;
//     cout<<p1;
//    cout<<p2;
//      cout<<p3;
// }

// METHOD CHAINING OPERATOR(DON'T PRINT IN ONE LINE THAT'S WHY USE)

// class point{
// int x,y;
//     public:

// point(int x = 0, int y = 0) : x{x}, y{y} {}

//     friend ostream &operator<<(ostream &os,point p);
//     point operator+(point t){
//         return point(x+t.x,y+t.y);
//     }
// };
// ostream &operator<<(ostream&os,point t){
//        cout << t.x << "," << t.y << endl;
//        return os;// we r not return point class so that we don't use this pointer we return cout that's why returning os
// }
// int main(){
//     point p1(10, 5);
//     point p2(-1, 6);
//  point p3 = p1 + p2;
//     cout<<p1<<p2<<p3;//method chaining

// }

