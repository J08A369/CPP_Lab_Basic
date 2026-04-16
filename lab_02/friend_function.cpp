
#include <iostream>
using namespace std;

class Person
{
    int age;

public:
    Person() {}
    Person(int age)
    {
        this->age = age;
    }
    friend int showAge(Person person);
};

int showAge(Person person)
{
    person.age = 25;
    cout << person.age << endl;
}

int main()
{
    Person p;
    showAge(p);
}
