#include<iostream>
using namespace std;
class currency
{
    int rupee,paisa;
    public :
    void enter()
    {
        cout<<"Enter rupper and paisa:";
        cin>>rupee;
        cin>>paisa;

    }
    void show()
    {
        cout<<rupee<<"."<<paisa;
    }
    currency sum(currency b)
    {
        currency a;
        a.rupee=rupee+b.rupee;
        a.paisa=paisa+b.paisa;
        return a;

    }
};

int main()
{
    currency c1,c2,c3;
    c1.enter();
    c2.enter();
    c3=c1.sum(c2);
    c3.show();
    return 0;
}