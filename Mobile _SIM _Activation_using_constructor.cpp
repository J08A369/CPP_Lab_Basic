#include <iostream>
using namespace std;

class Sim {
public:
    int balance;

    Sim() {
        balance = 50;
    }

    void show() {
        cout << "Initial Balance: " << balance << " Tk";
    }
};

int main() {
    Sim s;
    s.show();
    return 0;
}

