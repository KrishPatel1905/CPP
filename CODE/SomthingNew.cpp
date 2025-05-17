#include <iostream>
#include <unistd.h> 
using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

void setColor(int color) {
    cout << "\033[1;" << color << "m";
}

void resetColor() {
    cout << "\033[0m";
}

int main() {
    int n = 20, x = 40, y = 12;
    int dx = 1, dy = 0;
    int steps = 1, stepCount = 0, turns = 0;
    int dir = 0; 
    int color = 31; 

    for (int i = 0; i < n * n; ++i) {
        gotoxy(x, y);
        setColor(color);
        cout << "*";
        resetColor();
        usleep(30000); 

        x += dx;
        y += dy;
        stepCount++;

        if (stepCount == steps) {
            stepCount = 0;
            dir = (dir + 1) % 4;
            turns++;
            if (turns % 2 == 0) steps++;

            switch (dir) {
                case 0: dx = 1; dy = 0; break;
                case 1: dx = 0; dy = 1; break;
                case 2: dx = -1; dy = 0; break;
                case 3: dx = 0; dy = -1; break;
            }

            color++;
            if (color > 36) color = 31; 
        }
    }

    gotoxy(0, 25);
    return 0;
}
