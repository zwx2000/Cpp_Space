#include <iostream>
#include <string.h>

using namespace std;

//shallow copy 如果对象不含有堆上的空间（*）,此时浅拷贝可以满足需求，不需要自实现
//如果对象中含有堆上的空间（*），此时浅拷贝不能满足需求，需要自实现
//浅拷贝，重析构 即double free

//同类对象方法中，进行传参，可以访问其私有成员，其他则不可。


class DateStr
{
public:
    DateStr()
    {
        _str = new char[1024];
        strcpy(_str,"C++ is the best language in the world\n");
    }

    DateStr(const DateStr & another)
    {
        _str = new char[strlen(another._str)+1];
        strcpy(_str,another._str);
    }

    ~DateStr()
    {
        delete []_str;
    }

    void dis()
    {
        cout<<_str<<endl;
    }

private:
    char * _str;
};

int main()
{
    DateStr ds;
    ds.dis();

    DateStr ds2(ds);
    ds2.dis();

    return 0;
}
