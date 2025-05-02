#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;

        // Calculate speeds as fractions: speed = distance / time
        // Instead of using float, compare A * Y and B * X to avoid precision issues
        int aliceSpeed = A * Y;
        int bobSpeed = B * X;

        if (aliceSpeed > bobSpeed) {
            cout << "ALICE\n";
        } else if (aliceSpeed < bobSpeed) {
            cout << "BOB\n";
        } else {
            cout << "EQUAL\n";
        }
    }

    return 0;
}
