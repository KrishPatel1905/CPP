#include<iostream>
using namespace std;
int main()
{
   int BuyCost;
   cout<<"Enter the buy cost please :: ";
   cin>>BuyCost;
   int SellCost;
   cout<<"Enter the Sell cost ::";
   cin>>SellCost;
   if(SellCost>BuyCost)
   {
      cout<<"Profit"<<endl;
      cout<<"The Profit is ::"<<SellCost-BuyCost;
   }
   else
   {
     cout<<"No Profit ";
   }

}