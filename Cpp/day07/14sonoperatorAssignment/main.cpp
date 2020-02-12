#include <iostream>

using namespace std;

#if 0
1        3
2        4
#endif

class C
{
public:
    C()
    {
        cout<<"C()"<<endl;
    }
    C & operator=(const C & another)
    {
        cout<<"C & operator=(const C & another)"<<endl;
    }
};

class A
{
public:
    A(int x)
        :a(x)
    {
        cout<<"A()"<<endl;
    }
    A & operator=(const A & another)
    {
        if(this == &another)
            return *this;
        cout<<"A & operator=(const A & another)"<<endl;
        this->a = another.a;

        return *this;
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
    B & operator=(const B & another)
    {
        cout<<"B & operator=(const B & another)"<<endl;
        if(this == &another)
            return *this;
        A::operator=(another);
        this->b = another.b;
        c = another.c;

        return *this;
    }
    int b;

    C c;
};

int main()
{
    B b(1,2);
    B bb(3,4);
    b = bb;
    cout<<b.a<<b.b<<endl;
    return 0;
}
