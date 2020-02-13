#include <iostream>

using namespace std;

class C
{
public:
    C(){

    }
};

class A
{
public:
    A()
    {

    }
};

class B:public A
{
public:
    B(){}
    C c;
};

int main()
{
    B b;
    return 0;
}
