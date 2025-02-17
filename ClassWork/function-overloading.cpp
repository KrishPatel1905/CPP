#include <iostream>
using namespace std;

float area (int);
float area (int,int);

int main()
{
    int r=10, l=10, b=20;
    float A;

    A = area(r);
    printf("%f\n",A);

    A = area (l,b);
    printf("%f",A);
    return 0;
}

float area (int R)
{
    return 3.14*R*R;
}

float area (int L, int B)
{
    return L*B;
}
