#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    virtual void display() {
        cout << "Student Information" << endl;
    }
};

class CSEStudent : public Student {
public:
    void display() override {
        cout << "CSE Department Student" << endl;
    }
};

int main() {

    Student *s;
    CSEStudent c1;

    s = &c1;

    ofstream file("student.txt");

    s->display();

    file << "CSE Department Student";

    file.close();

    return 0;
}
