#include <iostream>
#include <fstream>
using namespace std;

class FileData {
public:
    void writeData() {

        ofstream file("data.txt");

        file << "Hello C++";

        file.close();
    }

    void readData() {

        ifstream file("data.txt");

        string text;

        getline(file, text);

        cout << text;

        file.close();
    }
};

int main() {

    FileData f;

    f.writeData();
    f.readData();

    return 0;
}
