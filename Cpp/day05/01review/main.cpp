#include <iostream>

using namespace std;

//�ɲ��������һ�����������ǳ����

class A
{
public:
    A(){}
    ~A(){
        if(_str!=nullptr)
        {
            delete _str;
            _str = nullptr;
        }
    }
    A(const A &){}
    A & operator=(const A &){
        return *this;
    }

    char *_str;
};

class Test
{
public:
    Test()
    {
        p = new char[1024];
    }
    char buf[1024];//ջ���ԵĿռ�
    char *p;
};

int main()
{
//    Test *pt = new Test;
//    Test cppt = *pt;

    Test t;
    Test *pt = new Test;
    return 0;
}
