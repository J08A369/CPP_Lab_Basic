#include <iostream>
using namespace std;

class MobileShop {

public:
    int price;

    MobileShop() {
        cout << "Mobile Shop Opened" << endl;
    }

    void mobile() {
        cout << "Android Phone" << endl;
    }

    void mobile(string brand) {
        cout << "Brand: " << brand << endl;
    }

    MobileShop operator + (MobileShop m) {

        MobileShop temp;

        temp.price = price + m.price;

        return temp;
    }

    ~MobileShop() {
        cout << "Mobile Shop Closed" << endl;
    }
};

int main() {

    MobileShop m1, m2;

    m1.price = 20000;
    m2.price = 30000;

    m1.mobile();
    m1.mobile("Samsung");

    MobileShop m3 = m1 + m2;

    cout << "Total Price: " << m3.price << endl;

    MobileShop *m = new MobileShop();

    delete m;

    return 0;
}
