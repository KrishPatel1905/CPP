#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(7)<<375<<endl;
    cout<<setw(7)<<49100<<endl;
   cout<<fixed<<setprecision(2)<<375.7216<<endl;
   cout<<setbase(8)<<9<<endl;
    cout<<setw(5)<<setfill('!')<<75<<endl;   
    cout<<24<<setw(5)<<setfill('C')<<setfill('E')<<196<<endl;
   return 0;

}