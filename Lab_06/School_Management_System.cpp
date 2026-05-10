#include <iostream>
using namespace std;

class School {

public:
    int fees;

    School() {
        cout << "School Started" << endl;
    }

    void student() {
        cout << "Regular Student" << endl;
    }

    void student(string group) {
        cout << "Group: " << group << endl;
    }

    School operator + (School s) {

        School temp;

        temp.fees = fees + s.fees;

        return temp;
    }

    ~School() {
        cout << "School Closed" << endl;
    }
};

int main() {

    School s1, s2;

    s1.fees = 3000;
    s2.fees = 4000;

    s1.student();
    s1.student("Science");

    School s3 = s1 + s2;

    cout << "Total Fees: " << s3.fees << endl;
    School *s = new School();

    delete s;

    return 0;
}
