#include <iostream>
using namespace std;

class Myclass
{
    int a;

public:
    Myclass();
    ~Myclass();
    void show();
};

int main()
{
    Myclass ob;
    ob.show();
    cout << "Object shown" << endl;
    return 0;
}

Myclass::Myclass()
{
    cout << "In constructor" << endl;
    a = 10;
}

Myclass::~Myclass()
{
    cout << "Object Destroyed!!";
}

void Myclass::show()
{
    cout << a << endl;
}
