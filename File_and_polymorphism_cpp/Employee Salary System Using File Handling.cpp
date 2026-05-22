#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    virtual void salary() {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee {
public:
    void salary() override {
        cout << "Manager Salary: 50000" << endl;
    }
};

int main() {

    Employee *e;
    Manager m;

    e = &m;

    ofstream file("salary.txt");

    e->salary();

    file << "Manager Salary: 50000";

    file.close();

    return 0;
}
