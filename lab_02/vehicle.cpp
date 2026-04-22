#include <iostream>
using namespace std;

class Vehicle
{
    // license(string), mileage(double), year(int)
    string license;
    double mileage;
    int year;

public:
    // brand(string), model(string), type(string)
    string brand;
    string model;
    string type;

    Vehicle() {}
    void set_vehicle(string license, double mileage, int year, string brand, string model, string type);
    void show_vehicle();
    int get_year();
    string get_type();
    friend string get_textData(Vehicle vehicle);
};

string get_textData(Vehicle vehicle)
{
    return vehicle.license;
}

int main()
{
    Vehicle vehicle[5];
    // for(int i=0; i<5; i++) {
    //     vehicle[i].set_vehicle()
    // }

    vehicle[0].set_vehicle("ABC-XYZ", 55.5, 2012, "Audi", "R8", "car");
    vehicle[1].set_vehicle("ABC-123", 65.5, 2015, "Ferrari", "Rosser", "car");
    vehicle[2].set_vehicle("ABC-000", 75.5, 2018, "Toyota", "Corolla", "car");
    vehicle[3].set_vehicle("ABC-555", 95.5, 2014, "Hyundei", "Xero", "bus");
    vehicle[4].set_vehicle("ABC-789", 65.5, 2019, "Chienese", "Auto", "tesla");

    int target_year = 2015;

    cout << "Vehicles that was made before the year 2015:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "License: " << get_textData(vehicle[i]) << endl;
        if (vehicle[i].get_year() < target_year)
        {
            cout << vehicle[i].brand << " " << vehicle[i].model << endl;
        }
    }

    cout << "List the number of vehicles in each type" << endl;
    int car_count = 0;
    int bus_count = 0;
    int tesla_count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (vehicle[i].get_type() == "car")
        {
            car_count++;
        }
        else if (vehicle[i].get_type() == "bus")
        {
            bus_count++;
        }
        else
        {
            tesla_count++;
        }
    }
    cout << "Bus: " << bus_count << endl;
    cout << "Car: " << car_count << endl;
    cout << "Tesla: " << tesla_count << endl;

    return 0;
}

void Vehicle::set_vehicle(string license, double mileage, int year, string brand, string model, string type)
{
    this->license = license;
    this->mileage = mileage;
    this->year = year;
    this->brand = brand;
    this->model = model;
    this->type = type;
}

void Vehicle::show_vehicle()
{
    cout << this->license << endl;
    cout << this->mileage << endl;
    cout << this->year << endl;
    cout << this->brand << endl;
    cout << this->model << endl;
    cout << this->type << endl;
}

int Vehicle::get_year()
{
    return this->year;
}

string Vehicle::get_type()
{
    return this->type;
}
