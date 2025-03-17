#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class xyz
{
    int x;
    string name;
    string n;
    int st;
    public :
    
    xyz()
    {
        cin>>x;
        cin>>name;
        
        cin>>n;
        cin>>st;
    }
    void data()
    {
        cout<<x<<endl;
        cout<<n<<", "<<name<<endl;
        cout<<st<<endl;
        cout<<endl;
        cout<<x<<","<<name<<","<<n<<","<<st;
    }
};
int main()
{
    xyz a;
    a.data();
   return 0; 
}
