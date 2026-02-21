#include <iostream>
using namespace std;

class Course {
public:
    string student;

    Course(string s) {
        student = s;
    }

    void show() {
        cout << "Enrolled Student: " << student;
    }
};

int main() {
    Course c("Asia");
    c.show();
    return 0;
}

