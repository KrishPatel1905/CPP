#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"Hi";
    }
};
class de : public base{
    public :
    void display()
    {
        cout<<"bye";
    }
};

int main()
{
    base b;
    de d;
    base *p=&d;
    p->display();
    

    return 0;
}