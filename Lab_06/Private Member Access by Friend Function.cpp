#include <iostream>
using namespace std;

class Number
{
private:
    int x;

public:
    Number()
    {
        x = 100;
    }

    friend void show(Number);
};

void show(Number n)
{
    cout << n.x << endl;
}

int main()
{
    Number n;

    show(n);

    return 0;
}
