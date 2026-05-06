#include <iostream>
using namespace std;

class CoffeeShop {

public:
    int totalPrice;

    CoffeeShop() {
        cout << "Coffee Shop Opened" << endl;
    }

    void coffee() {
        cout << "Hot Coffee Available" << endl;
    }

    void coffee(string type) {
        cout << "Coffee Type: " << type << endl;
    }

    CoffeeShop operator + (CoffeeShop c) {

        CoffeeShop temp;

        temp.totalPrice = totalPrice + c.totalPrice;

        return temp;
    }

    ~CoffeeShop() {
        cout << "Coffee Shop Closed" << endl;
    }
};

int main() {

    CoffeeShop c1, c2;

    c1.totalPrice = 150;
    c2.totalPrice = 250;

    c1.coffee();
    c1.coffee("Cold Coffee");

    CoffeeShop c3 = c1 + c2;

    cout << "Total Price: " << c3.totalPrice << endl;

    CoffeeShop *c = new CoffeeShop();

    delete c;

    return 0;
}
