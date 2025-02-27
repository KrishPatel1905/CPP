#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double basicSalary;
    double bonus;

public:
    // Constructor with default bonus value
    Employee(string empName, double empSalary, double empBonus = 5000.0)
        : name(empName), basicSalary(empSalary), bonus(empBonus) {}

    // Inline function to compute total salary
    inline double totalSalary() {
        return basicSalary + bonus;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Name: " << name << " | Basic Salary: " << basicSalary
             << " | Bonus: " << bonus << " | Total Salary: " << totalSalary() << endl;
    }
};

int main() {
    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    Employee* employees[10]; // Limiting array size to 10 for simplicity

    for (int i = 0; i < numEmployees; i++) {
        string name;
        double salary, bonus;
        cout << "Enter name, basic salary, and bonus for employee " << i + 1 << ": ";
        cin >> name >> salary >> bonus;
        employees[i] = new Employee(name, salary, bonus);
    }

    cout << "\nEmployee Salary Details:\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i]->displayDetails();
    }

    return 0;
}
