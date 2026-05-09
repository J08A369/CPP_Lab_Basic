#include <iostream>
using namespace std;

class CoffeeShop {

public:
    int price;

    CoffeeShop() {
        cout << "Constructor Called" << endl;
    }

    void coffee() {
        cout << "Hot Coffee" << endl;
    }

    void coffee(string type) {
        cout << type << endl;
    }

    CoffeeShop operator + (CoffeeShop c) {

        CoffeeShop temp;

        temp.price = price + c.price;

        return temp;
    }

    ~CoffeeShop() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    CoffeeShop c1, c2;

    c1.price = 100;
    c2.price = 200;

    c1.coffee();
    c1.coffee("Cold Coffee");

    CoffeeShop c3 = c1 + c2;

    cout << "Total Price: " << c3.price << endl;

    CoffeeShop *c = new CoffeeShop();

    delete c;

    return 0;
}
