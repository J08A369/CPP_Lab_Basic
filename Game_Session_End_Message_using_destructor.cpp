#include <iostream>
using namespace std;

class Game {
public:
    Game() {
        cout << "Game Started!" << endl;
    }

    ~Game() {
        cout << "Game Over!" << endl;
    }
};

int main() {
    Game g;
    return 0;
}

