#include<iostream>
#include<string>
using namespace std;
int main()
{
    int counter=0;
    int count=0;
    string str;
    string st;
    counter=str.length();
    count=st.length();
    cout<<counter<<" "<<count<<endl;
   cin>>str;
   cin>>st;
    for(int i=0;i<counter;i++)
    {
        cout<<str[i];
    }
   
    for(int i=0;i<count;i++)
    {
        cout<<st[i];
    }
    cout<<endl;
    char temp;
    temp=str[0];
    str[0]=st[0];
    st[0]=temp;
    for(int i=0;i<counter;i++)
    {
        cout<<str[i];
    }
    cout<<" ";
    for(int i=0;i<count;i++)
    {
        cout<<st[i];
    }
    
    
    return 0;
}