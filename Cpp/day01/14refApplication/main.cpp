#include <iostream>

using namespace std;

//�����ã��ȼ��ڴ������򣬰�һ�����������õķ�ʽ��������һ��������
//���͵ȼ�����չ�˸ñ�����������

//void mySwap(int a, int b)
//{

//}

void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void mySwap(int &ra, int &rb)
{
    ra ^= rb;
    rb ^= ra;
    ra ^= rb;
}

int main()
{
    int a = 3;
    int b = 5;
//    mySwap(&a,&b);
//    int t = a;
//    a = b;
//    b = t;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    mySwap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
