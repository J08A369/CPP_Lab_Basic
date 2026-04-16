
#include <iostream>
using namespace std;

class Coord
{
public:
    int x, y;
    Coord()
    {
        cout << "Constructing with default constructor" << endl;
    }
    Coord(Coord &ob)
    {
        cout << "Constructing with copy constructor" << endl;
        this->x = ob.x;
        this->y = ob.y;
    }
    void showData()
    {
        cout << x << " - " << y << endl;
    }
};

int main()
{
    Coord ob;
    ob.x = 10;
    ob.y = 20;
    Coord ob2(ob);
    ob2.showData();
    Coord ob3 = ob2;
    ob2.showData();
    return 0;
}
