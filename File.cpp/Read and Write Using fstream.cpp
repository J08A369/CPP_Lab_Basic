#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file;

    file.open("test.txt", ios::out);

    file << "Hello File";

    file.close();

    file.open("test.txt", ios::in);

    string text;

    getline(file, text);

    cout << text;

    file.close();

    return 0;
}
