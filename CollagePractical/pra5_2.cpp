#include<iostream>
using namespace std;
class complex
{
int real, img;
public :
void InsertCom()
{
    cout<<"Enter the real value :";
    cin>>real;
    cout<<"Enter the img valur :";
    cin>>img;
}
complex operator+(complex &x)
{
    complex t;
    t.real=real+x.real;
    t.img=img+x.img;
    return t;
}
complex operator-(complex &x)
{
    complex t;
    t.real=real-x.real;
    t.img=img-x.img;
    return t;
}
void display()
{
    cout<<"The Complex Number :";
    cout<<real;
    if(img>=0)
    {
        cout<<"+";
    }
    cout<<img<<"i"<<endl;
}


};
int main()
{
    complex c1,c2 ,c3, c4;
    c1.InsertCom();
    c2.InsertCom();
    c3=c1+c2;
    c4=c1-c2;
    c3.display();
    c4.display();
    return 0;
}