#include<iostream>
using namespace std;

class BankAccount{
    private:
    int amt=0;
string pin ,name;
public:
   void show(){

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
    a.amt=0;
    a.name="Ravi";
cout<<c.amt<<endl;
    
}