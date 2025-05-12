#include<iostream>
using namespace std;
int s[30],n=30,top=-1;
void push()
{
     int x;
     if(top==n-1)
     {
        cout<<"Stack is overflow ";
     }
     else 
     {
        cout<<"Enter the element :";
        cin>>x;
        top++;
     }

}
void pop()
{
       int x;
     if(top==0)
     {
        cout<<"Stack is empty ";
     }
     else 
     {
        x=top;
        cout<<"Enter the element :";
        cout<<x;
        top--;
     }  
}
int main()
{
    int ch;
  next:  cout<<"1.push data\n2.pop data\n3.exit\n";
    cout<<"Enter the choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Now calling push function ......\n";
           push();
           goto next;
           case 2 :
           cout<<"Now calling pop function ......\n";
           pop();
           goto next;
    }
    return 0;
}