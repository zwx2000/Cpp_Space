#include <iostream>

using namespace std;

//const 修饰 类数据成员 必须要初始化
//const 初始化 一种情况 类内
//             另一种 初始化列表 Initial list
//initial list 一方面 效率的问题 为了扩展一些新扩展的功能，提供解决场所或是办法

//const修饰的数据成员，可以在非const函数中使用，但是不可以更改

class A
{
public:
    A(int i):i_(i){}

    void dis()
    {
        cout<<i_<<endl;
    }

private:
    const int i_;
};

int main()
{
    A a(100);
    a.dis();
}

#if 0
class A
{
public:
    A(int &zz):x(100),y(200),z(zz)
    {
        cout<<"const x = "<<x<<endl;
        this->y = 200;
        cout<<z<<endl;
    }

private:
    const int x;// = 100;
    int y;
    int &z;
};

int main()
{
    int z;
    A a(z);
    return 0;
}
#endif
