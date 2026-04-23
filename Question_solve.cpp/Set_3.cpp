
#include <iostream>
using namespace std;

// Address Class
class Address {
public:
    string city;

    Address(string c) {
        city = c;
    }

    void showAddress() {
        cout << "City: " << city << endl;
    }
};

// Vehicle Class
class Vehicle {
public:
    string model;

    Vehicle(string m) {
        model = m;
    }

    void showVehicle() {
        cout << "Vehicle: " << model << endl;
    }
};

// Base Class Person
class Person {
public:
    string name;
    Address addr;   // object inside class
    Vehicle veh;    // object inside class

    Person(string n, string c, string v) : addr(c), veh(v) {
        name = n;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        addr.showAddress();
        veh.showVehicle();
    }
};

// Student Class (inherits Person)
class Student : public Person {
public:
    int id;

    Student(string n, int i, string c, string v)
        : Person(n, c, v) {
        id = i;
    }

    void showStudent() {
        showPerson();
        cout << "Student ID: " << id << endl;
    }
};

// Teacher Class (inherits Person)
class Teacher : public Person {
public:
    string subject;

    Teacher(string n, string s, string c, string v)
        : Person(n, c, v) {
        subject = s;
    }

    void showTeacher() {
        showPerson();
        cout << "Subject: " << subject << endl;
    }
};

// Main
int main() {
    Student s1("Rahim", 101, "Dhaka", "Bike");
    Teacher t1("Karim", "Math", "Khulna", "Car");

    cout << "--- Student Info ---" << endl;
    s1.showStudent();

    cout << "\n--- Teacher Info ---" << endl;
    t1.showTeacher();

    return 0;
}
