#include <iostream>
using namespace std;

class OnlineOrder {
public:
    float productPrice;
    float deliveryCharge;

    float totalCost() {
        return productPrice + deliveryCharge;
    }
};

int main() {
    OnlineOrder o;
    o.productPrice = 1200;
    o.deliveryCharge = 100;

    cout << "Total Cost: " << o.totalCost() << " Tk";
    return 0;
}

