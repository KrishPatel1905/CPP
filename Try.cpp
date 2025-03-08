#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="heet";
    string s2="krish";
int result =s1.compare(s2);
if(result==0)
{
    cout<<"Both are same ";
}
else 
{
    cout<<"Both are not same ";
}
    return 0;
}