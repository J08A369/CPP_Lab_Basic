#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

    void showBalance() {
        cout << "Balance: " << balance << " Tk";
    }
};

int main() {
    BankAccount b;
    b.balance = 5000;

    b.showBalance();
    return 0;
}

