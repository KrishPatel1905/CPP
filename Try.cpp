#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch[n];
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
        c[i]=ch[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n - i - 1; j++)
        {
            if(ch[j]>ch[j+1])
            {
                char temp;
                temp=ch[j];
                ch[j]=ch[j+1];
                 ch[j+1]=temp;
            }
            
            
        }
       
        
    }
    for(int i=0;i<n;i++)
    {
       cout<<ch[i];
    }
    
        
    return 0;
}