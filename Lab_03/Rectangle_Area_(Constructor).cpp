#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, w;

    Rectangle(int x, int y) {
        l = x;
        w = y;
    }

    int area() {
        return l * w;
    }
};

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.area();
    return 0;
}

