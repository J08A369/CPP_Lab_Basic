#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("note.txt", ios::app);

    file << "New line added" << endl;

    file.close();

    cout << "Data appended";

    return 0;
}
