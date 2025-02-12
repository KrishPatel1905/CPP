#include <iostream>
using namespace std;

class student
{
    int studentid, mathmark, cmark;
    char studentname[25];
public:
    void add_student_personal_data()
    {
        cin >> studentid >> studentname;
    }
};

class faculty
{
    int facultyid;
    char facultyname[25];
public:
    void add_faculty_personal_data()
    {
        cin >> facultyid >> facultyname;
    }
};

int main()
{
    student s[5];
    faculty f1 , f2;
    int i;

    for (i=0;i<5;i++)
    {
        s[i].add_student_personal_data();
    }

    f1.add_faculty_personal_data();
    f2.add_faculty_personal_data();

    return 0;
}
