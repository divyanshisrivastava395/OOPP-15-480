//5- Design a class to represent a bank account with proper data hiding and member functions for deposit
// and withdrawal operations.

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string holderName;
    double balance;

public:
    // Function to input account details
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit Function
    void deposit(double amount)
    {
        balance += amount;
        cout << "Rs. " << amount << " deposited successfully." << endl;
    }

    // Withdraw Function
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display Account Details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Holder Name    : " << holderName << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    double amount;

    account.createAccount();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}