#include <iostream>

using namespace std;

//virtual �����͹ؼ��֣���������һ���������飬���าд�˵ĺ�����Ҳ��virtual
//��д ͬ�� ͬ�� ͬ���� override
//�麯���������еķ������Բ���Ӱ���̬��������������

class A
{
public:
    virtual void foo()
    {
        cout<<"A:foo()"<<endl;
    }
};

class B:public A
{
public:
    virtual void foo() override
    {
        cout<<"B:foo()"<<endl;
    }

//    virtual int foo() override
//    {
//        cout<<"B:foo()"<<endl;
//    }

//    virtual void foo(int a) override
//    {
//        cout<<"B:foo()"<<endl;
//    }

//    virtual void foo() const override
//    {
//        cout<<"B:foo()"<<endl;
//    }
};

int main()
{
    B b;
    A *pa = &b;
    pa->foo();
    return 0;
}
