#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter The First Number 1 :: ";cin>>num1;
    cout<<"Enter The First Number 2 :: ";cin>>num2;
    cout<<"Before Swap Number 1 and Number 2 are :: "<<num1<<" "<<num2<<endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout<<"After Swap Number 1 and Number 2 are :: "<<num1<<" "<<num2<<endl;
    return 0;
}