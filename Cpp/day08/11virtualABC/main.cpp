#include <iostream>

using namespace std;

//virtual 声明型关键字，用于声明一个函数，虚，子类覆写了的函数，也是virtual
//覆写 同名 同参 同返回 override
//虚函数在子类中的访问属性并不影响多态，具体需求看子类

class A
{
public:
    virtual void foo()
    {
        cout<<"A::foo()"<<endl;
    }
};

class B:public A
{
public:

};

class C:public B
{
    virtual void foo()
    {
        cout<<"C::foo()"<<endl;
    }
};

int main()
{
    C c;
    B * pb = &c;
    pb->foo();
    return 0;
}
