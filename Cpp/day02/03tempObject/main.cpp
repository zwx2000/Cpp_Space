#include <iostream>

using namespace std;

//��ʱ���� ������ȡ��ַ�Ķ���

//����
//���ʽ
//��������ֵ
//���Ͳ�ͬ�ı���

int foo()
{
    int a = 100;
    return a;
}

int main()
{
    double d = 3.14; //int & t = d; const int & rd = t;
    const int &rd = d;

    cout<<"d = "<<d<<endl;
    cout<<"rd = "<<rd<<endl;

    d = 4.14;
    cout<<"d = "<<d<<endl;
    cout<<"rd = "<<rd<<endl;
    return 0;
}

int main1()
{
    const int & cc = 55;
    cout<<cc<<endl;
    int a=3; int b=5;
    const int &ret = a+b;

    const int &ra = foo();

    double d = 100.12;
    const int &rd = d;

    return 0;
}
