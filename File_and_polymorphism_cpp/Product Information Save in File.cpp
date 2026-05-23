#include <iostream>
#include <fstream>
using namespace std;

class Product {
public:
    virtual void show() {
        cout << "Product Details" << endl;
    }
};

class Mobile : public Product {
public:
    void show() override {
        cout << "Mobile: Samsung" << endl;
    }
};

int main() {

    Product *p;
    Mobile m;

    p = &m;

    ofstream file("product.txt");

    p->show();

    file << "Mobile: Samsung";

    file.close();

    return 0;
}
