#include <iostream>
using namespace std;

class Airport {

public:
    int ticket;

    Airport() {
        cout << "Constructor Called" << endl;
    }

    void flight() {
        cout << "Domestic Flight" << endl;
    }

    void flight(string type) {
        cout << type << endl;
    }

    Airport operator + (Airport a) {

        Airport temp;

        temp.ticket = ticket + a.ticket;

        return temp;
    }

    ~Airport() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    Airport a1, a2;

    a1.ticket = 5000;
    a2.ticket = 7000;

    a1.flight();
    a1.flight("International Flight");

    Airport a3 = a1 + a2;

    cout << "Total Ticket: " << a3.ticket << endl;

    Airport *a = new Airport();

    delete a;

    return 0;
}
