#include <iostream>
using namespace std;

class Box {
public:
    int l, w, h;

    int volume() {
        return l * w * h;
    }
};

int main() {
    Box b;
    b.l = 4;
    b.w = 5;
    b.h = 6;

    cout << "Volume: " << b.volume();
    return 0;
}

