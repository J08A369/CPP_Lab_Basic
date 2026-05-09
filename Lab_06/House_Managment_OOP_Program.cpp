#include <iostream>
using namespace std;

class House {

public:
    int room;

    House() {
        cout << "Constructor Called" << endl;
    }

    void design() {
        cout << "Modern House" << endl;
    }

    void design(string color) {
        cout << color << endl;
    }

    House operator + (House h) {

        House temp;

        temp.room = room + h.room;

        return temp;
    }

    ~House() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    House h1, h2;

    h1.room = 3;
    h2.room = 5;

    h1.design();
    h1.design("White");

    House h3 = h1 + h2;

    cout << "Total Room: " << h3.room << endl;

    House *h = new House();

    delete h;

    return 0;
}
