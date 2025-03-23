#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void SetNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void PrintNumber() {
        cout << a << "+i" << b << endl;
    }

    // Change sumcomplex to void and pass the result by reference
    friend void sumcomplex(Complex o1, Complex o2, Complex &result);
};

// Modify sumcomplex to use void and store the sum in `result`
void sumcomplex(Complex o1, Complex o2, Complex &result) {
    result.SetNumber(o1.a + o2.a, o1.b + o2.b);
}

int main() {
    Complex c1, c2, sum;
    int real1, imag1, real2, imag2;
    char ch;

    // Taking input in the form 3+i4 and 5+i6
    cin >> real1 >> ch >> ch >> imag1; // First complex number
    cin >> real2 >> ch >> ch >> imag2; // Second complex number

    c1.SetNumber(real1, imag1);
    c2.SetNumber(real2, imag2);

    // Calling sumcomplex with sum passed as reference
    sumcomplex(c1, c2, sum);

    sum.PrintNumber(); // Printing the result

    return 0;
}
