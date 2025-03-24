#include <iostream>
using namespace std;
void sum(int *x,int *y){
    int c;
     c=(*x)+(*y);
     cout<<c<<endl;
}
void sub(int *x,int *y)
{
     int c;
     c=(*x)-(*y);
     if(c<0)
     {
     cout<<c*(-1);
     }
     else {
        cout<<c;
     }
} 

int main() {
    int a,b;
   cin>>a;
   cin>>b;
   sum(&a, &b);
   sub(&a,&b);
      
    return  0;
}
