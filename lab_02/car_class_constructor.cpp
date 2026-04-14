#include <iostream>
using namespace std;

class Car
{
    int year;
    double mileage;

public:
    string brand;
    string model;

    // CONSTRUCTOR
    Car(int year, double mileage, string brand, string model)
    {
        this->year = year;
        this->mileage = mileage;
        this->brand = brand;
        this->model = model;
    }
    void get_car();
};

int main()
{
    Car car(2012, 55, "BMW", "SKYSCRAPPER"),
        car2(2015, 45, "Audi", "R8");

    car.get_car();
    return 0;
}

void Car::get_car()
{
    cout << this->brand << " " << this->model << endl;
    cout << this->year << endl;
    cout << this->mileage << endl;
}
