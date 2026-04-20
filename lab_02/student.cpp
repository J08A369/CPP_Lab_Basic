#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    double marks[3]; // 0=English, 1=Bangla, 2=Math

public:
    const string courses[3] = {"English", "Bangla", "Math"};
    void set_student(int id, string name, double marks[]);
    void get_student();
};

int main()
{
    Student ob;
    double m[] = {100, 82, 83};
    ob.set_student(1, "Prerona", m);
    ob.get_student();
    return 0;
}

void Student::get_student()
{
    cout << this->id << endl;
    cout << this->name << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << this->marks[i] << " ";
    }
}

void Student::set_student(int id, string name, double marks[])
{
    this->id = id;
    this->name = name;
    for (int i = 0; i < 3; i++)
    {
        this->marks[i] = marks[i];
    }
}
