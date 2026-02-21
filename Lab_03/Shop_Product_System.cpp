#include <iostream>
using namespace std;

class Product {
public:
    string name;
    float price;

    void show() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << " Tk" << endl;
    }
};

int main() {
    Product p1;
    p1.name = "Cake";
    p1.price = 450;

    p1.show();
    return 0;
}

