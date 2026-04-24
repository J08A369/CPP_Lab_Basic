
#include <iostream>
#include <cstring>
using namespace std;

// DRY = Dont Repeat Yourself
// KISS = Keep it simple silly

class Human
{
public:
    string id;
    string name;
    double age;
    string phone;
    string dept;
    Human(string d)
    {
        cout << "HUMAN" << endl;
        id = d;
    }
    ~Human()
    {
        cout << "HUMAN DESTROYED" << endl;
    }
};

class Teacher : public Human
{
public:
    double salary;
    Teacher()
    {
        cout << "Teacher" << endl;
    }
};

class Student : public Human
{
    int len;

public:
    Student(string s) : Human(s)
    {
        len = s.length();
    }
};

main()
{
    Student s("hello");
    return 0;
}
