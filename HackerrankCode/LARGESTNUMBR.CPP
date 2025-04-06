#include <iostream>
using namespace std;


int main() {
  int arr[4];
  for(int i=0;i<4;i++)
  {
    cin>>arr[i];
    
  } 
  if(arr[0]>arr[1]&&arr[0]>arr[2]&&arr[0]>arr[3])
  {
    cout<<arr[0];
  }
  else if(arr[1]>arr[0]&&arr[1]>arr[2]&&arr[1]>arr[3])
  {
    cout<<arr[1];
  }
   else if(arr[2]>arr[1]&&arr[2]>arr[0]&&arr[2]>arr[3])
  {
    cout<<arr[2];
  }
  else 
  {
    cout<<arr[3];
  }  
    return 0;
}
