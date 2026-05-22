#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("result.txt");

    string name;
    int marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;

    file << "Name: " << name << endl;
    file << "Marks: " << marks << endl;

    file.close();

    cout << "Result saved";

    return 0;
}
