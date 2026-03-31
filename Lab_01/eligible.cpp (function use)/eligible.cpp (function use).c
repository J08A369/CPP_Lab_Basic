
#include <iostream>
using namespace std;

bool eligible(int age) {
    if(age >= 18)
        return true;
    else
        return false;
}

int main() {

    int age;
    cin >> age;

    if(eligible(age))
        cout << "Eligible";
    else
        cout << "Not Eligible";

    return 0;
}
