#include<iostream>
using namespace std;
template<typename Data> Data Maxvalue(Data d1,Data d2)
{
    if(d1>d2)
    {
        cout<<"The highest value is "<<d1<<endl;
    }
    else{
        cout<<"The hightest value is :"<<d2<<endl;
    }
}
int main()
{
 cout<<Maxvalue<int>(15,30);
 cout<<Maxvalue<float>(15.5,15.6);
 cout<<Maxvalue<char>('A','B');

    
}