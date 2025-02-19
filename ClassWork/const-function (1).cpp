#include <iostream>
using namespace std;

class data
{
    int a,b;
public:
    void getdata()
    {
        cin >> a >> b;
    }
    void putdata() const
    {
       
        cout << a << b;
    }
};
int main()
{
    data d1;
    d1.getdata();
    d1.putdata();
    return 0;
}
