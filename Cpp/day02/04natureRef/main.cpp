#include <iostream>

using namespace std;

void foo(int & ri, char & rc)
{
    cout<<sizeof(ri)<<sizeof (rc)<<endl;
}

struct TypeC
{
    char c;
};

struct TypeP
{
    char *pc;
};

struct TypeR
{
    char &pr;
};

int main()
{
    int a; char c;
    foo(a,c);

    cout<<"sizeof(TypeC) = "<<sizeof(TypeC)<<endl;
    cout<<"sizeof(TypeP) = "<<sizeof(TypeP)<<endl;
    cout<<"sizeof(TypeR) = "<<sizeof(TypeR)<<endl;

    int &ra = a;

    //�����Ǹ�ָ�룬�����ʼ������ָ�룬һ���������ɸı�
    //int * const p
    //�����û�п��ٿռ�
    //�ײ�ʵ��ʱ����Ϊ��ָ��




    return 0;
}
