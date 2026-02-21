#include <iostream>
using namespace std;

class Restaurant {
public:
    float price;
    int quantity;

    float totalBill() {
        return price * quantity;
    }
};

int main() {
    Restaurant order;
    order.price = 180;
    order.quantity = 3;

    cout << "Total Bill: " << order.totalBill() << " Tk";
    return 0;
}

