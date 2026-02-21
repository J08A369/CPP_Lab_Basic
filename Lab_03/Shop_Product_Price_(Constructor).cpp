#include <iostream>
using namespace std;

class Product {
public:
    float price;

    Product(float p) {
        price = p;
    }

    void show() {
        cout << "Price: " << price << " Tk";
    }
};

int main() {
    Product p1(450);
    p1.show();
    return 0;
}

