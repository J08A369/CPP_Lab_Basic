#include <iostream>
using namespace std;

class MobileShop {
public:
    float price;
    float discount;
    float finalPrice() {
        return price - (price * discount / 100);
    }
};

int main() {
    MobileShop m;
    m.price = 20000;
    m.discount = 10;

    cout << "Final Price: " << m.finalPrice() << " Tk";
    return 0;
}

