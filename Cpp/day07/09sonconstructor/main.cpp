#include <iostream>

using namespace std;

//�����๹��Ĺ��̵���
//���䣺1 �����޲�  2 ����  3  Ĭ�ϲ���
//���ø���Ĺ�����������ᱻ���á�û���˱��䣬������ʽ���á�
//���� �����б��� ���� ����ν

//������Ƕ�Ӷ���Ĺ�����������ᱻ���ã�û�б��䣬������ʽ����

class C
{
public:
    int c;
    C(int k)
    {
        cout<<"C()"<<endl;
        c = k;
    }

};

class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a = i;
    }

    int a;
};

class B:public A
{
public:
    B(int i, int j, int k)
        :A(i),c(k)         //��ʽ����
    {
        cout<<"B()"<<endl;
        b = j;
    }

    int b;
    C c;
};

int main()
{
    B b(3,5,10);
    cout<<"a = "<<b.a<<endl;
    cout<<"b = "<<b.b<<endl;
    cout<<"c = "<<b.c.c<<endl;
    return 0;
}
