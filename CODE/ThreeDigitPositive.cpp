#include<iostream>
using namespace std;
int main()
{
 int Num;
 cout<<"Enter the Number ::";
 cin>>Num;
 if(Num>0)
 {
    cout<<"So the number is positive "<<endl;
    if(Num>99 && Num<1000)
    {
        cout<<"the givien number is three digit number ";
    }
    else{
        cout<<"The givien number is not three digit number";
    }
 }
 else{
    cout<<"The givien number is not positive ";
 }
}