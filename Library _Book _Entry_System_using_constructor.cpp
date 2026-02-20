#include <iostream>
using namespace std;

class Book {
public:
    string name;

    Book() {
        name = "C++ Beginner Guide";
        cout << "Book Added Successfully!" << endl;
    }

    void show() {
        cout << "Book Name: " << name << endl;
    }
};

int main() {
    Book b;
    b.show();
    return 0;
}

