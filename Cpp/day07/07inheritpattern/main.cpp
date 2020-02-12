#include <iostream>

using namespace std;

//继承方式不影响派生类成员的访问方式，影响了父类成员在子类内部和对象访问权限

//protected 在外部访问时等价于private
//protected 在public继承中可见

//父类       public       protected       private
//public
//子类       public       protected       不可见

class A
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class B:public A
{
public:
    void func()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
//        cout<<pri<<endl; // 不可见
    }
    int pubb;
protected:
    int prob;
private:
    int prib;
};

class C:public B
{
public:
    void foo()
    {
        cout<<pro<<endl;
    }
};

int main()
{
//    B b;
//    b.pub;
//    b.pro;
//    b.pri;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;

    return 0;
}
