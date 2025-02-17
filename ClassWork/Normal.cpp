#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
        float salary;

    public:
        string name;
        string dep;
        string subject;
        void Setsalary (double s)
        {
              salary=s;
        }
        float Getsalary()
        {
            return salary;      
        }
};

// Global declaration of the Teacher object
Teacher t1;

void Display();

int main() {
    cout << "Enter Name: ";
    cin >> t1.name;

    cout << "Enter Department: ";
    cin >> t1.dep;

    cout << "Enter Subject: ";
    cin >> t1.subject;
    t1.Setsalary(80000);
    Display();
    return 0;
}

void Display() {
    cout << "Name: " << t1.name << endl;
    cout << "Department Name: " << t1.dep << endl;
    cout << "Subject Name: " << t1.subject << endl;
    cout<<  "Salary :"<<t1.Getsalary()<<endl;
    cout<<"Thank you ";

}
