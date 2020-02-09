#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<this<<"constructor"<<endl;
    }
    ~A()
    {
        cout<<this<<"destructor"<<endl;
    }
    A(const A & another)
    {
        cout<<this<<"copy from"<<&another<<endl;
    }
    A& operator=(const A& another)
    {
        cout<<this<<" operator ="<<&another<<endl;
        return *this;
    }
};

A foo()
{
//    return A();
    A a;
    return a;
}

int main()
{
   foo();
   return 0;
}

#if 0
void func(A &a)
{

}

int main()
{
    A a;
    func(a);
    return 0;
}
#endif
