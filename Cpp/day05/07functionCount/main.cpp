#include <iostream>

using namespace std;

//static ���κ�����Ŀ����Ϊ�˹���̬����

class A
{
public:
    void foo()
    {
        cout<<"void foo()"<<endl;
        fooCount++;
    }
    static int invokefooCount()
    {
        return fooCount;
    }

private:
    int m_,n_;
    static int fooCount;
};

int A::fooCount = 0;

int main()
{
    A m;
    {
        A a,b,c;
        a.foo();
        b.foo();
        c.foo();

        cout<<a.invokefooCount()<<endl;
    }
    cout<<A::invokefooCount()<<endl;

//    cout<<A::fooCount<<endl;

    return 0;
}
