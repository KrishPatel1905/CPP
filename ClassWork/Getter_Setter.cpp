#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    void setBrand(string b) {
        brand = b;
    }

    string getBrand() {
        return brand;
    }

    void setYear(int y) {
        if (y >= 1886) year = y;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setYear(2020);

    cout << "Brand: " << myCar.getBrand() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
