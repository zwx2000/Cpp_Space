#include <iostream>

using namespace std;

//static_cast ��һ�������Ͽ�����ʽת��������һ�������ϣ�������ʾ�ľ�̬ת��
int main()
{
    //˫��
    double d; int i;
    d = static_cast<double>(i);
    i = static_cast<int>(d);

    d = static_cast<double>(10)/3;
    cout<<d<<endl;

    //����

    void *p; int *q;
//    q = (int*)malloc(sizeof(10)*10);
    p = q;
    q = static_cast<int*>(p);

    return 0;
}
