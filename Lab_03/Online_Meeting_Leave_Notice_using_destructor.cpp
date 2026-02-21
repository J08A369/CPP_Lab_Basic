#include <iostream>
using namespace std;

class Meeting {
public:
    Meeting() {
        cout << "Meeting Joined" << endl;
    }

    ~Meeting() {
        cout << "Left the Meeting" << endl;
    }
};

int main() {
    Meeting m;
    return 0;
}

