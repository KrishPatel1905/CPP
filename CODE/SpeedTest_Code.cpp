#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i=0;i<=T;i++){
        int A,A_X, B, B_Y;
        cin >> A >> A_X >> B >> B_Y;

       // Calculate speeds as fractions: speed = distance / time   
       // Instead of using float, compare A * Y and B * X 

        //Calculation :
       // A/x=B/Y;
      // A*Y=B*X;                                                        
     
        int aliceSpeed = A *B_Y;
        int bobSpeed = B * A_X;

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
