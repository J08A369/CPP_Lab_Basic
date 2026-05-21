#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("student.txt");

    file << "Asia" << endl;
    file << "CSE Department" << endl;
    file << "Batch 2" << endl;

    file.close();

    cout << "Data written successfully";

    return 0;
}
