#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;

        int aliceSpeed = A * Y;//velocity
        int bobSpeed = B * X;

        if (aliceSpeed > bobSpeed) {
            cout << "ALICE" << endl;
        } else if (bobSpeed > aliceSpeed) {
            cout << "BOB" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}
