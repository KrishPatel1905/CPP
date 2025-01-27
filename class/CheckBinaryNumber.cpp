#include<iostream>
#include<string>
using namespace std;
class binary
{
    public:
    void read(void);
    void check(void);
    string s;
};
void binary :: read(void)
{
    cout<<"Enter the any number "<<endl;
    cin>>s;
}
void binary :: check(void)
{
   for(int i=0;i< s.length();i++)
   {
      if(s.at(i)!='0' && s.at(i)!='1')
      {
        cout<<"This not binary number ";
        exit(0); 
      }
     
   }
}
int main()
{
    binary b;
    b.read();
    b.check();

}