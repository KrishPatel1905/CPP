#include<iostream>
using namespace std;
class temp
{
    int a,b;
    public :
    void cal()
    {
        cin>>a;
        cout<<endl;
        cin>>b;
        cout<<"the output is :"<<a+b;

    }
    temp()
    {
        cout<<"Welcome to our program how can I help you"<<endl;
    }
    ~temp()
    {
        cout<<"\n.....bye sir||mam..... \n..... thank you..... \n..... vist again.....";
    }

};
int main()
{
    temp a;
    a.cal();
    
    return 0;
}