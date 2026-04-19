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
    bool is_goldenAPlus();
    bool is_SemesterDrop();
    void get_name();
};

int main()
{
    freopen("input.txt", "r", stdin);
    Student student[10];
    string temp_name;
    int temp_id;
    double temp_marks[3];
    for (int i = 0; i < 10; i++)
    {
        cin >> temp_name;
        cin >> temp_id;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp_marks[i];
        }

        student[i].set_student(temp_id, temp_name, temp_marks);
    }

    //* show all student info

    // for (int i = 0; i <= 9; i++)
    // {
    //     student[i].get_student();
    // }

    //* Print names whose mark is greater than 80 in all courses
    for (int i = 0; i <= 9; i++)
    {
        bool aplus = student[i].is_goldenAPlus();
        bool semesterDrop = student[i].is_SemesterDrop();
        if (aplus)
        {
            cout << "A plus: ";
            student[i].get_name();
        }
        if (semesterDrop)
        {
            cout << "Semester Drop: ";
            student[i].get_name();
        }
    }
    return 0;
}

bool Student::is_SemesterDrop()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (this->marks[i] < 40)
        {
            count++;
        }
    }
    if (count > 1)
    {
        return true;
    }
    else
        return false;
}

void Student::get_name()
{
    cout << this->name << endl;
}

bool Student::is_goldenAPlus()
{
    bool aplus = true;
    for (int i = 0; i < 3; i++)
    {
        if (this->marks[i] < 80)
        {
            aplus = false;
            break;
        }
    }
    if (aplus)
        return true;
    else
        return false;
}

void Student::get_student()
{
    cout << this->id << endl;
    cout << this->name << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << this->marks[i] << " ";
    }
    cout << endl;
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
