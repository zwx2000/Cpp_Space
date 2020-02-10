#include <iostream>
#include "b.h"

using namespace std;

//static 共享 协作

//static修饰数据成员，需要初始化，不可以类内初始化
//类外初始化，需要类名空间，且不需要static

//类的声明与实现分开的时候，初始化在.h .cpp中？ .cpp
//大小,static声明的数据成员，不占用类对象的大小，存储在data rw段
//命名空间，即类名，A
//访问,既可以通过对象访问，也可以不通过对象，直接通过类型访问

class A
{
public:
    int m_,n_;
    static int share_;
};

int A::share_ = 200;

int main()
{
    A a;
//    cout<<a.share_<<endl;
    A::share_ = 500;
    cout<<A::share_<<endl;
    return 0;
}

int main1()
{
    A a;
    cout<<a.n_<<endl;
    cout<<a.m_<<endl;

    cout<<a.share_<<endl;
    cout<<sizeof(A)<<sizeof (a)<<endl;
    return 0;
}
