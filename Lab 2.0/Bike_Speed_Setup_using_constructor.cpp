#include <iostream>
using namespace std;

class Bike {
public:
    int speed;

    Bike() {
        speed = 20;
    }

    void show() {
        cout << "Initial Speed: " << speed << " km/h";
    }
};

int main() {
    Bike b;
    b.show();
    return 0;
}

