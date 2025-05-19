#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;
    double pi = 3.14159;

    cout << "Number with width 5: " << setw(5) << num << endl;
    cout << "Filled with *: " << setfill('*') << setw(5) << num << endl;

    cout << fixed << setprecision(2);
    cout << "Pi with 2 decimals: " << pi << endl;

    cout << boolalpha << true << " " << false << endl;

    return 0;
}
