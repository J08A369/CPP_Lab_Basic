#include <iostream>
using namespace std;

class Rectangle
{
    double length;
    double width;

public:
    Rectangle() {}
    Rectangle(double length, double width);
    ~Rectangle();
    void set_rectangle(double length, double width);
    double calculateArea();
    double calculatePerimeter();
};

int main()
{
    Rectangle rect(10,5);

    cout << rect.calculateArea() << endl;

    cout << rect.calculatePerimeter() << endl;
}

double Rectangle::calculatePerimeter()
{
    return 2 * (this->length + this->width);
}

double Rectangle::calculateArea()
{
    return this->length * this->width;
}

void Rectangle::set_rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}
