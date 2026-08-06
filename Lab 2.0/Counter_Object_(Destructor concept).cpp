#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        cout << "Object Created!" << endl;
    }

    ~Counter() {
        cout << "Object Destroyed!" << endl;
    }
};

int main() {
    Counter c1;
    {
        Counter c2;
    }
    cout << "Inside main end" << endl;
    return 0;
}

