#include<iostream>
using namespace std;
class abc
{
    int a,b;
    public :
    void input()
    {
        cout<<"enter the value of a : ";
        cin>>this->a;
        cout<<"Enter the value of b:";
        cin>>this->b;

    }
    void output ()
    {
        cout<<this ->a<<endl;
        cout<<this ->b;

    }
};
int main()
{
    abc a;
    a.input();
    a.output();
    return 0;
}