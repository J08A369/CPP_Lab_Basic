#include <iostream>
using namespace std;

class FlowerShop {

public:
    int price;

    FlowerShop() {
        cout << "Flower Shop Opened" << endl;
    }

    void flower() {
        cout << "Rose Available" << endl;
    }

    void flower(string type) {
        cout << "Flower Type: " << type << endl;
    }

    FlowerShop operator + (FlowerShop f) {

        FlowerShop temp;

        temp.price = price + f.price;

        return temp;
    }

    ~FlowerShop() {
        cout << "Flower Shop Closed" << endl;
    }
};

int main() {

    FlowerShop f1, f2;

    f1.price = 200;
    f2.price = 300;

    f1.flower();
    f1.flower("Tulip");

    FlowerShop f3 = f1 + f2;

    cout << "Total Price: " << f3.price << endl;

    FlowerShop *f = new FlowerShop();

    delete f;

    return 0;
}
