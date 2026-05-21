#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt");

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    file << name << endl;
    file << age;

    file.close();

    cout << "Saved successfully";

    return 0;
}
