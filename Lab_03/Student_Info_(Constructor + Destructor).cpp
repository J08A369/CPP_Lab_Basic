#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student() {
        name = "Asia";
        cout << "Constructor called!" << endl;
    }

    ~Student() {
        cout << "Destructor called!" << endl;
    }

    void show() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.show();
    return 0;
}

