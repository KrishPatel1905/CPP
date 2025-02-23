#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter three side of a ::";
cin>>a;
cout<<"Enter three side of b::";
cin>>b;
cout<<"Enter three side of c::";
cin>>c;
if(a+b>c && a+c>b && b+c>a)
{
    cout<<"The givien triangle is possible ";
}
else{
    cout<<"The givien triangle is not possible ";
}
}