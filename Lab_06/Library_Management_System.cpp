#include <iostream>
using namespace std;

class Library {

public:
    int books;

    Library() {
        cout << "Library Opened" << endl;
    }

    void book() {
        cout << "Story Book" << endl;
    }

    void book(string type) {
        cout << "Book Type: " << type << endl;
    }

    Library operator + (Library l) {

        Library temp;

        temp.books = books + l.books;

        return temp;
    }

    ~Library() {
        cout << "Library Closed" << endl;
    }
};

int main() {

    Library l1, l2;

    l1.books = 50;
    l2.books = 30;

    l1.book();
    l1.book("Science Fiction");

    Library l3 = l1 + l2;

    cout << "Total Books: " << l3.books << endl;

    Library *l = new Library();

    delete l;

    return 0;
}
