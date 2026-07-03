#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
};

class Student : public Person
{
public:
    void setName(string n)
    {
        name = n;   //protected access
    }

    void show()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s;



    s.setName("Rahim");
    s.show();

    return 0;
}
