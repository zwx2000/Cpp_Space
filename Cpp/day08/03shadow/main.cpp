#include <iostream>

using namespace std;

//shadow  override  overload
//          ��д      ����

//shadow �ڸ������У������� ���� �ı�ʶ��(������Ա�����ݳ�Ա)���ͻṹ��shadow
//�������ʱ�shadow�ĳ�Ա�����ϸ���������ռ�
//shadow �ڸ����� ����

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
