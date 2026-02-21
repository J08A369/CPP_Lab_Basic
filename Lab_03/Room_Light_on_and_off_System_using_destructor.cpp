#include <iostream>
using namespace std;

class Room {
public:
    Room() {
        cout << "Light ON" << endl;
    }

    ~Room() {
        cout << "Light OFF" << endl;
    }
};

int main() {
    Room r;
    return 0;
}

