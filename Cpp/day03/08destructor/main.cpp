#include <iostream>

using namespace std;

//析构器不是必须的,在没有堆空间对象中，默认的就好，在对象有堆空间的情形下，必须

//析构器自动调用，在什么时候调用，对象销毁时

//1 与类同名 无参 无返回 前面加一个~
//2 在对象被销毁前，自动调用，被调用用于处理清理工作(处理堆对象)
//3 在对象被销毁前，栈上对象，堆上对象

//4 系统提供一个空体析构器

struct Date
{
public:
    Date(int y=0, int m=0, int d=0)
        :year(y),month(m),day(d)
    {}

private:
    int year;
    int month;
    int day;
};

int main()
{
    {
        Date d;
    }
    cout << "yyyyyyy" << endl;

    Date *pd = new Date;

    return 0;
}
