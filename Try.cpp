#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Input user name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Input user age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Output greeting and years until 100
    std::cout << "Hello, " << name << "!" << std::endl;

    if (age < 100) {
        std::cout << "You will turn 100 in " << (100 - age) << " years." << std::endl;
    } else if (age == 100) {
        std::cout << "Wow! You're 100 years old today!" << std::endl;
    } else {
        std::cout << "You turned 100 " << (age - 100) << " years ago!" << std::endl;
    }

    return 0;
}
