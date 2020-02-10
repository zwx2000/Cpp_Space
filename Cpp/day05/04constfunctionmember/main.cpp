#include <iostream>

using namespace std;

//const 修饰函数以后，承诺不改变,在本函数不会发生改变数据成员的行为,
//只能调用const成员函数

//const构成的重载函数，非const对象，优先调用非const版本
//const对象，zhi只能调用const版本，很多库常见提供两个版本

//inline const static 声明 和 定义

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

//const修饰类函数成员，不可以修饰全局函数
//const构成的重载问题

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
