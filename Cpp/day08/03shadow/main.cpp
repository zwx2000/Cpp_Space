#include <iostream>

using namespace std;

//shadow  override  overload
//          覆写      重载

//shadow 在父子类中，出现了 重名 的标识符(函数成员，数据成员)，就会构成shadow
//如果想访问被shadow的成员，加上父类的命名空间
//shadow 在父子类 重名

class A
{
public:
    void foo()
    {
        cout<<"A::void foo()"<<endl;
    }

    A & operator=(const A &)
    {
        cout<<"A & operator=(const A &)"<<endl;
    }
};

class B:public A
{
public:
    void foo()
    {
        cout<<"B::void func()"<<endl;
        A::foo();
    }

    B & operator=(const B &an)
    {
        cout<<"B & operator=(const B &)"<<endl;
        operator=(an);
    }
};

int main()
{
    B b;
    b.foo();
    return 0;
}
