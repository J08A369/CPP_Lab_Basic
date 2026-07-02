#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    void setData(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Student s;

    s.setData("Rahim",101);
    s.display();

    return 0;
}
