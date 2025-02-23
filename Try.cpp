#include<iostream>
#include<string.h>
using namespace std;
class Mangesystem
{
    int quantity;
    int itemId;
    int price;
    string itemName;
    public:
    void AddItem();
    void InAndDecreaseitem();
    void displayItem();
    Mangesystem()
    {
        cout<<"........Welcome to system ........";
        price=0;
        quantity=0;
    }
    Mangesystem(int id,string name,int p,int q)
    {
       itemId=id;
       itemName=name;
       price=p;
       quantity=q;
       cout<<"id no: "<<itemId<<" "<<"itemname :"<<itemName<<" "<<"item price:"<<price<<" "<<"item quantity:"<<quantity<<endl;

    }

    
};
int main()
{
    
    Mangesystem items[3] = {
        Mangesystem(101, "Notebook", 200, 10),
       Mangesystem(102, "Pen", 50, 20),
        Mangesystem(103, "Eraser", 5, 10)
    };


    return 0;
}