#include <iostream>

using namespace std;

//static ���γ�Ա��������Ҫ��������̬����
//�����⣬�����Ͷ���

//��̬��Ա����ֻ�ܷ��ʾ�̬�ĳ�Ա�����ܷ��ʷǾ�̬�ĳ�Ա
//����Ϊ��̬��Ա������û��thisָ��

//�Ǿ�̬���������ʾ�̬�ĳ�Ա�ǿ��Ե�
class A
{
public:
    static void manageA();
    static void manageB();
    void foo()
    {
        cout<<a<<endl;
        manageA();
        manageB();
    }

private:
    static int a;
    int x_;
};

int A::a = 100;

void A::manageA()
{
    cout<<a<<endl;
//    cout<<x_<<endl;
//    foo();
    manageB();
}

int main()
{
    A a;
    a.foo();

    a.manageA();
    a.manageB();

    A::manageA();
    A::manageB();

    return 0;
}
