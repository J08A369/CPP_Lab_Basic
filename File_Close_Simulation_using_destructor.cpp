#include <iostream>
using namespace std;

class File {
public:
    File() {
        cout << "File Opened" << endl;
    }

    ~File() {
        cout << "File Closed" << endl;
    }
};

int main() {
    File f;
    return 0;
}

