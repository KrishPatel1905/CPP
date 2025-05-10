#include <iostream>
#include <list>
using namespace std;

int main() {
    int x;
    cin>>x;
    list<int> num = {1, 5, 4, 7, 8};
  *num.begin()=100;
 auto s=num.begin();
 advance(s,0);
 cout<<*s;

    return 0;
}
