#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    int n=1;
    
    while (n<=T) {
        int X, Y;
        cin >> X >> Y;  // Time taken by bike (X) and car (Y)
        
        if (X < Y) {
            cout << "BIKE" << endl;
        } else if (X > Y) {
            cout << "CAR" << endl;
        } else {
            cout << "SAME" << endl;
        }
        n++;
    }

    return 0;
}
