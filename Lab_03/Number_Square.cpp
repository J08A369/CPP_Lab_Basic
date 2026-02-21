#include <iostream>
using namespace std;

class Number {
public:
    int n;

    int square() {
        return n * n;
    }
};

int main() {
    Number num;
    num.n = 8;

    cout << "Square: " << num.square();
    return 0;
}

