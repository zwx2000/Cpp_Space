#include <iostream>

using namespace std;
/*
a        a = 5
b        b = 4
*/


//当子类不自实现时，默认调用父类的拷贝构造
//若自实现 不做特殊处理，此时只会调用父类的构造器,此时失去了拷贝构造的意义
//特殊处理  显式调用父类的拷贝构造

//子类对象赋给父类的引用 复制兼容

//当内嵌子对象，子类不自实现拷贝构造时时，默认调用内嵌子对象的拷贝构造
//若自实现 不做特殊处理，此时只会调用内嵌子对象的标配构造器,此时失去了拷贝构造的意义
//特殊处理  显式调用内嵌子对象的拷贝构造

class C
{
public:
    C()
    {
        cout<<"C()"<<endl;
    }
    C(const C& another)
    {
        cout<<"C(const C& another)"<<endl;
    }
};

class A
{
public:
    A(int x = 99)
    {
        cout<<"A()"<<endl;
        a = x;
    }

    A(const A & another)
    {
        this->a = another.a;
        cout<<"A(const A & another)"<<endl;
    }

    int a;
};

class B:public A
{
public:
    B(int x, int y)
        :A(x)
    {
        cout<<"B()"<<endl;
        b = y;
    }

    B(const B & another)
        :A(another),c(another.c)
    {
        this->b = another.b;
        cout<<"B(const B & another)"<<endl;
    }

    int b;

    C c;
};

int main()
{
    B b(199,200);
    B bb(b);

//    cout<<bb.a<<endl;
//    cout<<bb.b<<endl;

    return 0;
}
