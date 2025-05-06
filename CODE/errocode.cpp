#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    double A = 10.0, X = 3.0, B = 20.0, Y = 6.0;
    
   
    double aliceSpeed = A / X;
    double bobSpeed = B / Y;

  
    cout << "Alice's Speed: " << fixed << setprecision(7) << aliceSpeed << endl;
    cout << "Bob's Speed: " << fixed << setprecision(7) << bobSpeed << endl;

    // Check if the speeds are equal
    if (aliceSpeed == bobSpeed) {
        cout << "EQUAL" << endl;
    } else if (aliceSpeed > bobSpeed) {
        cout << "ALICE" << endl;
    } else {
        cout << "BOB" << endl;
    }

    return 0;
}
