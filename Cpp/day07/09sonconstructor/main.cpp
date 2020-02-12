#include <iostream>

using namespace std;

//在子类构造的过程当中
//标配：1 空体无参  2 重载  3  默认参数
//调用父类的构造器，标配会被调用。没有了标配，必须显式调用。
//或隐 必须有标配 或显 无所谓

//调用内嵌子对象的构造器，标配会被调用，没有标配，必须显式调用

class C
{
public:
    int c;
    C(int k)
    {
        cout<<"C()"<<endl;
        c = k;
    }

};

class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a = i;
    }

    int a;
};

class B:public A
{
public:
    B(int i, int j, int k)
        :A(i),c(k)         //显式调用
    {
        cout<<"B()"<<endl;
        b = j;
    }

    int b;
    C c;
};

int main()
{
    B b(3,5,10);
    cout<<"a = "<<b.a<<endl;
    cout<<"b = "<<b.b<<endl;
    cout<<"c = "<<b.c.c<<endl;
    return 0;
}
