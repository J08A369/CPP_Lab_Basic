#include <iostream>
using namespace std;

class Bus {

public:
    int fare;

    Bus() {
        cout << "Bus Service Started" << endl;
    }

    void ticket() {
        cout << "Local Bus Ticket" << endl;
    }

    void ticket(string type) {
        cout << "Bus Type: " << type << endl;
    }

    Bus operator + (Bus b) {

        Bus temp;

        temp.fare = fare + b.fare;

        return temp;
    }

    ~Bus() {
        cout << "Bus Service Closed" << endl;
    }
};

int main() {

    Bus b1, b2;

    b1.fare = 100;
    b2.fare = 150;

    b1.ticket();
    b1.ticket("AC Bus");

    Bus b3 = b1 + b2;

    cout << "Total Fare: " << b3.fare << endl;

    Bus *b = new Bus();

    delete b;

    return 0;
}
