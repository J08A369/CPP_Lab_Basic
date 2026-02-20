#include <iostream>
using namespace std;

class Employee {
public:
    float salary;
    float bonus;

    float totalSalary() {
        return salary + bonus;
    }
};

int main() {
    Employee e;
    e.salary = 15000;
    e.bonus = 2000;

    cout << "Total Salary: " << e.totalSalary() << " Tk";
    return 0;
}

