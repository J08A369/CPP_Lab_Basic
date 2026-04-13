
#include <iostream>
using namespace std;

class BankAccount
{
    int account_number;
    string account_name;
    double balance;

public:
    BankAccount() {}
    BankAccount(int num, string name, double b);
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo();
};

int main()
{
    BankAccount account(1, "Prerona", 500);
    account.displayAccountInfo();
    account.deposit(50000);
    account.withdraw(100);
    account.displayAccountInfo();
    account.deposit(4900);
    account.displayAccountInfo();
    return 0;
}

void BankAccount::deposit(double amount)
{
    this->balance += amount;
    cout << "Transaction successful! Your current balance is: " << this->balance << endl;
}

void BankAccount::withdraw(double amount)
{
    if (amount > this->balance)
    {
        cout << "ERROR: insufficient balance!" << endl;
    }
    else
    {
        this->balance -= amount;
        cout << "Transaction successful! Your current balance is: " << this->balance << endl;
    }
}

BankAccount::BankAccount(int num, string name, double b)
{
    this->account_name = name;
    this->account_number = num;
    this->balance = b;
}

void BankAccount::displayAccountInfo()
{
    cout << this->account_number << endl;
    cout << this->account_name << endl;
    cout << this->balance << endl;
}
