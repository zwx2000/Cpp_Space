#include <iostream>

using namespace std;

//const data mamber
//const func member
//const obj

//const���εĶ������ڿ����з�const���ݳ�Ա���������޸�,ֻ�ܵ���const��Ա����
//���const �п������ζ��������ṩ�����汾����������

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
