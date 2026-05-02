#include <iostream>
using namespace std;

class BurgerShop {

public:
    int bill;

    BurgerShop() {
        cout << "Burger Shop Opened" << endl;
    }

    void burger() {
        cout << "Chicken Burger" << endl;
    }

    void burger(string size) {
        cout << "Burger Size: " << size << endl;
    }

    BurgerShop operator + (BurgerShop b) {

        BurgerShop temp;

        temp.bill = bill + b.bill;

        return temp;
    }

    ~BurgerShop() {
        cout << "Burger Shop Closed" << endl;
    }
};

int main() {

    BurgerShop b1, b2;

    b1.bill = 300;
    b2.bill = 400;

    b1.burger();
    b1.burger("Large");

    BurgerShop b3 = b1 + b2;

    cout << "Total Bill: " << b3.bill << endl;

    BurgerShop *b = new BurgerShop();

    delete b;

    return 0;
}
