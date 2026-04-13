#include <iostream>
using namespace std;

class Car
{
    int year;
    double mileage;

public:
    string brand;
    string model;
    void set_car(int year, double mileage, string brand, string model);
    void get_car();
};

int main()
{
    Car car;
    car.set_car(2012, 55, "BMW", "SKYSCRAPPER");
    car.get_car();
    return 0;
}

void Car::set_car(int year, double mileage, string brand, string model)
{
    this->year = year;
    this->mileage = mileage;
    this->brand = brand;
    this->model = model;
}

void Car::get_car()
{
    cout << this->brand << " " << this->model << endl;
    cout << this->year << endl;
    cout << this->mileage << endl;
}
