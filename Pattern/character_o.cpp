#include <iostream>

int main() {
    int size = 7; // Size of 'O'

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == 0 || i == size - 1) && (j > 0 && j < size - 1))
                std::cout << "*";
            else if ((j == 0 || j == size - 1) && (i > 0 && i < size - 1))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
