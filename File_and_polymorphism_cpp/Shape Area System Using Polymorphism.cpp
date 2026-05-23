#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area Calculation" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        int length = 5;
        int width = 4;

        cout << "Rectangle Area: "
             << length * width << endl;
    }
};

int main() {

    Shape *s;
    Rectangle r;

    s = &r;

    s->area();

    return 0;
}
