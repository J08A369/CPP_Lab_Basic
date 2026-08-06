#include <iostream>
using namespace std;

class Circle {
public:
    float r;

    float area() {
        return 3.1416 * r * r;
    }
};

int main() {
    Circle c;
    c.r = 7;

    cout << "Area: " << c.area();
    return 0;
}

