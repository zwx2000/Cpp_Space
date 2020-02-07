#include <iostream>

using namespace std;

//const_cast ֻ������ָ�������,ȥconst��
//const_cast ���Ϊ��const semantic�Ĳ���
//��const ����-->const����/ָ��->ԭ��const �����޸�

//const ����ɲ�����ȥconst��
//��const��������const�����޸�
//��ͼremoveԭ��const�Ķ����״̬ ִ��д��������δ����


int main()
{
    const int a = 100;
    const int &ra = a;

    const_cast<int&>(ra) = 200; //δ������Ϊ
    cout<<a<<endl;
    cout<<ra<<endl;

    struct Data
    {
        int a;
    };
    const Data d = {40};
    const Data & rd = d;
    const_cast<Data&>(rd).a = 100;
    cout<<d.a<<endl;
    cout<<rd.a<<endl;

    return 0;
}

int main1()
{
    int a;
    const int & ra = a;
    a = 100;
    cout<<a<<endl;
    const_cast<int&>(ra) = 300;
    cout<<ra<<endl;
    cout<<a<<endl;

    const int *p = &a;
    *const_cast<int*>(p) = 400;
    cout<<*p<<endl;

    return 0;
}
