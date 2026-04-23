#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;
    double speed;
    void set_vehicle(string b, double s)
    {
        brand = b;
        speed = s;
    }
};

class Car : public Vehicle
{
public:
    string model;
    void set_car(string m)
    {
        model = m;
    }
};

class ElectricCar : public Car
{
public:
    string batteryCapacity;
    void set_ElectricCar(string b)
    {
        batteryCapacity = b;
    }
    void showAll()
    {
        cout << brand << endl;
        cout << speed << endl;
        cout << model << endl;
        cout << batteryCapacity << endl;
    }
};

int main()
{
    ElectricCar ec;
    ec.set_vehicle("toyota", 320);
    ec.set_car("corolla");
    ec.set_ElectricCar("96WH");
    ec.showAll();

    return 0;
}
