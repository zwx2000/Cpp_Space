#include <iostream>

using namespace std;

//const ���κ����Ժ󣬳�ŵ���ı�,�ڱ��������ᷢ���ı����ݳ�Ա����Ϊ,
//ֻ�ܵ���const��Ա����

//const���ɵ����غ�������const�������ȵ��÷�const�汾
//const����zhiֻ�ܵ���const�汾���ܶ�ⳣ���ṩ�����汾

//inline const static ���� �� ����

class A
{
public:
    A(int x, int y):x_(x),y_(y){}
    void foo();
//    {
//        cout<<"void foo()"<<endl;
//        cout<<x_<<y_<<endl;

//    }

    void foo() const;
//    {
//        cout<<"void foo() const"<<endl;
//        cout<<x_<<y_<<endl;
//    }

    static void func();
    inline void xxx();

private:
    int x_;
    int y_;
};

int main()
{
    const A a(3,4);
    a.foo();
    return 0;
}

void A::foo()
{
    cout<<"void foo()"<<endl;
    cout<<x_<<y_<<endl;

}

void A::foo() const
{
    cout<<"void foo() const"<<endl;
    cout<<x_<<y_<<endl;
}

void A::func()
{

}

inline void A::xxx()
{

}

#if 0
class A
{
public:
    A(int x, int y):x_(x),y_(y){}
    void foo() const
    {
        cout<<x_<<y_<<endl;

    }

    void func() const
    {
        cout<<x_<<y_<<endl;
    }

private:
    int x_;
    int y_;
};
#endif


#if 0

//const�����ຯ����Ա������������ȫ�ֺ���
//const���ɵ���������

int add(int &a, int &b)
{
    return a+b;
}

int add(const int &a, const int &b)
{
    return a+b;
}

class A
{
public:
    void foo()
    {

    }

    void foo() const
    {

    }
};



int main()
{
    int a = 3;
    int b = 5;
    cout<<add(a,b)<<endl;
    cout<<add(3,5)<<endl;
    return 0;
}
#endif
