#include <iostream>
using namespace std;

class Coffee {
public:
    int cups;

    Coffee(int c) {
        cups = c;
    }
    void show() {
        cout << "Ordered Cups: " << cups;
    }
};

int main() {
    Coffee o(3);
    o.show();
    return 0;
}

