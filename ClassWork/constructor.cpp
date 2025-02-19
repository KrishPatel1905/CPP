#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    int id;
    char name[25];
    int m1,m2,m3;
    float per;
    static int c;
    public:
    void set(int id,char N[],int M1,int M2,int M3)
    {
        id=1;
        strcpy(name,N);
        m1=M1;
        m2=M2;
        m3=M3;
        calper();
        
    }
    void calper()
    {
        per=(m1+m2+m3)/3;
    }
    void get()
    {
        cout<<endl<<id<<endl<<name<<endl<<m1<<endl<<m2<<endl<<m3;
    }
    student ()
    {
        cout<<"Hi";
        id=0;
        strcpy(name,"xyz");
        m1=m2=m3=0;
        per=0.0;
    }
    student(int i,char n[],int M1,int M2,int M3)
    {
        id=i;
        strcpy(name,n);
        m1=M1;
        m2=M2;
        m3=M3;
    }
    
};
int student ::c=0;
int main()
{
    student s;
    s.get();
    char x[]="Krish";
    student A(25,x,97,76,62);
    A.get();
    return 0;

}
//1.consractor is first function when called onject is created 
//2.name of con as is the same class name it may or may not paramameter is dont have any return type 
//you can over load consractor
//3.