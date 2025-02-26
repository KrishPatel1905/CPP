#include <iostream>
using namespace std;

int main() {
    int rows = 7; 
    int width = 5; 

    for (int i = 0; i < rows; i++) {
        cout << "*"; 

        for (int j = 0; j < width; j++) {
                       if ((i == 0 || i == rows - 1) && j < width - 1)
                cout << "*";
            else if (j == width - 1 && i != 0 && i != rows - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
