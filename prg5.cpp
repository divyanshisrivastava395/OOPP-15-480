#include<iostream>
using namespace std;

class point{
    private:
int x;
int y;
public:
//  point():x{0},y{0}{
//     cout<<"Default Constructor"<<endl;
//  }
point(int p=0,int q=0):x{p},y{q}{
    cout<<"Parametrized constructor"<<endl;
}
 point add(point q){
//     point r;
//     r.x=x+q.x;
//     r.y=y+q.y;
//     return r;
return point(x+q.x,y+q.y);//Nameless object creation
  }
  void add(point p,point q){
  x=p.x+q.x;
  y=p.y+q.y;// if = then return otherwise no return
  }
 void show(){
cout<<"x: "<<x<<" y: "<<y<<endl;
 }


};
int main(){
    point p(50,90),q(20,30),r;
    // p.show();
    // q.show();
    // // point r=p.add(q);
    // r.show();
    // r.add(p,q);
     r=q;
    r.show();
    q.show();
    return 0;
}