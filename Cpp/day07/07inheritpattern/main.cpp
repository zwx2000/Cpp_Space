#include <iostream>

using namespace std;

//�̳з�ʽ��Ӱ���������Ա�ķ��ʷ�ʽ��Ӱ���˸����Ա�������ڲ��Ͷ������Ȩ��

//protected ���ⲿ����ʱ�ȼ���private
//protected ��public�̳��пɼ�

//����       public       protected       private
//public
//����       public       protected       ���ɼ�

class A
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class B:public A
{
public:
    void func()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
//        cout<<pri<<endl; // ���ɼ�
    }
    int pubb;
protected:
    int prob;
private:
    int prib;
};

class C:public B
{
public:
    void foo()
    {
        cout<<pro<<endl;
    }
};

int main()
{
//    B b;
//    b.pub;
//    b.pro;
//    b.pri;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;

    return 0;
}
