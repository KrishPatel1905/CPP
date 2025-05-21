#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    // Input user name
    cout << "Enter your name: ";
    getline(cin, name);

    // Input user age
    cout << "Enter your age: ";
    cin >> age;

    // Output greeting and years until 100
    cout << "Hello, " << name << "!" << endl;

    if (age < 100) {
        cout << "You will turn 100 in " << (100 - age) << " years." << endl;
    } else if (age == 100) {
        cout << "Wow! You're 100 years old today!" << endl;
    } else {
        cout << "You turned 100 " << (age - 100) << " years ago!" << endl;
    }

    return 0;
}
