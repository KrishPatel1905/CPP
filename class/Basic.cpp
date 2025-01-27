#include<iostream>
using namespace std;
class employee
{
    public:
    int a, b, c;
     void setData(int a ,int b, int c);
    void getData();

       private:
    int d, e;
   
};
    

 
void employee ::setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
void employee::getData() {
    cout << "The value of a: " << a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The value of c: " << c << endl;
}

int main()
{
    employee emp;
    emp.setData(1,2,3);
    emp.getData();
    


}