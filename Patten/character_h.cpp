#include <iostream>
using namespace std;

int main() {
    int rows = 7; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            
            
            if (j == 0 || j == rows - 1 || i == rows / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
