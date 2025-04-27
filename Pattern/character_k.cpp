#include <iostream>
using namespace std;

int main() {
    int rows = 7;  // You can change this for a bigger or smaller 'K'
    int mid = rows / 2 + 1;

    for (int i = 1; i <= rows; i++) {
        cout << "*";  // Left vertical line of 'K'

        for (int j = 1; j <= rows; j++) {
            if (j == (rows - i + 1) && i <= mid)  // Upper diagonal
                cout << "*";
            else if (j == i && i > mid)           // Lower diagonal
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
