#include <iostream>
using namespace std;

class Time {
    int minutes;
public:
    Time(int m) {
        minutes = m;
    }

   
    operator float() {
        return minutes / 60.0; 
    }
};

int main() {
    Time t(60); 
    float hours = t;  
    
    cout << "Time in hours: " << hours << endl;  
    return 0;
}
