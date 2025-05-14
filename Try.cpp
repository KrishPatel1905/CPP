#include <iostream>
using namespace std;

class A // Base class
{
private:
    int privdataA;    // visible only to class A

protected:
    int protdataA;    // visible to A and derived classes

public:
    int pubdataA;     // visible to all

    void funct()
    {
        int a;
        a = privdataA;   // OK
        a = protdataA;   // OK
        a = pubdataA;    // OK
    }
};

class B : public A // publicly-derived class
{
public:
    void funct()
    {
        int a;
        // a = privdataA;   // Error: not accessible
        a = protdataA;     // OK
        a = pubdataA;      // OK
    }
};

class C : private A // privately-derived class
{
public:
    void funct()
    {
        int a;
        // a = privdataA;   // Error: not accessible
        a = protdataA;     // OK
        a = pubdataA;      // OK
    }
};

class D : protected A // protectedly-derived class
{
public:
    void funct()
    {
        int a;
        // a = privdataA;   // Error: not accessible
        a = protdataA;     // OK
        a = pubdataA;      // OK
    }
};
