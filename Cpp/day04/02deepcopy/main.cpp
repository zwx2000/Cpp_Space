#include <iostream>
#include <string.h>

using namespace std;

//shallow copy ������󲻺��ж��ϵĿռ䣨*��,��ʱǳ���������������󣬲���Ҫ��ʵ��
//��������к��ж��ϵĿռ䣨*������ʱǳ������������������Ҫ��ʵ��
//ǳ������������ ��double free

//ͬ����󷽷��У����д��Σ����Է�����˽�г�Ա�������򲻿ɡ�


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
