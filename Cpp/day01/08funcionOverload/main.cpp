#include <iostream>

using namespace std;

//�������ػ���������ĺ����������ĺ��������ﾳ����������
//��������� Ҳ��һ�ֺ�������
//Ҳ��һ�ּ�����Ҫ

//���صĹ���
//1 ��������ͬ
//2 �����Ĳ��������͡�������˳��ͬ�����ɹ�������
//3 ��������ֵ�����Ͳ�����Ϊ�������صı�־

//ambiguous ������

//ƥ�����
//1 �ϸ�ƥ��
//2 �ϸ�ƥ�䲻���� Ѱ���Ƿ�����ʽת��


void foo(double a) //foo_d
{
    cout<<"double";
}

void foo(long b)  //foo_l
{
    cout<<"long";
}

void foo(int b)  //foo_i
{
    cout<<"long";
}

int main()
{
    long a;
    foo(a);
    return 0;
}

#if 0
int abs()
{}
float abs()
{}
int main()
{
    int a = abs();
    float b = abs();

    cout<<abs()<<endl;
}


void foo(int a) {

}
void foo(int a, int b) {

}
void foo(float a) {

}
void foo(int a, float b) {

}

int main()
{
    return 0;
}
#endif

#if 0
int abs(int a)
{
    return a>0? a : -a;
}

float abs(float a)
{
    return a>0? a : -a;
}

int main()
{
    int a = -5;
    cout<<abs(a)<<endl;

    float b = -1.23;
    cout<<abs(b)<<endl;

    return 0;
}
#endif

#if 0
void func(int a)
{
    cout<<"void func(int a)"<<endl;
}

void func(float a)
{
    cout<<"void func(float a)"<<endl;
}

void func(char a)
{
    cout<<"void func(char a)"<<endl;
}

int main()
{
    int a = 1;
    func(a);
    float b = 1.2;
    func(b);
    char c = 'a';
    func(c);
    return 0;
}
#endif
