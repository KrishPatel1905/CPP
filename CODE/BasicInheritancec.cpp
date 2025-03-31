#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;

    void showStudentInfo() {
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Alice";
    s1.age = 20;
    s1.studentID = 101;

    cout << "\nStudent Details:" << endl;
    s1.display();
    s1.showStudentInfo();

    return 0;
}
