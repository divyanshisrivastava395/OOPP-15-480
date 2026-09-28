#include <iostream>
#include <vector>
using namespace std;
class item
{
    string name;
    int quantity;
    double price;

public:
    item(string n, int q, double p) : name{n}, quantity{q}, price{p} {}
    void display()
    {
        cout << name << "," << quantity << "," << price << "," << "total:" << calculation() << endl;
    }
    int calculation()
    {
        double amount = quantity * price;
        return amount;
    }
};

int main()
{
    vector<item> cart;
    double grandTotal = 0;
    cart.push_back(item("Notebook", 5, 55));
    cart.push_back(item("Gel Pen", 15, 25));
    cart.push_back(item("Ebook", 2, 325));

    for (auto i : cart)
    {
        grandTotal += i.calculation();
        i.display();
    }
    cout << "You have to pay:" << grandTotal << endl;
    double x;
    for (auto i : cart)
    {
        if (i.calculation() > 1000)
        {
            x = (i.calculation() * 100) / 1000;
            i.display();
        }
        
    }
    cout << "Discount of this amount:" << x << endl;
}