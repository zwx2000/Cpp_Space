#include <iostream>

using namespace std;

//const ���� �����ݳ�Ա ����Ҫ��ʼ��
//const ��ʼ�� һ����� ����
//             ��һ�� ��ʼ���б� Initial list
//initial list һ���� Ч�ʵ����� Ϊ����չһЩ����չ�Ĺ��ܣ��ṩ����������ǰ취

//const���ε����ݳ�Ա�������ڷ�const������ʹ�ã����ǲ����Ը���

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
