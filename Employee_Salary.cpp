#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void show() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << " Tk";
    }
};

int main() {
    Employee e;
    e.name = "Rahim";
    e.salary = 20000;

    e.show();
    return 0;
}

