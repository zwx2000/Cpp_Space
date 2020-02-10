#include <iostream>

using namespace std;

//const data mamber
//const func member
//const obj

//const修饰的对象，其内可以有非const数据成员，但不可修改,只能调用const成员函数
//针对const 有可能修饰对象，往往提供两个版本，构成重载

class A
{
public:
    A(int x, int y):x_(x),y_(y){}
    void dis() const
    {
        cout<<x_<<y_<<endl;
    }

private:
    int x_;
    int y_;
};

void func(const A & a)
{
    a.dis();
}


int main()
{
    const A a(3,4);
    a.dis();
    return 0;
}
