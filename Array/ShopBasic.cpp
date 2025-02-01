#include<iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
     public:
     void initCounter(void)
     {
     counter=0;
     }
     void setPrice(void);
     void display(void);
};
void Shop :: setPrice(void)
{
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: display(void)
{
    for (int i= 0;i<counter;i++)
    {
        cout<<"the price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}


int main()
{
Shop dukan;
dukan.initCounter();
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.display();
}                             