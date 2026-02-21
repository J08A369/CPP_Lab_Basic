#include <iostream>
using namespace std;

class Temperature {
public:
    float c;

    float toFahrenheit() {
        return (c * 9 / 5) + 32;
    }
};

int main() {
    Temperature t;
    t.c = 30;

    cout << "Fahrenheit: " << t.toFahrenheit();
    return 0;
}

