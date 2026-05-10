#include <iostream>
using namespace std;

class House {

public:
    int electricityBill;

    // Constructor
    House() {
        cout << "House System Started" << endl;
    }

    // Function Overloading
    void room() {
        cout << "3 Rooms Available" << endl;
    }

    void room(string color) {
        cout << "Room Color: " << color << endl;
    }

    // Operator Overloading
    House operator + (House h) {

        House temp;

        temp.electricityBill = electricityBill + h.electricityBill;

        return temp;
    }

    // Destructor
    ~House() {
        cout << "House System Closed" << endl;
    }
};

int main() {

    House h1, h2;

    h1.electricityBill = 2000;
    h2.electricityBill = 3000;

    h1.room();
    h1.room("Blue");

    House h3 = h1 + h2;

    cout << "Total Bill: " << h3.electricityBill << endl;

    House *h = new House();

    delete h;

    return 0;
}
