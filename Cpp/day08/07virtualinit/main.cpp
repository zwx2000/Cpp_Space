#include <iostream>

using namespace std;

//����ࣺ����̳е���
//��̳У���һ�ֶԼ̳е���չ

class A
{
protected:
    int _data;
};

class B:virtual public A
{
public:
    B(int i = 0)
    {
        cout<<"B(int i)"<<endl;
        _data = i;
    }
};

class C:virtual public A
{
public:
    C(int i = 0)
    {
        cout<<"C(int i)"<<endl;
        _data = i;
    }
};

class D:public B,C
{
public:
    D(int d)
    {
        cout<<"D(int i)"<<endl;
        _data = d;
    }
    void dis()
    {
        cout<<_data<<endl;
    }
};

int main()
{
    D d(10);
    d.dis();
    return 0;
}
