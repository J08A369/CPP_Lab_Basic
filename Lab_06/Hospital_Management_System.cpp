#include <iostream>
using namespace std;

class Hospital {

public:
    int bill;

    Hospital() {
        cout << "Hospital Opened" << endl;
    }

    void patient() {
        cout << "General Patient" << endl;
    }

    void patient(string type) {
        cout << "Patient Type: " << type << endl;
    }

    Hospital operator + (Hospital h) {

        Hospital temp;

        temp.bill = bill + h.bill;

        return temp;
    }

    ~Hospital() {
        cout << "Hospital Closed" << endl;
    }
};

int main() {

    Hospital h1, h2;

    h1.bill = 5000;
    h2.bill = 7000;

    h1.patient();
    h1.patient("Emergency");

    Hospital h3 = h1 + h2;

    cout << "Total Bill: " << h3.bill << endl;

    Hospital *h = new Hospital();

    delete h;

    return 0;
}
