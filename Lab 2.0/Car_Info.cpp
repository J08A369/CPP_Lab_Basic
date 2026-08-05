
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h";
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.speed = 120;

    c1.show();
    return 0;
}
