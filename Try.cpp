#include<iostream>
using namespace std;
const int MAX=100;
class account
{
  string name;
  float balance;
  float tran;
      string transactionType[MAX];
    float transactionAmount[MAX];
    int txnCount;
  
  public :

  void with(float am)
  {
    if(am>balance)
    {
      throw string("Invaild amount");
    }
    balance=balance-am;
    transactionType[txnCount]="withdraw ";
    transactionAmount[txnCount]=am;
    txnCount++;

  }
  void depo(float am)
  {
    balance=balance+am;
     transactionType[txnCount]="Deposite ";
    transactionAmount[txnCount]=am;
    txnCount++;
    cout<<"Now BAlance is "<<balance;
  }
  void transition()
  {
    for (int i = 0; i < txnCount; i++)
    {
      /* code */
      cout<<i+1<<"."<<transactionType[txnCount]<<":"<<transactionAmount[txnCount];
    }
    
  }

  
};
  void showError(string function, string error) {
    cout << "[ERROR] in " << function << ": " << error << "\n";
}
int main()
{
  float amount;
  account acc;
  int ch;

   d: cout<<"1.Deposite amount \n2.Withdrwa amount\n3.transition histroy \n4.exit\n";
  cout<<"Enter the choice :";
  cin>>ch;
   switch(ch)
   {
    case 1 :
    cout<<"Enter the amount :";
      cin>>amount;
      acc.depo(amount);
     goto d;
   case 2 :
   try{
   cout<<"Enter the amount :";
   cin>>amount;
   acc.with(amount);
     
   }
   catch(string msg){
     showError("deposite",msg);
   }
   goto d;
   case 3:
    acc.transition();
    goto d;
    case 4:
     cout<<"Thank you for visit our bsnking system ";
    break;
   default:
  cout<<"Invaild";
    break;
   }
  return 0;
}    
