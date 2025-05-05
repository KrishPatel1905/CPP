#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<string,float> m;
// map with data
map<string,float>m2={{"24CE073",9.2},{"24CE001",8.1}};
//find data 
cout<<m.size()<<endl;
cout<<m2.size()<<endl;
//fetch value of key
cout<<"The TOTAL MARKS OF 24CE001 IS :"<<m2["24CE001"]<<endl;
//intialvalue of data
m2["24CE001"]=9.1;
cout<<" NOW ,The TOTAL MARKS OF 24CE001 IS :"<<m2["24CE001"]<<endl;



m2.insert({"24CE032",7.9});
m2.insert({"24CE137",9.3});

//remove key

m2.erase("24CE073");

for(auto e: m2)
{
  cout<<":"<<e.first <<":"<<e.second<<endl ;
}
    return 0;
}