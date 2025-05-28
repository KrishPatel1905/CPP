#include <iostream>
#include <conio.h>  // For _getch() on Windows
using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;

int playerX = 5, playerY = 5;

void draw() {
    system("cls"); // Clear screen (Windows-specific)
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == playerX && y == playerY) {
                cout << "KRISH "; // Player
            } else {
                cout << ". "; // Empty space
            }
        }
        cout << endl;
    }
}

void input() {
    char move = _getch(); // Wait for key input
    switch (move) {
        case 'w':
        case 'W':
            if (playerY > 0) playerY--;
            break;
        case 's':
        case 'S':
            if (playerY < HEIGHT - 1) playerY++;
            break;
        case 'a':
        case 'A':
            if (playerX > 0) playerX--;
            break;
        case 'd':
        case 'D':
            if (playerX < WIDTH - 1) playerX++;
            break;
        case 'q':
        case 'Q':
            exit(0); // Quit game
    }
}

int main() {
    while (true) {
        draw();
        input();
    }
    return 0;
}
