#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    void setValues(int len, int wid)
    {
        length = len;
        width = wid;
    }
    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect;
    rect.setValues(5, 4);
    cout << rect.area() << endl;

    return 0;
}
