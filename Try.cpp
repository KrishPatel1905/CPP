#include <iostream>
using namespace std;
class student;
class faculty
{
    int facultyid;
    char facultyname[25];

public:
    void add_faculty_personal_data()
    {
        cin >> facultyid >> facultyname;
    }
    void add_math_marks(student &x);
};

class student
{
    int studentid, mathmark, cmark;
    char studentname[25];
    float percentage;

public:
    friend void faculty::add_math_marks(student &x);
    void add_student_personal_data()
    {
        cin >> studentid >> studentname;
    }
    void percentage()
    {
        percentage = (mathmark + cmark) / 2;
    }
    void display()
    {
        cout << studentid << mathmark << cmark << percentage;
    }
};
void faculty ::add_math_marks(student &x)
{
    cin >> x.mathmark;
}

int main()
{
    student s[5];
    faculty f1, f2;
    int i;

    for (i = 0; i < 5; i++)
    {
        s[i].add_student_personal_data();
    }

    f1.add_faculty_personal_data();
    f2.add_faculty_personal_data();
    for (i = 0; i < 5; i++)
    {
        f1.add_math_marks(s[i]);
    }
    for (i = 0; i < 5; i++)
    {
        s[i].percentage();
        s[i].display();
    }

    return 0;
}