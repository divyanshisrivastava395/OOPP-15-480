#include <iostream>
using namespace std;

 class Complex
 {
    private:
    int real,img;
    public:
    void input(){
       cin>>real>>img;
    }
    void show(){
        cout<<real;
        if(img>=0){
            cout<<"+"<<img<<"i"<<endl;
        }
        else{
            cout<<img<<"i"<<endl;
        }
    }
    void add(int a,int b){
      real+=a;
      img+=b;
    }
    void add(Complex p){
         p.show();
    }
    void Add(Complex p,Complex q){
        real=p.real+q.real;
        img=p.img+q.img;
    }
    Complex Add(int a,int b){
        Complex m;
        m.real=real+5;
        m.img=img+10;
return m;
    }
 };
 int main(){
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(2,10);
    c1.show();
    c3.Add(c1,c2);
    c3.show();
    Complex q=c1.Add(5,10);
    q.show();
    c1.show();

   
 }



