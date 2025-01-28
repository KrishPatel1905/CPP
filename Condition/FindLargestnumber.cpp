#include<iostream>
using namespace std;
int main() {
    int a, b, c;
   cout<<"Enter the three number :: "<<endl;
     cin>>a;
    cin>>b;
    cin>>c;

  
    if (a >= b && a >= c) {
      cout<<"a is largesst number" ;
    } else if (b >= a && b >= c) {
         cout<<"b is largesst number" ;
    } else {
         cout<<"c is largesst number ";
    }
    return 0;
}
