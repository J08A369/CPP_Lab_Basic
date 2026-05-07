#include <iostream>
using namespace std;

class Restaurant {

public:
    int bill;

    // Constructor
    Restaurant() {
        cout << "Constructor Called" << endl;
    }

    // Function Overloading
    void order() {
        cout << "Order Pizza" << endl;
    }

    void order(string drink) {
        cout << "Drink: " << drink << endl;
    }

    // Operator Overloading
    Restaurant operator + (Restaurant r) {

        Restaurant temp;

        temp.bill = bill + r.bill;

        return temp;
    }

    // Destructor
    ~Restaurant() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    // Object Create
    Restaurant r1, r2;

    r1.bill = 500;
    r2.bill = 300;

    r1.order();
    r1.order("Coffee");

    Restaurant r3 = r1 + r2;

    cout << "Total Bill: " << r3.bill << endl;

    // Dynamic Object
    Restaurant *r = new Restaurant();

    delete r;

    return 0;
}
