#include <iostream>
using namespace std;

class User {
public:
    User() {
        cout << "User Logged In" << endl;
    }

    ~User() {
        cout << "User Logged Out" << endl;
    }
};

int main() {
    User u;

    return 0;
}

