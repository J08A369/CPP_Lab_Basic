#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says Woof" << endl;
    }
};

int main() {

    Animal *a;

    Cat c;
    Dog d;

    a = &c;
    a->sound();

    a = &d;
    a->sound();

    return 0;
}
