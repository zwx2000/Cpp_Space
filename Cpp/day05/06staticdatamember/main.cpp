#include <iostream>
#include "b.h"

using namespace std;

//static ���� Э��

//static�������ݳ�Ա����Ҫ��ʼ�������������ڳ�ʼ��
//�����ʼ������Ҫ�����ռ䣬�Ҳ���Ҫstatic

//���������ʵ�ַֿ���ʱ�򣬳�ʼ����.h .cpp�У� .cpp
//��С,static���������ݳ�Ա����ռ�������Ĵ�С���洢��data rw��
//�����ռ䣬��������A
//����,�ȿ���ͨ��������ʣ�Ҳ���Բ�ͨ������ֱ��ͨ�����ͷ���

class A
{
public:
    int m_,n_;
    static int share_;
};

int A::share_ = 200;

int main()
{
    A a;
//    cout<<a.share_<<endl;
    A::share_ = 500;
    cout<<A::share_<<endl;
    return 0;
}

int main1()
{
    A a;
    cout<<a.n_<<endl;
    cout<<a.m_<<endl;

    cout<<a.share_<<endl;
    cout<<sizeof(A)<<sizeof (a)<<endl;
    return 0;
}
