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
