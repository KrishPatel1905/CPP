#include<iostream>
using namespace std;
int main()
{
    int a=10; int b=20;
     cout<<"A :"<<a<<endl;
     cout<<"B :"<<b<<endl;
     a=a+b-(b=a);//single line 
     cout<<"Now :\n"<<"A:"<<a<<endl<<"B :"<<b;
    return 0;
}