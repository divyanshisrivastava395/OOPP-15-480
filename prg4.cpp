#include<iostream>
using namespace std;

class BankAccount{
    private:
    int amt=27000;
string pin ,name;
public:
   void show(){
    cout<<"Balance: "<<amt<<endl;

   } 
void withdraw(int rs){
amt-=rs;

}
void deposit(int rs){
amt+=rs;
}

};
int main(){
    BankAccount a,b,c;;
    a.deposit(25000);
    b.withdraw(10000);
    a.show();
    b.show();
   return 0;
    
}