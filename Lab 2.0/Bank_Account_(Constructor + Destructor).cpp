#include <iostream>
using namespace std;

class Bank {
public:
    float balance;

    Bank() {
        balance = 1000;
        cout << "Account opened!" << endl;
    }

    ~Bank() {
        cout << "Account closed!" << endl;
    }

    void show() {
        cout << "Balance: " << balance << " Tk" << endl;
    }
};

int main() {
    Bank b;
    b.show();
    return 0;
}

