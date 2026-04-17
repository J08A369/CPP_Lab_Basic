
#include <iostream>
using namespace std;

class Myclass
{
    int x;

public:
    Myclass() {}
    Myclass(int x)
    {
        this->x = x;
    }
    Myclass operator+(Myclass ob2)
    {
        Myclass ob3;
        ob3.x = this->x + ob2.x;
        return ob3;
    }
    Myclass operator-(Myclass ob2)
    {
        Myclass ob3;
        ob3.x = this->x - ob2.x;
        return ob3;
    }
    void showX()
    {
        cout << this->x << endl;
    }
};

int main()
{
    Myclass first(10), second(20);
    Myclass third = first + second;
    third.showX();
}
