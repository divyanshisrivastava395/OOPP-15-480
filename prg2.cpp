#include<iostream>
using namespace std;
void show(int x,int y){
    cout<<"x: "<<x<<"y; "<<y<<endl;
}
void swapbyvalue(int a , int b){

    int temp = a;
    a = b;
    b = temp;

    cout<<"Enter the Value of a: "<<a
    <<"\nEnter the Value of b: "<<b;


}
void swapbyAdd(int *a,int *b){
int temp= *a;
*a=*b;
*b= temp;

}
void swapbyReference(int &x,int &y){
     int temp = x;
    x = y;
    y = temp;
}

int main(){
int x = 2 ;
int y = 3;
show(x,y);
swapbyvalue(x,y);
show(x,y);
swapbyAdd(&x, &y);
show(x,y);
swapbyReference(x,y);
show(x,y);
    return 0;
}