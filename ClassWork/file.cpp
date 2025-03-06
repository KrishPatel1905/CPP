#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ifstream fr;
ofstream fw;
int Ch_Count=0;
int Ln_Count=0;

fr.open("input.txt");

while(!fr.eof())
{
    Ch_Count++;
    if(fr.get()=='\n')
    {
        Ln_Count++;
    }
}

fw.open("output.txt");
cout<<"Total Characters : "<<Ch_Count<<endl;
cout<<"Total Lines : "<<Ln_Count;
    
fr.close();
fw.close();
return 0;
}