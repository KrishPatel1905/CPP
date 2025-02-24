#include<iostream>
using namespace std;
class xyz
{
 int a;
 float b;
 public :
  void input()
  {
    cin>>this->a;
    cin>>this->b;

  }
  void output()
  {
    cout<<a<<endl;
    cout<<b;
  }
};
int main()
{ 
    xyz *p;
    p->input();
    p->output();
    return 0;
}