#include <iostream>
#include <cstring>
using namespace std;

class Base
{
protected:
    string str;

public:
    Base(string str)
    {
        this->str = str;
    }
};

class Derived : public Base
{
    int len;

public:
    Derived(string s) : Base(s)
    {
        len = s.length();
    }
    void print()
    {
        cout << str << " - " << len << endl;
    }
};

int main()
{
    Derived d("hello");
    d.print();
    return 0;
}
