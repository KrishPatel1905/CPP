#include<iostream>
#include<string>
using namespace std;

class person {
    string name;
    int age;
public:
    person(string n, int A) {
        name = n;
        age = A;
    }

    void DisplayP() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employee : public person {
    int EmpId;
public:
    employee(int id, string D, int K) : person(D, K) {
        EmpId = id;
    }

    void DisplayEmp() {
        cout << "Employee Id: " << EmpId << endl;
        DisplayP();
    }
};

class manager : public employee {
    string Dep;
public:
    manager(string a, int b, string c, int s) : employee(b, c, s) {
        Dep = a;
    }

    void DisplayM() {
        cout << "Department: " << Dep << endl;
        DisplayEmp();
    }
};

int main() {
    manager m("IT", 10, "KRish", 17);
    m.DisplayM();

    return 0;
}
