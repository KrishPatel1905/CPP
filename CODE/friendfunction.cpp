    #include<iostream>
    using namespace std;
    class complex
    {
int a,b;
public :
     
       void  SetNumber(int n1,int n2)
       {
           a=n1;
           b=n2;
       }
       void PrintNumber()
       {
        cout<<"Your number is ::"<<a<<"+i"<<b<<endl;
       }
       friend complex sumcomplex(complex o1,complex o2);
    };
    complex sumcomplex(complex o1,complex o2)
    {
        complex o3;
        o3.SetNumber((o1.a+o2.a),(o1.b+o2.b));
        return o3;
    }
    int main()
    { 
        complex c1,c2,sum;
        c1.SetNumber(1,4);
        c1.PrintNumber();
        c2.SetNumber(5,8);
        c2.PrintNumber();

        sum=sumcomplex(c1,c2);
        sum.PrintNumber();
        return 0;
    }